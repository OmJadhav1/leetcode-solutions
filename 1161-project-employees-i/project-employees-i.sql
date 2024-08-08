# Write your MySQL query statement below
select  p.project_id, ROUND(AVG(e.experience_years),2) AS average_years
from  Project p
left join Employee e
on e.employee_id=p.employee_id
group by p.project_id