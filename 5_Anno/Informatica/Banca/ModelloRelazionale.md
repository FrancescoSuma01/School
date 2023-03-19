# Banca: Schema Relazionale

**Filiale**(idFiliale(pk), nome, citta, patrimonio)
**Conto**(numeroConto(pk), saldo, idCliente(fk))
**Intestario**((contoCorrente(fk), cf(fk))(pk))
**Cliente**(idCliente(pk), cf, nominativo, indirizzo, citta, numeroTelefono)
**Richiede**((idPrestito(fk), cf(fk))(pk))
**Prestito**(idPrestito(pk), idCliente(fk), somma, idFiliale(pk), matricolaImpiegato, startDate, endDate)
