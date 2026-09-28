#include <iostream>

using namespace std;

/**
 * affiche à l'écran, pour un type entier
 * * sa taille en bytes
 * * sa taille en bits (sans utiliser sizeof ni le résultat précédent)
 * * l'intervalle des valeurs possibles
 * * s'il est signé ou pas
 */
void ex5() {
    using type = long;

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

int main() {

    ex5();
}