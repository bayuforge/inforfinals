#include "nyepi.h"
#include <iostream>
using std::cin, std::cout;

int main(){
        bool a1, a2, a3, a4; // a1 - a4 adalah ogoh2

        //a1 - a4 yang dinilai
        cout << "a1: ";
        cin >> a1;

        cout << "a2: ";
        cin >> a2;

        cout << "a3: ";
        cin >> a3;

        cout << "a4: ";
        cin >> a4;

        preprocessing(a1, a2, a3, a4); // kirim parameter ke preprocessing
        return 0;
}
