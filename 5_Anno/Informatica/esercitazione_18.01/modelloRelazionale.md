# Modello ER

Film(idFilm(pk), titolo, annoProduzione, location, genere, regista, idAttore(fk))
Attore(idAttore(pk), nome, cognome, nazionalita, bDate)
Cinema(idCinema(pk), nome, posti, citta)
ruolo(idAttore(fk),)
