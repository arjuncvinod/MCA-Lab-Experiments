DELIMITER //

CREATE PROCEDURE WithdrawAmount (
    IN account_id INT,
    IN withdraw_amount DECIMAL(10, 2)
)
BEGIN
    DECLARE current_balance DECIMAL(10, 2);
    
    SELECT balance INTO current_balance
    FROM accounts
    WHERE id = account_id;
    
    IF current_balance IS NULL THEN
        SELECT 'Account does not exist' AS 'Message';
    ELSE
        IF current_balance - withdraw_amount >= 1000 THEN
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