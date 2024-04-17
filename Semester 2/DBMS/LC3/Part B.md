# SQL Queries for EMP Table

28. **Display the deptid and total number of employees as "Number of Dept_Employees" for only those departments with more than 3 employees:**
    ```sql
    SELECT DEPT_ID, COUNT(*) AS "Number of Dept_Employees" 
    FROM EMP 
    GROUP BY DEPT_ID 
    HAVING COUNT(*) > 3;
    ```

29. **Display the deptid and minimum salary as "Lowest Salary" for those departments with minimum salary above 2500:**
    ```sql
    SELECT DEPT_ID, MIN(SAL) AS "Lowest Salary" 
    FROM EMP 
    GROUP BY DEPT_ID 
    HAVING MIN(SAL) > 2500;
    ```

30. **Display the names of employees whose salary is the maximum given by their department:**
    ```sql
    SELECT ENAME 
    FROM EMP E 
    WHERE SAL = (SELECT MAX(SAL) FROM EMP WHERE DEPT_ID = E.DEPT_ID);
    ```

31. **Display the names of the employees, if their salary is greater than the salary of some other employees:**
    ```sql
    SELECT E1.ENAME 
    FROM EMP E1 
    WHERE EXISTS (SELECT * FROM EMP E2 WHERE E1.SAL > E2.SAL);
    ```

32. **Display the names of the employees, if their salary is greater than the salary of some other employees or less than the salary of some other employees:**
    ```sql
    SELECT E1.ENAME 
    FROM EMP E1 
    WHERE EXISTS (SELECT * FROM EMP E2 WHERE E1.SAL > E2.SAL)
    OR EXISTS (SELECT * FROM EMP E3 WHERE E1.SAL < E3.SAL);
    ```

33. **Add a column city for employee table:**
    ```sql
    ALTER TABLE EMP ADD CITY VARCHAR(255);
    ```

34. **Add a column city for department:**
    ```sql
    ALTER TABLE DEPARTMENT ADD CITY VARCHAR(255);
    ```

35. **Find the names of employees who are from the same city as their company:**
    ```sql
    SELECT E.ENAME 
    FROM EMP E 
    JOIN DEPARTMENT D ON E.DEPT_ID = D.DEPTID 
    WHERE E.CITY = D.CITY;
    ```

36. **Display the names of the departments giving smallest total salary:**
    ```sql
    SELECT D.DNAME 
    FROM EMP E 
    JOIN DEPARTMENT D ON E.DEPT_ID = D.DEPTID 
    GROUP BY D.DEPTID 
    ORDER BY SUM(E.SAL) ASC 
    LIMIT 1;
    ```

37. **Display the names of employees joined during 1990's:**
    ```sql
    SELECT ENAME 
    FROM EMP 
    WHERE YEAR(JOINING_DATE) BETWEEN 1990 AND 1999;
    ```

38. **Display the names of employees joined during the month of August:**
    ```sql
    SELECT ENAME 
    FROM EMP 
    WHERE MONTH(JOINING_DATE) = 8;
    ```

39. **Display the details of departments not having any employees (take the help of exists clause to do this):**
    ```sql
    SELECT D.DEPTID, D.DNAME 
    FROM DEPARTMENT D 
    WHERE NOT EXISTS (SELECT * FROM EMP WHERE EMP.DEPT_ID = D.DEPTID);
    ```

40. **Display the details of departments having more than 2 employees:**
    ```sql
    SELECT D.DEPTID, D.DNAME 
    FROM DEPARTMENT D 
    JOIN EMP E ON D.DEPTID = E.DEPT_ID 
    GROUP BY D.DEPTID 
    HAVING COUNT(*) > 2;
    ```

41. **For each department that has more than 4 employees, retrieve the department id and number of employees who are getting salary more than 5000:**
    ```sql
    SELECT D.DEPTID, COUNT(*) AS "Number of Employees with Salary > 5000" 
    FROM DEPARTMENT D 
    JOIN EMP E ON D.DEPTID = E.DEPT_ID 
    WHERE E.SAL > 5000 
    GROUP BY D.DEPTID 
    HAVING COUNT(*) > 4;
    ```

42. **Insert the details of some employees who are not assigned with a department (did is null):**
    ```sql
    INSERT INTO EMP (EMPNO, ENAME, JOB, MGR, HIREDATE, SAL, COMM, DID) 
    VALUES 
    (emp_no_value, 'EmployeeName', 'JobTitle', mgr_value, '2024-04-17', sal_value, comm_value, NULL);
    ```

43. **Display the names of employees and their department ids. If an employee is not assigned with a department, display his name with department id as "null":**
    ```sql
    SELECT ENAME, COALESCE(DEPT_ID, 'null') AS DEPT_ID 
    FROM EMP;
    ```

44. **Display the names of employees and their department ids. If an employee is not assigned with a department, display his name with department id as 0:**
    ```sql
    SELECT ENAME, COALESCE(DEPT_ID, 0) AS DEPT_ID 
    FROM EMP;
    ```
    [Go to Part A](Part%20A.md)