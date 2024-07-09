select e.employee_id
from Employees e
where e.salary<30000
and e.manager_id is not null
and e.manager_id not in (select employee_id from Employees)
order by e.employee_id