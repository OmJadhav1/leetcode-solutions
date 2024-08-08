-- # Write your MySQL query statement below
select employee_id
from Employees
where salary<30000 and manager_id NOT IN (
  SELECT employee_id FROM Employees
)
order by employee_id