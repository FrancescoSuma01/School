# Diagramma relazionale Canzoni

Canzone(idCanzone(pk), titolo, durata, idAlbum(fk))
Album(idAlbum(pk), titolo, anno, idBand(fk))
Band(idBand(pk), nome)
