SELECT p.product_name, SUM(o.unit) As unit
FROM (SELECT * FROM Orders WHERE order_date LIKE '2020-02-%') AS o
LEFT JOIN Products p ON o.product_id = p.product_id
GROUP BY o.product_id
HAVING SUM(o.unit) >= 100;
