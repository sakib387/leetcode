# Write your MySQL query statement below
SELECT name 
FROM Employee  e1
where (select (count(managerId)) from Employee e2 where e2.managerId=e1.id)>=5