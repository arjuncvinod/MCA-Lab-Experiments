DELIMITER //

CREATE PROCEDURE SumOfSeries (
    IN n INT
)
BEGIN
    DECLARE sum_series INT;
    DECLARE i INT;
    
    SET sum_series = 0;
    SET i = 1;

    WHILE i <= n DO
        SET sum_series = sum_series + i;
        SET i = i + 1;
    END WHILE;

    SELECT sum_series AS 'Sum of Series';
END //

DELIMITER ;
