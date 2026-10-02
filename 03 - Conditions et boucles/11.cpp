#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Donnez les valeurs de a, b, et c de l'equation a*x^2+b*x+c : ";
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;


    float test = 4.0f;
    cout <<  numeric_limits<float>::epsilon() << endl;

    if (delta < 0) {
        cout << "Il n'y a pas de solution dans R";
        return 0;
    } else if (delta == 0) {
        cout << "La seul valeur de X possible est: " << (-b + sqrt(delta))/2*a;
    } else {
        cout << "Les deux valeurs de X possible sont: " << (-b + sqrt(delta))/2*a << " et " << (-b - sqrt(delta))/2*a;
    }


}