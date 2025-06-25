# Write your MySQL query statement below
select * from cinema
WHERE id%2!=0 AND description <> 'boring'
ORDER BY rating desc;
