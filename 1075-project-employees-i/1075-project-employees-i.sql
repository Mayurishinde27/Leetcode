# Write your MySQL query statement below

SELECT a.project_id ,ROUND((SUM(b.experience_years) / COUNT(a.project_id) ), 2) AS average_years FROM Project a
JOIN Employee b
ON (a.employee_id = b.employee_id)
GROUP BY project_id;
