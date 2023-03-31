# Qwery SQL

Creazione del database

```SQL
CREATE DATABASE IF NOT EXISTS nomeDatabase;
```

Creazione di una tabella

```SQL
CREATE TABLE IF NOT EXISTS nomeTabella(attributi);
```

Definizione di una __Primary Key__ int artificiale

```SQL
nomeChiave int unsigned not null AUTO_INCREMENT primary key;
```

Definizione di una __Foreign Key__

```SQL
nomeParametro tipo, FOREIGN KEY (nomeParametro) REFERENCES nomeTabellaEsterna(nomeParametroesterno);
```

Utilizzare l'opzione '**ON DELETE CASCADE**' per specificare se si desidera che le righe vengano eliminate in una tabella figlio quando le righe corrispondenti vengono eliminate nella tabella padre. '**ON UPDATE CASCADE**' aggiorna le righe corrispondenti della tabella figlio quando vengono aggiornate le righe della tabella padre.

__Prodotto Cartesiano__: è un'operazione che combina tutte le tuple di una tabella con tutte le tuple di un'altra tabella. Il risultato del prodotto cartesiano è una nuova tabella contenente tutte le combinazioni di tuple delle due tabelle.

```SQL
select * from tabella1, tabella2;
```

__Inner Join__: restituisce solo le tuple che corrispondono in entrambe le tabelle.

```SQL
select * from tabella1 inner join tabella2 on tabella1.colonna1 = tabella2.colonna2;
```

__Natural Join__: è un'operazione di join che combina due tabelle sulla base delle colonne con gli stessi nomi e gli stessi tipi di dati.

```SQL
select * from tabella1 natural join tabella2;
```

__Right outer join__: restituisce tutte le tuple della tabella di destra e solo le tuple della tabella di sinistra che corrispondono.

```SQL
select * from tabella1 right outer join tabella2 on tabella1.colonna1 = tabella2.colonna2;
```

Funzioni di aggregazione

- __SUM__: calcola la somma dei valori in una colonna

```SQL
SELECT SUM(nomedelcampo) FROM nomedellatabella;
```

- __AVG__: calcola la media dei valori in una colonna

```SQL
SELECT AVG(nomedelcampo) FROM nomedellatabella;
```

- __MAX__: restituisce il valore massimo in una colonna

```SQL
SELECT MAX(nomedelcampo) FROM nomedellatabella;
```

- __MIN__: restituisce il valore minimo in una colonna

```SQL
SELECT MIN(nomedelcampo) FROM nomedellatabella;
```

- __COUNT__: restituisce il numero di righe in una tabella o il numero di valori non nulli in una colonna

```SQL
SELECT COUNT(*) FROM nomedellatabella; (per il conteggio di tutte le righe nella tabella)
```

- __GROUP BY__: raggruppa le righe in base a una o più colonne e applica una funzione di aggregazione a ogni gruppo

```SQL
SELECT nomecampo1, nomecampo2, COUNT(nomecampo3) FROM nomedellatabella GROUP BY nomecampo1, nomecampo2;
```

- __HAVING__: specifica una condizione per filtrare i risultati ottenuti con GROUP BY

```SQL
SELECT nomecampo1, nomecampo2, COUNT(nomecampo3) FROM nomedellatabella GROUP BY nomecampo1, nomecampo2 HAVING COUNT(nomecampo3) > 10;
```
