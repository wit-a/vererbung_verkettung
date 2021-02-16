//vererbung

#include <iostream>

using namespace std;

#ifndef VERERBUNG_H
#define VERERBUNG_H
/* 
* * * Class Kfz * * *
Die Classe 
*/
class Kfz {
private:
// speichert die Daten des KFZ von Kennzeichen und Gewiicht 
    string kennzeichen_kfz;
    double zul_ges_gew_kfz;
// speichert die Adresse des nächsten Kfz Node
    Kfz* next_adress_of_kfz;
public:
    void kennzeichenEingabeKfz(string&);
    string kennzeichenAusgabeKfz();
    void zulGesGewEingabeKfz(double);
    double zulGesGewAusgabeKfz();
    Kfz();
};
// * * * END Class Kfz * * *
// * * * Class Pkw * * *
class Pkw : public Kfz {
private:
    int anzahl_sitze_pkw;
    int anzahl_tuer_pkw;
public:
    void anzahlSitzeEingabePkw(int);
    int anzahlSitzeAusgabePkw();
    void anzahlTuerEingabePkw(int);
    int anzahlTuerAusgabePkw();

    Pkw();
};
// * * * END Class Pkw * * *
// * * * Class Lkw * * *
class Lkw : public Kfz {
private:
    int anzahl_achsen_lkw;
    string aufbau_lkw;
public:
    void anzahlAchsenEingabeLkw(int);
    int anzahlAchsenAusgabeLkw();
    void aufbauEingabeLkw(string);
    string aufbauAusgabeLkw();

    Lkw();
};
// * * * END Class Lkw * * *
// * * * Class Anhaenger * * *
class Anhaenger : public Kfz {
private:
    int art_bremse_anhaenger;
    string aufbau_anhaenger;
public:
    void artBremseEingabeAnhaenger(int);
    int artBremseAusgabeAnhaenger();
    void aufbauEingabeAnhaenger(string);
    string aufbauAusgabeAnhaenger();

    Anhaenger();
};

#endif // VERERBUNG_H
