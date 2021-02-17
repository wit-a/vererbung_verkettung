//vererbung

#include <iostream>

using namespace std;

#ifndef VERERBUNG_H
#define VERERBUNG_H
/* 
* * * Class Kfz * * *
Die Classe Kfz entält grundlegende Daten zum KFZ diese Eigenschaften werden an restliche Classen vererbt
*/
class Kfz {
private:
// speichert die Daten des KFZ von Kennzeichen und Gewiicht 
    string kennzeichen_kfz;
    double zul_ges_gew_kfz;
// speichert die Adresse des nächsten Kfz Node
    Kfz* next_adress_of_kfz;
public:
// Eingabe/Ausgabe funktionen
    void kennzeichenEingabeKfz(string&);
    string kennzeichenAusgabeKfz();
    void zulGesGewEingabeKfz(double);
    double zulGesGewAusgabeKfz();

// adressen des Kfz holen/schreiben 
    void adreesseKfz(Kfz*);
    Kfz* adresseKfz();
    Kfz();
    Kfz(string&,double&);
};
// * * * END Class Kfz * * *


// * * * END Liste * * * 
#endif // VERERBUNG_H
