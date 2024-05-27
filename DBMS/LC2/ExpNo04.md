# Familiarization of SQL Constraints

1. **Create new table Persons:**
    ```sql
    CREATE TABLE Persons (
        PersonID INTEGER PRIMARY KEY,
        Name VARCHAR(255) NOT NULL,
        Aadhar NUMERIC UNIQUE NOT NULL,
        Age INTEGER CHECK (Age > 18)
    );
    ```

2. **Create table Orders with a foreign key constraint:**
    ```sql
    CREATE TABLE Orders (
        OrderID INTEGER PRIMARY KEY,
        OrderNumber VARCHAR(255) NOT NULL,
        PersonID INTEGER,
        FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
    );
    ```

3. **Display the structure of Persons table:**
    ```sql
    DESCRIBE Persons;
    ```

4. **Display the structure of Orders table:**
    ```sql
    DESCRIBE Orders;
    ```

5. **Add emp_no as the primary key of the table Employee:**
    ```sql
    ALTER TABLE Employee ADD PRIMARY KEY (emp_no);
    ```

6. **Add dept_no as the primary key of the table Department:**
    ```sql
    ALTER TABLE Department ADD PRIMARY KEY (dept_no);
    ```

7. **Add dept_no in the Employee table as the foreign key reference to the table Department with on delete cascade:**
    ```sql
    ALTER TABLE Employee 
    ADD FOREIGN KEY (dept_no) 
    REFERENCES Department(dept_no) 
    ON DELETE CASCADE;
    ```

8. **Drop the primary key of the table Orders:**
    ```sql
    ALTER TABLE Orders DROP PRIMARY KEY;
    ```
