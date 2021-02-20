#include "vererbung_verkettung.h"

int main() {
    int art_des_fahrzeuges;
    Liste Liste_Autos;
    Fahrzeug* addresse_neu_1 = NULL;
    Fahrzeug* addresse_neu_2 = NULL;
    bool erstes_fahrzeug = true;
    int counter = 1;

    cout << endl << endl << "Fuhrpark" << endl << endl;
    do {
        cout << "Was moechten Sie eingeben?" << endl
            << "(1) Pkw" << endl
            << "(2) Lkw" << endl
            << "(3) Anhaenger" << endl
            << "(9) Liste Ausgeben" << endl
            << "(10) ende" << endl;
        cin >> art_des_fahrzeuges;

        if (art_des_fahrzeuges == 1) {
            string fahrzeug_var_1 = "N-NN 1111";
            double fahrzeug_var_2 = 111.1 + counter++;
            int pkw_var1 = counter++;
            int pkw_var2 = counter++;
            addresse_neu_1 = new Pkw(pkw_var1, pkw_var2, fahrzeug_var_1, fahrzeug_var_2);
        }
        if (erstes_fahrzeug == true) {
            Liste_Autos.fistNodeListe(addresse_neu_1);
            erstes_fahrzeug = false;
        }
        else {
            addresse_neu_2->addresseFahrzeug(addresse_neu_1);
        }
        addresse_neu_2 = addresse_neu_1;
    } while (art_des_fahrzeuges != 10);

    Liste_Autos.lastNodeListe(addresse_neu_1);

    cout << endl << endl << "ausgabe" << endl << endl;

    addresse_neu_1 = Liste_Autos.fistNodeListe();
    addresse_neu_2 = NULL;
    while (addresse_neu_2 != Liste_Autos.lastNodeListe()) {
        addresse_neu_1->outputDatenFahrzeug();
        addresse_neu_2 = addresse_neu_1;
        addresse_neu_1 = addresse_neu_2->addresseFahrzeug();
    }

    return 0;
}

