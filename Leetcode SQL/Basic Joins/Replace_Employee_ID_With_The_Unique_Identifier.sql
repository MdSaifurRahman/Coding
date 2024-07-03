Select EmployeeUni.unique_id, Employees.name
From Employees
LEFT JOIN EmployeeUNI ON Employees.id = EmployeeUNI.id
