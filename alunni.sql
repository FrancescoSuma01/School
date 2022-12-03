-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Creato il: Dic 02, 2022 alle 20:32
-- Versione del server: 10.4.25-MariaDB
-- Versione PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `alunni`
--
CREATE DATABASE IF NOT EXISTS `alunni` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `alunni`;

-- --------------------------------------------------------

--
-- Struttura della tabella `alunno`
--

DROP TABLE IF EXISTS `alunno`;
CREATE TABLE `alunno` (
  `idAlunno` int(10) UNSIGNED NOT NULL,
  `cognome` varchar(20) DEFAULT NULL,
  `nome` varchar(20) DEFAULT NULL,
  `indirizzo` varchar(20) DEFAULT NULL,
  `classe` char(2) DEFAULT NULL,
  `mediaVoto` double DEFAULT NULL,
  `maggiorenne` tinyint(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dump dei dati per la tabella `alunno`
--

INSERT INTO `alunno` (`idAlunno`, `cognome`, `nome`, `indirizzo`, `classe`, `mediaVoto`, `maggiorenne`) VALUES
(1, 'Suma', 'Francesco', 'Informatica', '5B', 7.5, 1),
(2, 'Pippo', 'Lino', 'Informatica', '5A', 8.5, 1),
(3, 'Pluto', 'Gino', 'Informatica', '4A', 6.8, 0),
(4, 'Verdi', 'Mario', 'Informatica', '5B', 6, 1),
(5, 'Paperino', 'Pino', 'Informatica', '5B', 6.5, 0),
(6, 'Taz', 'Nino', 'Informatica', '4A', 6, 0),
(7, 'Rossi', 'Paolo', 'Informatica', '2B', 6.3, 0),
(8, 'Gialli', 'Maria', 'Informatica', '2B', 5, 0),
(9, 'Azzurri', 'Anna', 'Informatica', '2B', 7, 0);

--
-- Indici per le tabelle scaricate
--

--
-- Indici per le tabelle `alunno`
--
ALTER TABLE `alunno`
  ADD PRIMARY KEY (`idAlunno`);

--
-- AUTO_INCREMENT per le tabelle scaricate
--

--
-- AUTO_INCREMENT per la tabella `alunno`
--
ALTER TABLE `alunno`
  MODIFY `idAlunno` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
