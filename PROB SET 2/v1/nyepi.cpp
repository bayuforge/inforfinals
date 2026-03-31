#include <iostream>
#include <string>
#include "nyepi.h"
using std::cout, std::cin, std::string, std::getline;

void input(){
        Ogoh* o = new Ogoh();\

        cout << "------------------------INPUT DATA----------------------------- \n";
        cout << "Masukkan nama tim kamu: ";
        getline(cin, o->team_name);

        cout << "Masukkan nama ogoh2 kamu: ";
        getline(cin, o->obj_name);

        cout << "Silahkan input nilai kreativitas '" << o->obj_name << "': ";
        cin >> o->value_1;

        cout << "Silahkan input nilai kerapian '" << o->obj_name << "': ";
        cin >> o->value_2;

        cout << "Silahlam input nilai kesan menyeramkan '" << o->obj_name << "': ";
        cin >> o->value_3;

        show_data(o);
}

void show_data(Ogoh* o){
        o->mean_value = ((o->value_1 + o->value_2 + o->value_3) / 3) * 10;

        cout << "-----------------------OUTPUT DATA---------------------------- \n";
        cout << "Nama tim: " << o->team_name << "\n";
        cout << "Nama Ogoh2: " << o->obj_name << "\n";
        cout << "Perolehan Nilai Kreativitas: " << o->value_1 << "\n";
        cout << "Perolehan Nilai Kerapian: " << o->value_2 << "\n";
        cout << "Perolehan Nilai Menyeramkan: " << o->value_3 << "\n";
        cout << "Rata - rata: " << o->mean_value << "\n";

        rank(o);
}

void rank(Ogoh* o){
        cout << "done. \n";
}
