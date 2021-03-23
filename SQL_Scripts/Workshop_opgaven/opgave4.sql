select bil.registreringsnr, bil.model, year(reparation.dato) from bil, reparation
where reparation.bil_id=bil.bil_id and year(dato) like 2019