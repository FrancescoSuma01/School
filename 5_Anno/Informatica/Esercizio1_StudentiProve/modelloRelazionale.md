# Esercizio 1 (Studenti - prova): modello relazionale

Studente(idStudente(pk), matricola, nome, cognome, bDate)

Materia(idMateria(pk), nome, oreSettimanali)

Prova(idProva(pk), tipo, idMateria(fk))

Effettua(pk(idStudente(fk), idProva(fk)), data, voto)
