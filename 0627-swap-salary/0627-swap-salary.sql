# Write your MySQL query statement below
#xor 
-- UPDATE Salary SET sex= CHAR(ASCII('f')^ASCII('m')^ASCII(sex));

-- UPDATE Salary set sex= 
-- CASE 
-- WHEN sex='m' then 'f'
-- else 'm'
-- END;


-- ternary operator

UPDATE Salary SET sex=IF(sex='f','m','f');