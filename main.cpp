#include <iostream>
#include "vecteur.h"
using namespace std;

int main() {
    vecteur v;
    v.push_back(42);
    v.push_back(99);

    cout << "Taille = " << v.size() << endl;
    cout << "Éléments : ";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
