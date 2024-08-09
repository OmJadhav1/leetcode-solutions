-- # Write your MySQL query statement below
select round(avg(if(order_date=customer_pref_delivery_date,1,0)*100),2) as immediate_percentage
from Delivery
where (customer_id, order_date) IN  (SELECT customer_id, MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id)