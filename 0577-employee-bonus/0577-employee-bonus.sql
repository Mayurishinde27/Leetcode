# Write your MySQL query statement below

SELECT Employee.name, Bonus.bonus FROM Employee LEFT JOIN Bonus
ON Employee.empId = Bonus.empID
WHERE Bonus.bonus <1000 OR Bonus.bonus IS NULL ;

