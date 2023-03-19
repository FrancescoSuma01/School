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
nomeParametro int, FOREIGN KEY (nomeParametro) REFERENCES nomeTabellaEsterna(nomeParametroesterno) ON DELETE CASCADE ON UPDATE CASCADE;
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

Conta le ricorrenze di un elemento

```SQL
select paramtro, count(parametro.colonna) from tabella parametro group by parametro;

select P.nome, count(P.codProdotto) from prodotto P group by P.nome;
```
