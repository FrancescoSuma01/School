**Schema (MySQL v8.0)**

    create table dipartimenti(id_dip int auto_increment, nome varchar(15) default 'depname', sede varchar(20), provincia varchar(20), primary key(id_dip));
    
    create table personale(matricola int auto_increment, nominativo varchar(50), bdate date, qualifica varchar(10), stipendio float, id_dip int, primary key(matricola), foreign key(id_dip) references dipartimenti(id_dip) on delete cascade on update cascade);
    
    alter table personale add column supervisore int, add constraint foreign key(supervisore) references personale(matricola) on delete set null on update cascade;
    
    create table prodotti(id_prod INT UNSIGNED AUTO_INCREMENT, nome_prodotto VARCHAR(30), prezzo float, id_dip int, PRIMARY KEY(id_prod), foreign key(id_dip) REFERENCES dipartimenti(id_dip) on delete set null on update cascade);
    
    create table componenti(id_comp INT UNSIGNED  AUTO_INCREMENT, nome VARCHAR(30),
    costo double, fornitore VARCHAR(50),PRIMARY KEY(id_comp));
    
    create table composizione(id_prod INT UNSIGNED, id_comp int unsigned, unita int, PRIMARY KEY(id_prod, id_comp), foreign key(id_prod) REFERENCES prodotti(id_prod) ON DELETE CASCADE ON UPDATE CASCADE, foreign key(id_comp) REFERENCES componenti(id_comp) ON DELETE CASCADE ON UPDATE CASCADE );
    
    update personale set supervisore = 1 where matricola between 2 and 16 and id_dip = 1;

---

**Query #1**

    INSERT INTO `dipartimenti` VALUES (1,'dip1','Bari','Bari'),(2,'dip2','Trani','Bari'),(3,'dip3','Massafra','Taranto'),(4,'dip4','Grottaglie','Taranto'),(5,'dip5','Surbo','Lecce');

There are no results to be displayed.

---
**Query #2**

    INSERT INTO `personale` VALUES (1,'mario rossi','1960-05-05','Q7',3456,1,NULL),(2,'gino rossi','1960-05-05','Q1',3456,1,NULL),(3,'mario bianchi','1960-10-07','Q2',3755,4,NULL),(4,'gino verdi','1970-11-07','Q2',4755,3,NULL),(5,'mario bianchi','1965-09-03','Q6',2755,1,NULL),(6,'carlo neri','1960-11-08','Q6',1755,4,NULL),(7,'gino rossi','1960-05-05','Q1',3456,3,NULL),(8,'mario bianchi','1960-10-07','Q2',3755,4,NULL),(9,'gino verdi','1970-11-07','Q2',4755,1,NULL),(10,'mario bianchi','1965-09-03','Q6',2755,3,NULL),(11,'carlo neri','1960-11-08','Q3',1755,1,NULL),(12,'laura motta','1977-06-11','Q2',1289,2,NULL),(13,'laura altini','1977-03-21','Q1',2189,2,NULL),(14,'bianca monti','1987-06-11','Q3',1289,3,NULL),(15,'tina rossi','1971-02-12','Q5',2389,4,NULL),(16,'pina gialli','1975-04-04','Q7',2289,4,NULL);

There are no results to be displayed.

---
**Query #3**

    INSERT INTO `prodotti` VALUES (1,'prodotto1',123.5,1),(2,'prodotto2',313.25,2),(3,'prodotto3',153.5,3),(4,'prodotto4',128.95,4),(5,'prodotto5',216.35,5);

There are no results to be displayed.

---
**Query #4**

    INSERT INTO `componenti` VALUES (1,'comp1',5.21,'F1 spa'),(2,'comp2',1.21,'F2 spa'),(3,'comp3',15.21,'F2 srl'),(4,'comp4',4.5,'F1 spa'),(5,'comp5',8.5,'F2 srl');

There are no results to be displayed.

---
**Query #5**

    INSERT INTO `composizione` VALUES (1,1,2),(1,2,4),(2,1,5),(2,3,1),(3,3,1),(3,4,2),(3,5,1),(4,1,6),(5,1,25),(5,2,11);

There are no results to be displayed.

---
**Query #6**

    select stipendio from personale where supervisore is not null order by stipendio DESC;

There are no results to be displayed.

---
**Query #7**

    select sum(stipendio) AS sommaStipendi from personale GROUP BY id_dip;

| sommaStipendi |
| ------------- |
| 16177         |
| 3478          |
| 12255         |
| 13943         |

---
**Query #8**

    select round(avg(stipendio),2) AS mediaStipendi from personale GROUP BY id_dip;

| mediaStipendi |
| ------------- |
| 3235.4        |
| 1739          |
| 3063.75       |
| 2788.6        |

---
**Query #9**

    SELECT * FROM componenti JOIN composizione ON componenti.id_comp = composizione.id_comp;

| id_comp | nome  | costo | fornitore | id_prod | id_comp | unita |
| ------- | ----- | ----- | --------- | ------- | ------- | ----- |
| 1       | comp1 | 5.21  | F1 spa    | 1       | 1       | 2     |
| 1       | comp1 | 5.21  | F1 spa    | 2       | 1       | 5     |
| 1       | comp1 | 5.21  | F1 spa    | 4       | 1       | 6     |
| 1       | comp1 | 5.21  | F1 spa    | 5       | 1       | 25    |
| 2       | comp2 | 1.21  | F2 spa    | 1       | 2       | 4     |
| 2       | comp2 | 1.21  | F2 spa    | 5       | 2       | 11    |
| 3       | comp3 | 15.21 | F2 srl    | 2       | 3       | 1     |
| 3       | comp3 | 15.21 | F2 srl    | 3       | 3       | 1     |
| 4       | comp4 | 4.5   | F1 spa    | 3       | 4       | 2     |
| 5       | comp5 | 8.5   | F2 srl    | 3       | 5       | 1     |

---
**Query #10**

    SELECT id_prod, round(SUM(costo * unita),2) AS costo_totale FROM composizione JOIN componenti ON composizione.id_comp = componenti.id_comp GROUP BY composizione.id_prod;

| id_prod | costo_totale |
| ------- | ------------ |
| 1       | 15.26        |
| 2       | 41.26        |
| 4       | 31.26        |
| 5       | 143.56       |
| 3       | 32.71        |

---
**Query #11**

    SELECT id_prod, round(SUM(costo * unita),2) AS costo_totale FROM composizione JOIN componenti ON composizione.id_comp = componenti.id_comp WHERE composizione.id_prod = 1;

| id_prod | costo_totale |
| ------- | ------------ |
| 1       | 15.26        |

---

[View on DB Fiddle](https://www.db-fiddle.com/)