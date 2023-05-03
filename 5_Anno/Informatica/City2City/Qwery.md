# Qwery

1. Elenco dei viaggi svolti verso una determianta città, in un intervallo di date fornite in input

```SQL
SELECT v.partenza, v.arrivo
FROM Viaggio v
INNER JOIN Tratta t ON v.ID_Tratta = t.ID_Tratta
INNER JOIN Destinazione d ON t.ID_Destinazione = d.ID_Destinazione
INNER JOIN Ditta dt ON v.ID_GT = dt.ID_Ditta
WHERE d.citta = 'nome_citta'
AND v.partenza BETWEEN "2022-06-15 14:30:00" AND "2022-06-20 23:59:59";
```
