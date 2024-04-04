# Układy Cyfrowe i Systemy Wbudowane - projekt

## Cel projektu
Celem projektu jest zaprojektowanie i realizacja układu będącego portem szeregowym _RS232_ na płycie FPGA _S3EStarter_. Port powinien działać asynchronicznuie w trybie _full duplex_ i pozwalać na na odbieranie jak i nadawanie danych.

## Narzędzia
Projekt zostanie zrealizowany przy pomocy języka `VHDL` i środowiska _Xilinx ISE_. Dodatkowo wykorzystane zostaną materiały pomocnicze znajdujące się na stronie [prowadzącego projektu](http://indyk.ict.pwr.wroc.pl/ucyfr/fpga/) oraz [instrukcji płyty spartan](https://docs.xilinx.com/v/u/en-US/ug230).

## Materiały
* [RS232 - Wikibooks](https://en.wikibooks.org/wiki/Serial_Programming/RS-232_Connections#Signal_Bits)

## Zadania
- [x] Zapoznanie się z protokołem _RS232_
- [x] Zaprojektowanie maszyny stanów będącej nadajnikiem _RS232_. Na zbiór stanów składać się mają: _stan bezczynności_, _stan nadawania_.
- [x] Symulacja zaprojektowanego nadajnika
- [x] Przetesowanie działania na płytce
- [x] Zaprojektowanie maszyny stanów będącej odbiornikiem _RS232_. Powinien on wyłapać **bit startu**, a następnie przy pomocy licznika modulo próbkować kolejne bity ramki.
- [ ] Symulacja zaprojektowanego odbiornika.
- [ ] Przetestowanie działania odbiornika na płytce.
