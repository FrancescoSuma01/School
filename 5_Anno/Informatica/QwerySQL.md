# Qwery SQL

Creazione del database

```SQL
CREATE DATABASE IF NOT EXISTS nomeDatabase;
```

Creazione di una tabella

```SQL
CREATE TABLE IF NOT EXISTS nomeTabella(attributi);
```

Definizione di una Primary Key int artificiale

```SQL
nomeChiave int unsigned not null AUTO_INCREMENT primary key;
```

Definizione di una Foreign Key

```SQL
nomeParametro tipo, FOREIGN KEY (nomeParametro) REFERENCES nomeTabellaEsterna(nomeParametroesterno);
```

Utilizzare l'opzione '**ON DELETE CASCADE**' per specificare se si desidera che le righe vengano eliminate in una tabella figlio quando le righe corrispondenti vengono eliminate nella tabella padre. '**ON UPDATE CASCADE**' aggiorna le righe corrispondenti della tabella figlio quando vengono aggiornate le righe della tabella padre.

Prodotto Cartesiano

```SQL
select * from tabella1, tabella2;
```

Inner Join

```SQL
select * from tabella1 inner join tabella2 on tabella1.colonna1 = tabella2.colonna2;
```

Natural Join

```SQL
select * from tabella1 natural join tabella2;
```

Right outer join

```SQL
select * from tabella1 right outer join tabella2 on tabella1.colonna1 = tabella2.colonna2;
```

Funzioni di aggregazione

- SUM: calcola la somma dei valori in una colonna

```SQL
SELECT SUM(nomedelcampo) FROM nomedellatabella;
```

- AVG: calcola la media dei valori in una colonna

```SQL
SELECT AVG(nomedelcampo) FROM nomedellatabella;
```

- MAX: restituisce il valore massimo in una colonna

```SQL
SELECT MAX(nomedelcampo) FROM nomedellatabella;
```

- MIN: restituisce il valore minimo in una colonna

```SQL
SELECT MIN(nomedelcampo) FROM nomedellatabella;
```

- COUNT: restituisce il numero di righe in una tabella o il numero di valori non nulli in una colonna

```SQL
SELECT COUNT(*) FROM nomedellatabella; (per il conteggio di tutte le righe nella tabella)
```

- GROUP BY: raggruppa le righe in base a una o più colonne e applica una funzione di aggregazione a ogni gruppo

```SQL
SELECT nomecampo1, nomecampo2, COUNT(nomecampo3) FROM nomedellatabella GROUP BY nomecampo1, nomecampo2;
```

- HAVING: specifica una condizione per filtrare i risultati ottenuti con GROUP BY

```SQL
SELECT nomecampo1, nomecampo2, COUNT(nomecampo3) FROM nomedellatabella GROUP BY nomecampo1, nomecampo2 HAVING COUNT(nomecampo3) > 10;
```
