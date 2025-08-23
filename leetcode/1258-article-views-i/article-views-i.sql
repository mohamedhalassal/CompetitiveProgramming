# Write your MySQL query statement below
select distinct author_id as id  #as id you can change column name
from Views
where author_id=viewer_id
order by id asc