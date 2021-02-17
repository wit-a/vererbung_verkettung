#include "vererbung_verkettung.h"

int main() {
    Kfz Fahrzeug;
    string kennzeichen;
    double zul_gewicht;
    Kfz* adresse_neu_1;

    cout << "geben sie ein Fahrzeug ein\n Kennzeichen: " << endl;
    cin >> kennzeichen;
    cout << "Zul. gesamt Gewicht: " << endl;
    cin >> zul_gewicht;
    adresse_neu_1 = new Kfz(kennzeichen, zul_gewicht);

    cout << adresse_neu_1->kennzeichenAusgabeKfz() << endl;
    cout << adresse_neu_1->zulGesGewAusgabeKfz() << endl;


    return 0;
}
