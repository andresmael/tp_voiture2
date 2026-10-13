#include <iostream>
#include "voiture.h"

using namespace std;

int main() {
    cout << "========== TP Voiture ==========" << endl << endl;

    CVoiture voiture("Peugeot", "208", 100, "Essence");

    voiture.afficherInfos();

    voiture.demarrer();

    voiture.accelerer(50);
    voiture.afficherInfos();

    voiture.ralentir(20);
    voiture.afficherInfos();

    voiture.arreter();
    voiture.afficherInfos();

    // Partie 2 : manipulation de deux voitures (tests demandés dans le README)
    CVoiture voiture1("Renault", "Clio", 90, "Diesel");
    CVoiture voiture2("Toyota", "Yaris", 75, "Essence");

    voiture1.demarrer();
    voiture1.deplacer(1.5, 2.0); // ~2.5 km
    voiture1.afficherPosition();
    cout << "Kilometrage voiture1 : " << voiture1.getKilometrage() << " km" << endl << endl;

    voiture2.demarrer();
    voiture2.deplacer(-1.0, -5.0); // ~5.1 km
    voiture2.afficherPosition();
    cout << "Kilometrage voiture2 : " << voiture2.getKilometrage() << " km" << endl << endl;

    cout << "========== Fin du programme ==========" << endl;

    return 0;
}