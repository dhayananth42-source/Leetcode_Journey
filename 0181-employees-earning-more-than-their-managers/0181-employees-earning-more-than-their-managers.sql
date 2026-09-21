# Write your MySQL query statement below
Select e.name as Employee from Employee e where e.salary > (Select m.salary from Employee m where e.managerId=m.id);