select bil.model
from bil
group by bil.model
having count(bil.model)>1