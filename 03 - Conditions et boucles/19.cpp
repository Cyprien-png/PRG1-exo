#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double amount;
    double rate;
    int years;

    do {
        cout << "Entrez le montant initial > ";
        cin >> amount;
    } while (amount < 1000);

    do {
        cout << "Entrez le nombre d'annees > ";
        cin >> years;
    } while (years <= 0);

    do {
        cout << "Entrez le taux d'interet annuel en % > ";
        cin >> rate;
    } while (rate < -5 || rate > 50 );

    for (int y = years; y > 0; y--)
        amount += amount * rate / 100.;

    cout << "Le montant disponible après " << years << (years < 1 ? " ans" : " an") << " est de " << amount << " CHF" << fixed << setprecision(2);

    return 0;
}

