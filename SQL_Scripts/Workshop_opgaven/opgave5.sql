#select * from resrep,reparation;

select reservedel.pris*1.07, reservedel.navn
from reservedel
#where navn not in (select navn from reservedel, resrep 
