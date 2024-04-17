## Function to Count Employees with a Given Name

The function `CountEmployeesWithName` takes the name of an employee as a parameter and returns the number of employees with that name in the database.

```sql
DELIMITER //
CREATE FUNCTION CountEmployeesWithName(emp_name VARCHAR(255)) RETURNS INT
BEGIN
    DECLARE emp_count INT;
    SELECT COUNT(*) INTO emp_count FROM EMP WHERE ENAME = emp_name;
    RETURN emp_count;
END //
DELIMITER ;

```


### Usage Instructions
To use the CountEmployeesWithName function, follow these steps:

- Set the employee name: Assign the name of the employee you want to count to the variable emp_name.

- Call the function: Use the CountEmployeesWithName function to get the count of employees with the specified name.

- Check the count: Based on the count returned by the function, perform the necessary actions such as updating details for employees with unique names or displaying error messages for other cases.

```sql
-- Example usage:
DECLARE emp_name VARCHAR(255);
DECLARE emp_count INT;

-- Set the employee name
SET emp_name = 'John';

-- Call the function to get the count of employees with the given name
SET emp_count = CountEmployeesWithName(emp_name);

-- Check the count and perform the necessary action
IF emp_count = 1 THEN
    -- Update details for the employee with unique name
    UPDATE EMP SET ... WHERE ENAME = emp_name;
ELSEIF emp_count = 0 THEN
    -- Display error message for no employee
    SELECT 'No Employee' AS ErrorMessage;
ELSE
    -- Display error message for multiple employees
    SELECT 'Multiple Employees' AS ErrorMessage;
END IF;


```