# Experiment No : 1

![image](https://github.com/arjuncvinod/MCA-Lab-Experiments/assets/68469520/17e04b69-1aa9-4bba-9852-63f6bed25907)


```sql

CREATE TABLE employee(
    ID char(5),
    DeptID numeric(2),
    Name char(15),
    Design char(15),
    Basic numeric(10,2),
    Gender char(1));
```
```sql
INSERT INTO employee(ID, DeptID, Name, Design, Basic, Gender)
VALUES (101, 1, 'Ram', 'Typist', 2000, 'M'),
       (102, 2, 'Arun', 'Analyst', 6000, 'M'),
       (121, 1, 'Ruby', 'Typist', 2010, 'F'),
       (156, 3, 'Mary', 'Manager', 4500, 'F'),
       (123, 2, 'Mridula', 'Analyst', 6000, 'F'),
       (114, 4, 'Menon', 'Clerk', 1500, 'M'),
       (115, 4, 'Tim', 'Clerk', 1500, 'M'),
       (127, 2, 'Kiran', 'Manager', 4000, 'M');

```

##### 1. Get the description of the table.

```sql
DESC employee;
```
##### 2. Display all the records from the above table.

```sql
SELECT * FROM employee;
```
##### 3. Display the ID, name, designation and basic salary of all the employees.

```sql
SELECT ID, Name, Design, Basic FROM employee;
```

##### 4. Display ID and name of all the employees from department no.2

```sql
SELECT ID, Name FROM employee WHERE DeptID = 2;
```
##### 5. Display ID, name, desig,deptID and basic, DA, HRA and net salary of all employees with suitable headings as DA, HRA and NET_SAL respectively.(DA is 7.5% of basic, and NET_SAL is Basic + DA+ HRA)

```sql
SELECT ID,Name,Design AS Designation,DeptID,Basic,
    (Basic * 0.075) AS DA,
    (Basic * 0.10) AS HIRA,
    (Basic + (Basic * 0.075) + (Basic * 0.10)) AS "NET SAL"
    FROM employee;

```
##### 6. Display ID, name, desig, deptID and basic salary in the descending order of basic pay.

```sql
SELECT ID,Name,Design,DeptID,Basic FROM employee ORDER BY Basic DESC;

```
##### 7. Display the employees whose designation is TYPIST.

```sql
SELECT ID, Name, Design AS Designation, DeptID, Basic
   FROM employee
   WHERE Design = 'Typist';

```
##### 8. Display all details of employees whose designation is either ANALYST or MANAGER.

```sql
SELECT * FROM employee WHERE Design IN ('Analyst', 'Manager');

```
##### 9. Display all designations without duplicate values.

```sql
SELECT DISTINCT Design AS Designation FROM employee;
```
##### 10. Display the ID, name, department and basic of all the employees who are either MANAGER or CLERK and the basic salary is in the range of 1400 and 4500.

```sql
SELECT ID,Name,DeptID,BAsic 
    FROM employee 
    WHERE (Design="Manager"or"Clerk")AND(Basic BETWEEN 1400 and 4500);

```
##### 11. Display the number of male staff members

```sql
SELECT COUNT(*) AS MaleCount FROM employee WHERE Gender = 'M';
```
##### 12. Find the maximum salary of each designation.

```sql
SELECT Design AS Designation, MAX(Basic) AS MaxSalary
    FROM employee
    GROUP BY Design;

```
##### 13. Add a column manager-id into the above table.

```sql
ALTER TABLE employee ADD manager_id INT;
```
##### 14. Update values of manager id of employees as null for 101, 101 for 102, 121, 156. 102 for 123,114,115.121 for 127.

```sql
UPDATE employee SET manager_id = NULL WHERE ID IN (101, 121, 156);
```
```sql

UPDATE employee SET Manager_ID = 102 WHERE ID in(114,115,123);
```
```sql
UPDATE employee SET Manager_ID = 121 WHERE ID ="127";
```
##### 15. Display the manager id of the employee Ram.

```sql
SELECT manager_id FROM employee WHERE Name = 'Ram';

```
##### 16. Display the employee names and their manager name.

```sql
 SELECT e.Name AS EmployeeName, m.Name AS ManagerName
    FROM employee e
    LEFT JOIN employee m ON e.manager_id = m.ID;

```
##### 17. Find the average salary of each department.

```sql
SELECT DeptID, AVG(Basic) AS AverageSalary 
    FROM employee
    GROUP BY DeptID;
```
##### 18. Find the maximum salary given to employees.

```sql
SELECT MAX(Basic) AS MaxSalary FROM employee;
```
##### 19. Find the number of employees in each department.

```sql
SELECT DeptID, COUNT(*) AS EmployeeCount 
    FROM employee 
    GROUP BY DeptID;
```
##### 20. Find the number of departments existing in the organization.
```sql
SELECT COUNT(DISTINCT DeptID) AS NumberOfDepartments  FROM employee;
```
