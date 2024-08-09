# Write your MySQL query statement below
select w.id
from Weather w
join Weather v
where w.temperature>v.temperature and w.recordDate = date_add(v.recordDate, interval 1 day)