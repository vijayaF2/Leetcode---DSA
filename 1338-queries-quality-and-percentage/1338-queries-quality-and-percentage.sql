# Write your MySQL query statement below
SELECT query_name, ROUND(AVG(rating/position),2) as quality,  
ROUND(sum(case when rating<3 then 1 else 0 end)*100/count(*),2)as poor_query_percentage from Queries 
 group by query_name;