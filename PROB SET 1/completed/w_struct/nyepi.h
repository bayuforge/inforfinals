#ifndef NYEPI
#define NYEPI

/*Amati Geni (tidak menyalakan api/lampu),
  Amati Karya (tidak bekerja), 
  Amati Lelungan (tidak bepergian), 
  Amati Lelanguan (tidak bersenang-senang)
*/

struct pantangan_nyepi{
    bool amati_geni;
    bool amati_karya;
    bool amati_lelungan;
    bool amati_lelanguan;
    bool meja[4];
};

void input_data();
void hitung_pantangan(pantangan_nyepi* pantangan);
void tampil_data(pantangan_nyepi* pantangan, int total);

#endif
