#ifndef NYEPI
#define NYEPI
#include <string>

using std::string;

struct Ogoh{
        string team_name;
        string obj_name;
        float value_1; // creativity
        float value_2; // neat
        float value_3; // scariness
        float mean_value;
};

void input(); // -> refer ogoh
void show_data(Ogoh* o);
void rank(Ogoh* o);

#endif
