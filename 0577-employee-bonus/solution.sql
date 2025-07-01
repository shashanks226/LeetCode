# Write your MySQL query statement below
select e.name, b.bonus from Employee  AS e
Left join Bonus AS b 
ON e.empId = b.empId
where b.bonus < 1000 OR b.bonus IS NULL;
