CREATE TABLE Customer (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    city VARCHAR(100),
    credits DECIMAL(10, 2)
);


DELIMITER //

CREATE PROCEDURE GetCustomerDetails (
    IN customer_name VARCHAR(100)
)
BEGIN
    SELECT *
    FROM Customer
    WHERE name = customer_name;
END //

DELIMITER ;