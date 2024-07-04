select m.name
from Employee m, Employee x
where x.managerId = m.id
group by x.managerId
having count(x.managerId)>4