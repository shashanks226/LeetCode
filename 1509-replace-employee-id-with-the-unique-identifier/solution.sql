# Write your MySQL query statement below
select unique_id,name from Employees es
left Join EmployeeUNI e on e.id=es.id
