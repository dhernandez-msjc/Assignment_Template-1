//Logan McGuire
//CSIS-123A-1007
//09/06/2020
//Assignment 1
#include<iostream>
#include"data_store.h"
#include <string>
using namespace std;
int main()
{
    string city;
    int pop;
    DataStore myData;
    cout << "---Menu---" << endl;
    char choice;
    do
    {
        cout << "A. Enter city and population" << endl;
        cout << "B. Display cities and pops" << endl;
        cout << "C. Search by city name"<<endl;
        cout << "Q. Quit" << endl;


        cin >> choice;

        switch (choice) {
            case 'A':
                cout << "Enter a city:";
                cin >> city;
                cout << "Enter a population:";
                cin >> pop;
                myData.addCity(city, pop);

                break;
            case 'B':
                myData.listData();
                break;
            case 'C':
                cout << "Enter the city you are looking for"<<endl;
                cin >> city;
                myData.searchItem(city);
                break;
            case 'Q':
                break;
        }
    }while(choice!='Q');



}
