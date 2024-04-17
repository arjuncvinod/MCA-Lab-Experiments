# Organization Database SQL Commands

1. **Create a database:**
    ```sql
    CREATE DATABASE OrganizationDB;
    ```

2. **Select the current database:**
    ```sql
    USE OrganizationDB;
    ```

3. **Create tables:**
    - Employee table:
    ```sql
    CREATE TABLE Employee (
        emp_no VARCHAR(20),
        emp_name VARCHAR(255),
        dob DATE,
        address TEXT,
        mobile_no BIGINT,
        dept_no VARCHAR(20),
        salary INTEGER
    );
    ```
    - Department table:
    ```sql
    CREATE TABLE Department (
        dept_no VARCHAR(20),
        dept_name VARCHAR(255),
        location VARCHAR(255)
    );
    ```

4. **List all tables in the current database:**
    ```sql
    SHOW TABLES;
    ```

5. **Display the structure of the Employee and Department tables:**
    ```sql
    DESCRIBE Employee;
    DESCRIBE Department;
    ```

6. **Add a new column 'Designation' to the table Employee:**
    ```sql
    ALTER TABLE Employee ADD Designation VARCHAR(255);
    ```

7. **Drop the column 'location' from the Department table:**
    ```sql
    ALTER TABLE Department DROP COLUMN location;
    ```
