# Write your MySQL query statement below

SELECT a.product_id, ROUND((SUM(b.units*a.price)/ SUM(b.units)),2) AS average_price
FROM Prices a 
JOIN UnitsSold b
ON (a.product_id = b.product_id)
WHERE (b.purchase_date BETWEEN a.start_date AND a.end_date)
GROUP BY product_id;