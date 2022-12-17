MariaDB [(none)]> CREATE DATABASE IF NOT EXISTS esercizioCanzoni;
Query OK, 1 row affected (0.057 sec)

MariaDB [(none)]> USE esercizioCanzoni;
Database changed
MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS band(idBand int unsigned not null primary key, name varchar(30));Query OK, 0 rows affected (0.125 sec)


MariaDB [esercizioCanzoni]> show tables;
+----------------------------+
| Tables_in_eserciziocanzoni |
+----------------------------+
| band                       |
+----------------------------+
1 row in set (0.009 sec)

MariaDB [esercizioCanzoni]> describe band;
+--------+------------------+------+-----+---------+-------+
| Field  | Type             | Null | Key | Default | Extra |
+--------+------------------+------+-----+---------+-------+
| idBand | int(10) unsigned | NO   | PRI | NULL    |       |
| name   | varchar(30)      | YES  |     | NULL    |       |
+--------+------------------+------+-----+---------+-------+
2 rows in set (0.081 sec)

MariaDB [esercizioCanzoni]> INSERT INTO band values(null, "U2"),(null,"Queen"),(null,"Red Hot Chili Pepers");
ERROR 1062 (23000): Duplicate entry '0' for key 'PRIMARY'
MariaDB [esercizioCanzoni]> INSERT INTO band values(1, "U2"),(2,"Queen"),(3,"Red Hot Chili Pepers"),(4,"Muse");
Query OK, 4 rows affected (0.043 sec)
Records: 4  Duplicates: 0  Warnings: 0

MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS album(idAlbum int unsigned not null auto_increment primary key, title varchar(50), year int, idBand int unsigned not null constraint m references band(idBand));
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'constraint m references band(idBand))' at line 1
MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS album(idAlbum int unsigned not null auto_increment primary key, title varchar(50), year int, idBand int unsigned not null, constraint m foreign key (idBand) references band(idBand));
Query OK, 0 rows affected (0.101 sec)

MariaDB [esercizioCanzoni]> INSERT INTO album values(1, "Will of the People", 2022, 4);
Query OK, 1 row affected (0.045 sec)

MariaDB [esercizioCanzoni]> SELECT * FROM album;
+---------+--------------------+------+--------+
| idAlbum | title              | year | idBand |
+---------+--------------------+------+--------+
|       1 | Will of the People | 2022 |      4 |
+---------+--------------------+------+--------+
1 row in set (0.001 sec)

MariaDB [esercizioCanzoni]> SELECT * FROM album(2, "WAR", 1983, 1),(3, "Californication", 1999, 3),(4, "Innuendo", 1991,2);
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near '(2, "WAR", 1983, 1),(3, "Californication", 1999, 3),(4, "Innuendo", 1991,2)' at line 1
MariaDB [esercizioCanzoni]> SELECT * FROM album;
+---------+--------------------+------+--------+
| idAlbum | title              | year | idBand |
+---------+--------------------+------+--------+
|       1 | Will of the People | 2022 |      4 |
+---------+--------------------+------+--------+
1 row in set (0.001 sec)

MariaDB [esercizioCanzoni]> INSERT INTO album VALUES(2, "WAR", 1983, 1),(3, "Californication", 1999, 3),(4, "Innuendo", 1991,2);
Query OK, 3 rows affected (0.039 sec)
Records: 3  Duplicates: 0  Warnings: 0

MariaDB [esercizioCanzoni]> SELECT * FROM album;
+---------+--------------------+------+--------+
| idAlbum | title              | year | idBand |
+---------+--------------------+------+--------+
|       1 | Will of the People | 2022 |      4 |
|       2 | WAR                | 1983 |      1 |
|       3 | Californication    | 1999 |      3 |
|       4 | Innuendo           | 1991 |      2 |
+---------+--------------------+------+--------+
4 rows in set (0.001 sec)

MariaDB [esercizioCanzoni]> SELECT * FROM canzoni;
ERROR 1146 (42S02): Table 'eserciziocanzoni.canzoni' doesn't exist
MariaDB [esercizioCanzoni]> SELECT * FROM band;
+--------+----------------------+
| idBand | name                 |
+--------+----------------------+
|      1 | U2                   |
|      2 | Queen                |
|      3 | Red Hot Chili Pepers |
|      4 | Muse                 |
+--------+----------------------+
4 rows in set (0.001 sec)

MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS song(idSong int unsigned not null auto_increment primary key, title varchar(50), durata float, idBand int unsigned not null, constraint m foreign key (idBand) references band(idBand));
ERROR 1005 (HY000): Can't create table `eserciziocanzoni`.`song` (errno: 121 "Duplicate key on write or update")
MariaDB [esercizioCanzoni]> show table;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near '' at line 1
MariaDB [esercizioCanzoni]> show tables;
+----------------------------+
| Tables_in_eserciziocanzoni |
+----------------------------+
| album                      |
| band                       |
+----------------------------+
2 rows in set (0.047 sec)

MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS album(idAlbum int unsigned not null auto_increment primary key, title varchar(50), year int, idBand int unsigned not null constraint s references band(idBand));
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'constraint s references band(idBand))' at line 1
MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS album(idAlbum int unsigned not null auto_increment primary key, title varchar(50), year int, idBand int unsigned not null, constraint s foreign key (idBand) references band(idBand));
Query OK, 0 rows affected, 1 warning (0.000 sec)

MariaDB [esercizioCanzoni]> CREATE TABLE IF NOT EXISTS song(idAlbum int unsigned not null auto_increment primary key, title varchar(50), year int, idBand int unsigned not null, constraint s foreign key (idBand) references band(idBand));
Query OK, 0 rows affected (0.088 sec)

MariaDB [esercizioCanzoni]>