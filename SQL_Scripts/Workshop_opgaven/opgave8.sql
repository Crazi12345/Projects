select bil.bil_id, bil.model, sum(reservedel.pris)/(select count(distinct reservedel.pris))
from bil,reparation,resrep,reservedel
where bil.bil_id=reparation.bil_id
and reparation.reparation_id=resrep.reparation_id 
and resrep.reservedel_id=reservedel.reservedel_id

group by bil.bil_id



