# SQL Queries for EMP Table

1. **Display the different designations existing in the organisation:**
    ```sql
    SELECT DISTINCT JOB FROM EMP;
    ```

2. **Display the number of different designations existing in the organisation:**
    ```sql
    SELECT COUNT(DISTINCT JOB) AS NumOfDesignations FROM EMP;
    ```

3. **Display the maximum salary given for female employees:**
    ```sql
    SELECT MAX(SAL) AS MaxFemaleSalary FROM EMP WHERE SEX = 'F';
    ```

4. **Display the female typist:**
    ```sql
    SELECT * FROM EMP WHERE SEX = 'F' AND JOB = 'TYPIST';
    ```

5. **Display the male clerks getting salary more than 3000:**
    ```sql
    SELECT * FROM EMP WHERE SEX = 'M' AND JOB = 'CLERK' AND SAL > 3000;
    ```

6. **Display the details of managers or analysts working for dept id 2:**
    ```sql
    SELECT * FROM EMP WHERE DEPT_ID = 2 AND (JOB = 'MANAGER' OR JOB = 'ANALYST');
    ```

7. **Display the designation and salary of Ruby:**
    ```sql
    SELECT JOB, SAL FROM EMP WHERE ENAME = 'RUBY';
    ```

8. **Add a column joining date to the above table:**
    ```sql
    ALTER TABLE EMP ADD JOINING_DATE DATE;
    ```

9. **Update appropriate values for the joining date field:**
    ```sql
    UPDATE EMP SET JOINING_DATE = '2024-04-17' WHERE ENAME = 'EmployeeName';
    ```

10. **Display the details of employees according to their seniority:**
    ```sql
    SELECT * FROM EMP ORDER BY JOINING_DATE;
    ```

11. **Display the details of employees according to the descending order of their salaries:**
    ```sql
    SELECT * FROM EMP ORDER BY SAL DESC;
    ```

12. **Create a new table DEPARTMENT with fields DEPTID and DNAME. Make DEPTID as the primary key:**
    ```sql
    CREATE TABLE DEPARTMENT (
        DEPTID INTEGER PRIMARY KEY,
        DNAME VARCHAR(255)
    );
    ```

13. **Make DEPTID in employee table to refer to the DEPARTMENT table:**
    ```sql
    ALTER TABLE EMP ADD CONSTRAINT FK_DEPT FOREIGN KEY (DEPT_ID) REFERENCES DEPARTMENT(DEPTID);
    ```

14. **Insert values into the DEPARTMENT table:**
    ```sql
    INSERT INTO DEPARTMENT (DEPTID, DNAME) VALUES
    (1, 'DESIGN'),
    (2, 'CODING'),
    (3, 'TESTING'),
    (4, 'RESEARCH');
    ```

15. **Display the employee name and department name:**
    ```sql
    SELECT E.ENAME, D.DNAME 
    FROM EMP E 
    JOIN DEPARTMENT D ON E.DEPT_ID = D.DEPTID;
    ```

16. **Display the department name of employee Arun:**
    ```sql
    SELECT D.DNAME 
    FROM EMP E 
    JOIN DEPARTMENT D ON E.DEPT_ID = D.DEPTID 
    WHERE E.ENAME = 'ARUN';
    ```

17. **Display the salary given by DESIGN department:**
    ```sql
    SELECT AVG(SAL) AS AvgSalary FROM EMP WHERE DEPT_ID = (SELECT DEPTID FROM DEPARTMENT WHERE DNAME = 'DESIGN');
    ```

18. **Display the details of typist working in DESIGN department:**
    ```sql
    SELECT * FROM EMP WHERE JOB = 'TYPIST' AND DEPT_ID = (SELECT DEPTID FROM DEPARTMENT WHERE DNAME = 'DESIGN');
    ```

19. **Display the salary of employees working in RESEARCH department:**
    ```sql
    SELECT SAL FROM EMP WHERE DEPT_ID = (SELECT DEPTID FROM DEPARTMENT WHERE DNAME = 'RESEARCH');
    ```

20. **List the female employees working in TESTING department:**
    ```sql
    SELECT * FROM EMP WHERE SEX = 'F' AND DEPT_ID = (SELECT DEPTID FROM DEPARTMENT WHERE DNAME = 'TESTING');
    ```

21. **Display the details of employees not working in CODING or TESTING department:**
    ```sql
    SELECT * FROM EMP WHERE DEPT_ID NOT IN (SELECT DEPTID FROM DEPARTMENT WHERE DNAME IN ('CODING', 'TESTING'));
    ```

22. **Display the names of department giving maximum salary:**
    ```sql
    SELECT D.DNAME 
    FROM EMP E 
    JOIN DEPARTMENT D ON E.DEPT_ID = D.DEPTID 
    WHERE E.SAL = (SELECT MAX(SAL) FROM EMP);
    ```

23. **Display the names of departments with minimum number of employees:**
    ```sql
    SELECT D.DNAME 
    FROM DEPARTMENT D 
    LEFT JOIN EMP E ON D.DEPTID = E.DEPT_ID 
    GROUP BY D.DEPTID 
    ORDER BY COUNT(E.DEPT_ID) ASC 
    LIMIT 1;
    ```

24. **Display the second maximum salary:**
    ```sql
    SELECT DISTINCT SAL 
    FROM EMP 
    ORDER BY SAL DESC 
    LIMIT 1 OFFSET 1;
    ```

25. **Display the second minimum salary:**
    ```sql
    SELECT DISTINCT SAL 
    FROM EMP 
    ORDER BY SAL ASC 
    LIMIT 1 OFFSET 1;
    ```

26. **Display the names of employees getting salary greater than the average salary of their department:**
    ```sql
    SELECT ENAME 
    FROM EMP 
    WHERE SAL > (SELECT AVG(SAL) FROM EMP WHERE DEPT_ID = EMP.DEPT_ID);
    ```

27. **Display the names of employees working under the manager Ram:**
    ```sql
    SELECT E.ENAME 
    FROM EMP E 
    JOIN EMP M ON E.MGR = M.EMPNO 
    WHERE M.ENAME = 'RAM';
    ```
 [Go to Part B](Part%20B.md)