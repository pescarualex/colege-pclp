//
// Created by Alexandru Pescaru on 17.03.2025.
//

#include "TehnicaFanionului.h"

#include <iostream>
using namespace std;

void TehnicaFanionului::tehnicaFanionuluiExemplu(int a[], int n, int x) {
    int i = 0;
    a[n] = x;

    cout << "___ LOG: Check x: " << x;

    while (a[i] != x) {
        i++;
    }

    if (i == n) {
        cout << "\nNu a fost gasit in tablou";
    } else {
        cout << "\nA fost gasit pe pozitia: " << i;
    }


}

