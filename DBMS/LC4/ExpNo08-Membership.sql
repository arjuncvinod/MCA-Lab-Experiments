DELIMITER //

CREATE PROCEDURE DetermineMembership(
    IN customer_credits INT,
    OUT membership_level VARCHAR(255)
)
BEGIN
    IF customer_credits > 5000 THEN
        SET membership_level = 'Membership Platinum';
    ELSEIF customer_credits >= 1000 AND customer_credits <= 5000 THEN
        SET membership_level = 'Gold';
    ELSE
        SET membership_level = 'Silver';
    END IF;
END //

DELIMITER ;




CALL DetermineMembership(3500, @membership_level);
SELECT @membership_level AS MembershipLevel;
