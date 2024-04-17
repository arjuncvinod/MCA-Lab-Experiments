DELIMITER //

CREATE PROCEDURE InvertNumber (
    IN num INT
)
BEGIN
    DECLARE inverted_num INT DEFAULT 0;
    DECLARE remainder INT;
    
    WHILE num > 0 DO
        SET remainder = num % 10;
        SET inverted_num = inverted_num * 10 + remainder;
        SET num = FLOOR(num / 10);
    END WHILE;

    SELECT inverted_num AS 'Inverted Number';
END //

DELIMITER ;