
#include <iostream>
#include <string>
using namespace std;
#include "data_store.h"

DataStore::DataStore()
{

}
void DataStore::addCity(string city, int population)
{
    name.push_back(city);
    pops.push_back(population);

}

void DataStore::listData()
{
    for (int x = 0; x < pops.size();x++)
        cout << name[x] << endl <<  pops[x] << endl;
}
void DataStore::searchItem(string city)
{
    for(int x=0;x<name.size();x++)
        if(city==name[x])
            cout << "Found: " << name[x] << endl << "Population: " << pops[x] << endl;
    else
        cout<< "not found"<<endl;
}