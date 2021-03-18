#Select * from bil;
#select * from kunde;
#select * from mekaniker;
#select * from reparation;
#select * from reservedel;
#select * from resrep;

select kunde.navn
from kunde, bil, reparation, mekaniker 
where mekaniker.mekaniker_id=reparation.mekaniker_id and reparation.bil_id=bil.bil_id and bil.kunde_id=kunde.kunde_id and mekaniker.navn="Palle";