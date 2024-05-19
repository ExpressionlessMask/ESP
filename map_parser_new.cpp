#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int map_parser(string rawmapname)
{
    fstream rawmap;
    fstream rawdata;
    string buffer;
    char cbuffer[10];
    rawmap.open(rawmapname, ios::in|ios::binary);
    if(rawmap.fail()) {
        cout << "You done screwed up.\n";
        return -1;
    }
    else
        cout << "Geht's gut.\n";
    rawdata.open("rawdata_hex", ios::out);
    if(rawdata.fail()) {
        cout << "You done screwed up.\n";
        return -1;
    }
    else
        cout << "Geht's gut again.\n";
    
    while(rawmap) {
        rawmap.ignore(10);
        /*rawmap.read(cbuffer, 10);
        break;
        */
       
    }

    for (int i = 0; i < 10; i++) {
        cout << (cbuffer[i]+1) << " ";
    }

    rawmap.close();
    rawdata.close();
    
    return 0;
};