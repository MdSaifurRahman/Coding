Select id , count(id) as num
from (
SELECT requester_id AS id FROM RequestAccepted
union all
SELECT accepter_id AS id FROM RequestAccepted
) AS combined_ids
group by id
order by count(id) desc limit 1
