select Count(bil_id), kunde.navn
from kunde,bil
where kunde.kunde_id=bil.kunde_id 
group by kunde.navn
having count(bil_id)>1