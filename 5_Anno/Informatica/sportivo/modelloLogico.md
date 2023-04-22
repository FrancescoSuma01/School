# Modello logico

Studente(matricola(pk), nome, cognome, bDate, Istituto(fk), idAttivita(fk))

Istituto(idIstituto(pk), nome)

Professore(idProfessore(pk), nome, cognome, bDate, idIstituto(fk))

Attivita(idAttivita(pk), nome, specialita, durata, startDate)

Partecipa((idAttivita(fk), matricola(fk))(pk))
