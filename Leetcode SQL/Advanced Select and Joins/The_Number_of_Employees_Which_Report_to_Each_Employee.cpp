SELECT 
    e.employee_id, 
    e.name,
    COUNT(p.employee_id) AS reports_count,
    ROUND(AVG(p.age)) AS average_age
FROM 
    Employees e
JOIN 
    Employees p 
ON 
    e.employee_id = p.reports_to
GROUP BY 
    e.employee_id, 
    e.name
HAVING 
    COUNT(p.employee_id) > 0
ORDER BY 
    e.employee_id ASC;
