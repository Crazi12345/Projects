select mekaniker.navn
from bil, reparation, mekaniker 
where mekaniker.mekaniker_id=reparation.mekaniker_id 
and reparation.bil_id=bil.bil_id 
and bil.aargang-2021+25<0
group by mekaniker.navn
having count(mekaniker.navn)>1
