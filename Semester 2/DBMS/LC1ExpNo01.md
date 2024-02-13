# Experiment No : 1

![image](https://github.com/arjuncvinod/MCA-Lab-Experiments/assets/68469520/17e04b69-1aa9-4bba-9852-63f6bed25907)


```sql

CREATE TABLE employee(ID char(5),DeptID numeric(2),Name char(15),Design char(15),Basic numeric(10,2),Gender char(1));

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
##### 10. Display the ID, name, department and basic of all the employees who are either

```sql
SELECT COUNT(*) AS MaleCount FROM employee WHERE Gender = 'M';
```
##### 

```sql

```
##### 

```sql

```
##### 

```sql

```
##### 

```sql

```
##### 

```sql

```
##### 

```sql

```
