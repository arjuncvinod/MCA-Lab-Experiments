DELIMITER //

CREATE PROCEDURE PrintNumbersInRange (
    IN num1 INT,
    IN num2 INT
)
BEGIN
    DECLARE start_num INT;
    DECLARE end_num INT;

    IF num1 < num2 THEN
        SET start_num = num1;
        SET end_num = num2;
    ELSE
        SET start_num = num2;
        SET end_num = num1;
    END IF;

    WHILE start_num <= end_num DO
        SELECT start_num;
        SET start_num = start_num + 1;
    END WHILE;
END //

DELIMITER ;