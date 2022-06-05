// Opšte napomene za sve klase:
// ● Atributi ne smeju da budu javni
// ● Kreirati sve potrebne javne metode koje će obezbediti da program radi (uključujući konstruktore i destruktor)
// ● Izbeći na svaki način dupliranje koda u celom projektu
// ● Pridržavati se osnovnih principa objektno orijentisanog programiranja (nasleđivanje, modularnost, polimorfizam, enkapsulacija)

// Avio kompanija omogućava rezervaciju karata za letove sa šaltera do većeg broja destinacija.
// Kompanija podržava dva tipa letova, redovne linije i čarter letovi.
// Imformacioni sistem podržava rad kompanije. 
// Redovni letovi moraju da imaju informacije o polaznoj i dolaznoj destinaciji (char*), 
// datumu i vremenu poletanja (char* oblika yyyy-MM-dd HH:mm:ss),
// broju mesta u avionu (int) 
// i broju rezervisanih mesta u avionu (int). 
// Potrebno je obezbediti rezervaciju jednog mesta na letu ako nisu sva mesta rezervisana. Omogućiti štampanje svih podataka o letu.

// Čarter letovi čuvaju informacije o polaznoj i dolaznoj destinaciji (char*),
// datumu i vremenu poletanja (char*), 
// broju mesta u redovnom avionu (int), 
// broju mesta u vanrednom avionu (int) i broju rezervisanih mesta u avionu (int).
//  Potrebno je obezbediti rezervaciju jednog mesta na letu ako nisu sva mesta u vanrednom avionu rezervisana. 
// Omogućiti štampanje svih podataka o letu.

// Sistem za podršku rada avio kompanije pamti sve letove u okviru jedinstvenog niza
// čiji se maksimalni broj letova postavlja na početku pri konfiguraciji sistema,
// a broj letova koji se trenutno nalazi u sistemu ažurira pri dodavanju ili brisanju nekog leta.
// Pri gašenju sistema obezbediti da se svi letovi uneti u njega obrišu. Sistem treba da ima mogućnost da:
// ●	doda zadati let u listu letova
// ●	obriše zadati let iz liste letova na osnovu zadatih destinacija i vremena poletanja
// ●	rezerviše kartu za let između zadatih destinacija u zadato vreme
// ●	uredi letove po vremenu poletanja (za realizaciju ove mogućnosti napraviti operator poređenja)
// ●	štampa podatke o svim letovima u sistemu.
// Korišćenjem prethodno definisanog:
// ●	Kreirati sistem koji može da prihvati maksimalno 100 letova
// ●	Kreirati nekoliko redovnih i čarter letova i dodati ih u sistem
// ●	Obrisati barem dva uneta leta
// ●	Rezervisati nekoliko karata na nekom od letova
// ●	Urediti letove po vremenu
// ●	Štampati podatke o letovima koji se nalaze u sistemu.
