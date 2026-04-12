# Write your MySQL query statement below
select name
from Customer
where id != 2 and referee_id != 2 or referee_id is null