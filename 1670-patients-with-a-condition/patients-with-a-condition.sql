# Write your MySQL query statement below
select *
from Patients
where conditions like '% DIAB1%' OR conditions LIKE 'DIAB1%';