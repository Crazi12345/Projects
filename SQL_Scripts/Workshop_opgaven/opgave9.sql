select  mekaniker.navn, sum(reservedel.pris)
from mekaniker, reservedel, resrep, reparation
where mekaniker. mekaniker_id=reparation.mekaniker_id
and reparation.reparation_id=resrep.reparation_id 
and resrep.reservedel_id=reservedel.reservedel_id
group by mekaniker.mekaniker_id
order by  sum(reservedel.pris)desc
