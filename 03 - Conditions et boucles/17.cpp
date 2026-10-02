#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double amount;
    double rate;
    int years;

    cout << "Entrez le montant initial > ";
    cin >> amount;

    cout << "Entrez le nombre d'annees > ";
    cin >> years;

    cout << "Entrez le taux d'interet annuel en % > ";
    cin >> rate;

    for (int y = years; y > 0; y--)
        amount += amount * rate / 100.;

    cout << "Le montant disponible après " << years  << (years < 1 ? " ans" : " an") << " est de " << amount << " CHF" << fixed << setprecision(2) ;

    return 0;
}

