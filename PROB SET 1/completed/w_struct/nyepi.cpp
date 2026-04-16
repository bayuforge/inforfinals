#include <iostream>
#include "nyepi.h"
using namespace std;

void input_data(){
    pantangan_nyepi* pantangan = new pantangan_nyepi();
    
    cout << "Apakah kamu melakukan amati geni? [1 = Ya, 0 = Tidak]: ";
    cin >> pantangan->amati_geni;

    cout << "Apakah kamu melakukan amati karya? [1 = Ya, 0 = Tidak]: ";
    cin >> pantangan->amati_karya;

    cout << "Apakah kamu melakukan amati lelungan? [1 = Ya, 0 = Tidak]: ";
    cin >> pantangan->amati_lelungan;

    cout << "Apakah kamu melakukan amati lelanguan? [1 = Ya, 0 = Tidak]: ";
    cin >> pantangan->amati_lelanguan;

    hitung_pantangan(pantangan);
}

void hitung_pantangan(pantangan_nyepi* pantangan){
    int total_pantangan = 0;
    
    bool meja[4];
    pantangan->meja[0] = pantangan->amati_geni;
    pantangan->meja[1] = pantangan->amati_karya;
    pantangan->meja[2] = pantangan->amati_lelungan;
    pantangan->meja[3] = pantangan->amati_lelanguan;

    for(int i = 0; i < 4; i++){
        if (meja[i]){
            total_pantangan++;
        }
    }

    tampil_data(pantangan, total_pantangan);
}

void tampil_data(pantangan_nyepi* pantangan, int total){
    string text[4] = {"AMATI GENI: ", "AMATI KARYA: ", "AMATI LELUNGAN: ", "AMATI LELANGUAN: "};

    for(int i = 0; i < 4; i++){
        cout << text[i] << pantangan->meja[i] << endl;
    }

    cout << "Total pantangan diselesaikan saat nyepi: " << total << endl;
}
