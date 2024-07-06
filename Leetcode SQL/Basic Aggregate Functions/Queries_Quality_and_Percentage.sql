SELECT query_name,
       ROUND(AVG(rating / position), 2) AS quality,
       ROUND((SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END)/Count(rating))*100,2) as poor_query_percentage
FROM Queries
WHERE query_name IS NOT NULL
GROUP BY query_name;