# Write your MySQL query statement below
select w.id
from Weather w
join Weather v
where w.temperature>v.temperature and v.recordDate = date_sub(w.recordDate, interval 1 day)