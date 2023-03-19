# TABELLA INTERPRETA

Creazione database

```SQL
MariaDB [(none)]> CREATE DATABASE IF NOT EXISTS films;
Query OK, 1 row affected (0.013 sec)

MariaDB [(none)]> use films;
Database changed

```

Creazione tabella Attore

```SQL
MariaDB [films]>  CREATE TABLE IF NOT EXISTS attore(idAttore int unsigned not null AUTO_INCREMENT primary key, nome VARCHAR(30), cognome VARCHAR(30), nazionalita VARCHAR(30), bDate int);
Query OK, 0 rows affected (0.023 sec)
```

Popolamento tabella Attore

```SQL
MariaDB [films]> insert into attore values(null, "Brad", "Pitt", "USA", 1963), (null, "Jason", "Statham", "USA", 1967), (null, "Jennifer", "Anniston", "USA", 1969), (null, "Jenna", "Ortega", "USA", 2002), (null, "Paolo", "Villaggio", "Italia", 1932), (null, "Brad", "Pitt", "USA", 1963), (null, "Ricky", "Menphis", "USA", 1963), (null, "Paola", "Cortellesi", "Italia", 1973);

Query OK, 8 rows affected (0.014 sec)
Records: 8  Duplicates: 0  Warnings: 0
```

Creazione tabella Film

```SQL
MariaDB [films]> CREATE TABLE IF NOT EXISTS film(idFilm int unsigned not null AUTO_INCREMENT primary key, titolo VARCHAR(30), annoProduzione int, location VARCHAR(30), regista VARCHAR(30), genere VARCHAR(30));
Query OK, 0 rows affected (0.047 sec)
```

select * from attore natural join interpreta;

select * from attore join interpreta on attore.idattore=interpreta.idattore;

select COUNT(titolo) as numeroFilm from attore natural join film on interpreta.idFilm=film.idFilm;
