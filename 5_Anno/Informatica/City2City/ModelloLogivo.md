# viaggio modello logico

__Qualifica__(ID_Qualifica(pk), nome)

__Dipendente__(cf(pk), nome, cognome, id, qualifica(fk))

__Ditta__(ID_Ditta(pk), citta, nome)

__GT__(ID(pk), last_man, ID_Ditta(fk))

__Utente__(CF(pk), nome, cognome, num_figli, interesse)

__Prenotazione__(ID_Prenotazione(pk), data, CF(pk))

__Nazione__(ID_Nazione(pk), nome)

__Destinazione__(ID_Destinazione(pk), nome, ID_Nazione(fk))

__Tratta__(ID_Tratta(pk), Orario_Partenza, Orario_Arrivo, tipo, giorno, ID_Destinazione(fk))

__Viaggio__(ID_Viaggio(pk), data, Orario_Partenza, Orario_Arrivo, Numero_Passeggeri, ID_GT(fk), AU_ID(fk), Auz(fk), Ass(fk), ID_Tratta(fk), Id_Prenotazione(fk))
