DELIMITER //

CREATE PROCEDURE WithdrawAmount (
    IN account_id INT,
    IN withdraw_amount DECIMAL(10, 2)
)
BEGIN
    DECLARE current_balance DECIMAL(10, 2);
    
    -- Check if the account exists
    SELECT balance INTO current_balance
    FROM accounts
    WHERE id = account_id;
    
    IF current_balance IS NULL THEN
        SELECT 'Account does not exist' AS 'Message';
    ELSE
        -- Check if new balance after withdrawal is at least 1000
        IF current_balance - withdraw_amount >= 1000 THEN
            -- Perform withdrawal
            UPDATE accounts
            SET balance = balance - withdraw_amount
            WHERE id = account_id;
            SELECT 'Withdrawal successful' AS 'Message';
        ELSE
            SELECT 'Insufficient balance after withdrawal' AS 'Message';
        END IF;
    END IF;
END //

DELIMITER ;