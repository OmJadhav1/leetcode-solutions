# Write your MySQL query statement below
select product_name, sum(o.unit) as unit
from Orders o
left join Products p
on o.product_id = p.product_id
where order_date>= "2020-02-01" and order_date<= "2020-02-29" 
group by o.product_id
having unit>=100