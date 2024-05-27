DELIMITER //

CREATE PROCEDURE FindGreatest (
    IN num1 INT,
    IN num2 INT,
    IN num3 INT
)
BEGIN
    DECLARE greatest INT;

    IF num1 >= num2 AND num1 >= num3 THEN
        SET greatest = num1;
    ELSEIF num2 >= num1 AND num2 >= num3 THEN
        SET greatest = num2;
    ELSE
        SET greatest = num3;
    END IF;

    SELECT greatest AS 'Greatest Number';
END //

DELIMITER ;