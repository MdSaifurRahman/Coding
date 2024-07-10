Select user_id,
    CONCAT(
        UPPER(SUBSTRING(name,1,1)),
        LOWER(SUBSTRING(name,2,length(name)-1))
    )as name
from Users    
order by user_id    