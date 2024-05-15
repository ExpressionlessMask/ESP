#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int map_parser(string rawmapname)
{
    fstream rawmap;
    rawmap.open(rawmapname, ios::in);
    if(rawmap.fail()) {
        cout << "You done screwed up.\n";
        return -1;
    }
    else
        cout << "Geht's gut.\n";
    while(rawmap) {
        
    }

    rawmap.close();
    
    return 0;
};