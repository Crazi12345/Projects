#select * from resrep,reparation;

select navn
from reservedel
where navn not in (select navn from reservedel, resrep 
where resrep.reservedel_id=reservedel.reservedel_id)