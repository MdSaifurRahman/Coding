Select  * ,
    (case when(x+y>z and z+y>x and z+x>y)then 'Yes' else 'No' end)as triangle
from Triangle    