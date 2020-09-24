

#ifndef ASSIGNMENT_TEMPLATE_DATA_STORE_H
#define ASSIGNMENT_TEMPLATE_DATA_STORE_H

#include<string>
#include <vector>

// using namespace std; // TODO does not belong here, Penalty will increase

class DataStore
{
private:
    vector <string> name;
    vector <int> pops;

public:
    DataStore();
    void addCity(string city, int population);
    void listData();
    
    // Strings should be passed by reference and protected with const if unchanged
    void searchItem(string city);
};


#endif//ASSIGNMENT_TEMPLATE_DATA_STORE_H

