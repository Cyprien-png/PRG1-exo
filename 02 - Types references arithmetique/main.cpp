#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
 * affiche à l'écran, pour un type entier
 * * sa taille en bytes
 * * sa taille en bits (sans utiliser sizeof ni le résultat précédent)
 * * l'intervalle des valeurs possibles
 * * s'il est signé ou pas
 */
void ex5() {
    using type = int;

    int size = sizeof(type);
    int lower = numeric_limits<type>::lowest();
    int upper = numeric_limits<type>::max();
    unsigned long long sizeBits = upper - lower;
    bool is_signed = numeric_limits<type>::is_signed;

    cout << "Size: " << size << " bytes" << endl;
    cout << "Size (bits): " << sizeBits << " bits" << endl;
    cout << "Range: " << lower << " to " << upper << endl;
    cout << "Is signed: " << is_signed << endl;
}

void ex7() {
    cout << 1.5 << endl;
    cout << 1E3 << endl;
    // cout << 12.0u << endl;
    cout << 1.0L << endl;
    cout << .5 << endl;
    cout << 5. << endl;
    cout << 2.5f << endl;
    cout << 3e-2 << endl;
}

void ex8() {
    const int bases[2] = {10, 2};
    double nb = 0;

    cout << "Donnez un nombre Reel scritectement positif" << endl;
    cin >> nb;

    for (int i: bases) {
        const double log_on_base = log10(nb) / log10(i);
        const double power = floor(log_on_base);
        const double mantis = nb / pow(i, power);
        cout << "En puissance de " << i << ": " << nb << " = " << mantis << " * " << i << "^" << power << endl;
    }
}

void ex9() {
    const double limit = numeric_limits<float>::digits;
    const double max_round_value = pow(2, limit) + 1;
    cout << fixed << setprecision(0) << max_round_value << endl;

    int n = 16777217;
    cout << boolalpha << setprecision(10);
    cout << "1) " << static_cast<float>(n) << endl;
    cout << "2) " << (static_cast<float>(n) == n) << endl;
    cout << "3) " << (static_cast<int>(static_cast<float>(n)) == n) << endl;

    const long limit_d = numeric_limits<double>::digits;
    const long long max_round_value_d = (1LL << numeric_limits<double>::digits) + 1;
    cout << fixed << setprecision(0) << max_round_value_d << endl;
}

void ex21() {
    int var1 = 1;
    int& ref1 = var1;
    // int& ref2;
    var1 = 2;
    ref1 = 3;
    cout << var1 << endl;
    cout << ref1 << endl;
    const int& cref1 = var1;
    // cref1 = 4;
}

void ex22() {
    double r1;
    double r2;
    double h1;
    double h2;
    double h3;

    cout << "Entrez les valeurs demandées pour calculer le volume de la bouteille." << endl;
    cout << "Rayon du contenant: ";
    cin >> r1;
    cout << "Rayon du bouchon: ";
    cin >> r2;
    cout << "Hauteur du contenant: ";
    cin >> h1;
    cout << "Hauteur du bouchon: ";
    cin >> h2;
    cout << "Hauteur du cone: ";
    cin >> h3;

    double cylinder_vol = M_PI * pow(r1, 2) * h1;
    double cap_vol = M_PI * pow(r2, 2) * h2;
    double cone_vol = (pow(r1, 2) + pow(r2, 2) + r1 * r2) * h3 * M_PI / 3;

    double volume_cm = cylinder_vol + cap_vol + cone_vol;
    double volume_liters = volume_cm / 1000;

    cout << "Le volume total de votre bouteille est de " << volume_liters << " litres." << endl;
}

void ex23() {
    int length;
    const double mile_ratio = 1/1609.;
    const double foot_ratio = 3.28084;
    const double inche_ratio = 39.3701;

    cout << "Entrez le nombre de metres a convertir (entier > 0) : ";
    cin >> length;

    cout << length << "[m] sont " << length * mile_ratio << " [miles]" << endl;
    cout << length << "[m] sont " << length * foot_ratio << " [feet]" << endl;
    cout << length << "[m] sont " << length * inche_ratio << " [inches]" << endl;
}

int main() {

    ex23();
}