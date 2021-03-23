select mekaniker.navn, count(reparation.dato)
from mekaniker, reparation
where reparation.mekaniker_id=mekaniker.mekaniker_id and
 month(reparation.dato)<4 or month(reparation.dato)>9
group by mekaniker.navn
order by count(reparation.dato)desc