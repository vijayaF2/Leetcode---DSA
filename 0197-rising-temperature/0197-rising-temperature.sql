# Write your MySQL query statement below
SELECT a.id FROM Weather a JOIN Weather b  on dateDiff(a.recordDate,b.recordDate)=1 WHERE a.temperature>b.temperature;