# College Database SQL Commands



1. **Create a database:**
    ```sql
    CREATE DATABASE CollegeDB;
    ```

2. **Select the current database:**
    ```sql
    USE CollegeDB;
    ```

3. **Create tables:**
    - Student table:
    ```sql
    CREATE TABLE Student (
        roll_no INTEGER,
        name VARCHAR(255),
        dob DATE,
        address TEXT,
        phone_no VARCHAR(15),
        blood_grp VARCHAR(5)
    );
    ```
    - Course table:
    ```sql
    CREATE TABLE Course (
        Course_id INTEGER,
        Course_name VARCHAR(255),
        course_duration INTEGER
    );
    ```

4. **List all tables in the current database:**
    ```sql
    SHOW TABLES;
    ```

5. **Display the structure of the Student table:**
    ```sql
    DESCRIBE Student;
    ```

6. **Drop the column blood_grp from the Student table:**
    ```sql
    ALTER TABLE Student DROP COLUMN blood_grp;
    ```

7. **Add a new column Adar_no with domain number to the table Student:**
    ```sql
    ALTER TABLE Student ADD Adar_no NUMERIC(12);
    ```

8. **Change the datatype of phone_no from varchar to int:**
    ```sql
    ALTER TABLE Student MODIFY phone_no INT;
    ```

9. **Drop the tables:**
    ```sql
    DROP TABLE IF EXISTS Student, Course;
    ```

10. **Delete the database:**
    ```sql
    DROP DATABASE IF EXISTS CollegeDB;
    ```
