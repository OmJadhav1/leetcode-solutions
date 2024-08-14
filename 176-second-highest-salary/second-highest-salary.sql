-- When a subquery doesn't produce any result, its return value is NULL. This behavior is consistent 
-- with SQL standards. thats why wrapped in subquery
select (select distinct salary 
from Employee
order by salary desc limit 1 offset 1) as SecondHighestSalary