DELIMITER //

CREATE FUNCTION GetEmployeeSalary(employee_id INT) RETURNS INT
BEGIN
    DECLARE emp_salary INT;
    SELECT SAL INTO emp_salary FROM EMP WHERE EMPNO = employee_id;
    RETURN emp_salary;
END //

DELIMITER ;



SELECT GetEmployeeSalary(7839) AS EmployeeSalary;
