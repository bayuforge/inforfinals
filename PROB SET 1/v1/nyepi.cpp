#include <iostream>
#include "nyepi.h"
using std::cout;

//pake prototype func buat declare func
void preprocessing(bool a1, bool a2, bool a3, bool a4);
void process(ogoh* o);
void output_data(ogoh* o, float hasil);

//func preprocessing buat define di struct ogoh input main.cpp
void preprocessing(bool a1, bool a2, bool a3, bool a4){
        ogoh* o = new ogoh(); // this is a pointer
        o->og1 = a1; // this is all the sign it is a pointer
        o->og2 = a2;
        o->og3 = a3;
        o->og4 = a4;

        process(o); // pass pointer o ke process func
}

//func process buat memproses apakah statement true = if yes add the number +1
void process(ogoh* o){
        int total = 0;
        float hasil;

        if(o->og1){
                total++;
        }
        if(o->og2){
                total++;
        }
        if(o->og3){
                total++;
        }
        if(o->og4){
                total++;
        }

        hasil = ((total / 4.0) * 100); // can be fix used static_casting type float for total

        output_data(o, hasil); // pass pointer o dan hasil ke output_data
}

//func output_data buat output semua hasil input user dan juga hasil action (persen) mereka
void output_data(ogoh* o, float hasil){
        cout << "----------------------------------------------\n";
        cout << "A1: " << o->og1 << "\n";
        cout << "A2: " << o->og2 << "\n";
        cout << "A3: " << o->og3 << "\n";
        cout << "A4: " << o->og4 << "\n";
        cout << "HASIL: " << hasil << "% \n";
}
