#ifndef FAHRZEUG_UND_LISTE_H
#define FAHRZEUG_UND_LISTE_H

#include <string>
#include <fstream>
#include <sstream>
#include <ostream>
#include <iostream>
#include <iomanip>
using namespace std;

class Fahrzeug {
private:
    string fahrzeug_kennzeichen;
    double fahrzeug_maximal_gewicht;
    Fahrzeug* fahrzeug_next_address;
public:
    // Adressen fuer die Listen
    void addresseFahrzeug(Fahrzeug*);
    Fahrzeug* addresseFahrzeug();
    // Input in die Klasse
    void inputDatenFahrzeug();
    // Ausgabe der Daten aus der Klasse
    void outputDatenFahrzeug();
    // Konstruktor
    Fahrzeug();
    Fahrzeug(string&, double&);
};
// END Fahrzeug
class Pkw :public Fahrzeug {
private:
    int pkw_anzahl_tueren;
    int pkw_anzahl_sitze;
public:
    // Input in die Klasse
    void inputDatenPkw();
    // Ausgabe der Daten aus der Klasse
    void outputDatenPkw();
    // Konstruktor
    Pkw();
    Pkw(int&, int&, string&, double&);
};
// END Pkw
class Lkw :public Fahrzeug {
private:
    int lkw_anzahl_achsen;
    string lkw_aufbau;
public:
    // Input in die Klasse
    void inputDatenLkw();
    // Ausgabe der Daten aus der Klasse
    void outputDatenLkw();
    // Konstruktor
    Lkw();
};
// END Lkw
class Anhaenger :public Fahrzeug {
private:
    string anhaenger_bremse;
    string anhaenger_aufbau;
public:
    // Input in die Klasse
    void inputDatenAnhaenger();
    // Ausgabe der Daten aus der Klasse
    void outputDatenAnhaenger();
    // Konstruktor
    Anhaenger();
};
// END Anhaenger

class Liste {
private:
    Fahrzeug* first_node;
    Fahrzeug* last_node;
public:
    Fahrzeug* fistNodeListe();
    void fistNodeListe(Fahrzeug*);
    Fahrzeug* lastNodeListe();
    void lastNodeListe(Fahrzeug*);
    Liste();
};
// END Liste

#endif // FAHRZEUG_UND_LISTE_H












