# Write your MySQL query statement below
SELECT d.unique_id, e.name FROM Employees e
LEFT JOIN EmployeeUNI d on e.id=d.id;