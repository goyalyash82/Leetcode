# Write your MySQL query statement belows
select name as Employee from Employee e1 where salary>(select salary from Employee where id=e1.managerId);