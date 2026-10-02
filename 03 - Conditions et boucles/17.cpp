#include <iostream>

using namespace std;

int main() {
    double initial_amount;
    double target_amount;
    double rate;
    int years = 0;

    cout << "Entrez le montant initial > ";
    cin >> initial_amount;

    cout << "Entrez le montant cible > ";
    cin >> target_amount;

    cout << "Entrez le taux d'interet annuel en % > ";
    cin >> rate;

    if (rate <= 0) {
        cout << "Le montant ne sera jamais atteint.";
        return 0;
    }

    for (; initial_amount < target_amount; years++)
        initial_amount += initial_amount * rate / 100.;

    cout << "Le montant cible est atteint apres " << years << (years < 1 ? " ans." : " an.") ;

    return 0;
}

