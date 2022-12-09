#include <iostream>
#include "Header.h"
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
   
    int y;
    bool continuelooping = true;
    DataBase m;

    m.printIndxes();
    do
    {
        cout << "What Would You Like To Do \n";
        cout << "\t1. Insert New Record \n " << "\t2. Get Record By ID \n" << "\t3. Get Record By Name   \n";
        cout << "\t4. Delete Record By ID \n" << "\t5. Delete Record By Name \n";
        cout << "\t0.EXIT\n";
        cout << " Enter Choice \n ";
        cin >> y;
        switch (y) {
        case 1:
            cout << "Insert New Record : \n";
            m.insertRecord();
            break;
        case 2:
            cout << "Get Record By ID : \n";
            m.getRecordById();
            break;

        case 3:
            cout << "Get Record By Name : \n";
            m.getRecordsByName();
            break;
        case 4:
            cout << "Delete Record By ID : \n";
            cin.ignore();
            char id[30];
            cin.getline(id, 30);
            m.deleteById(id);
            break;
        case 5:
            cout << "Delete Record By Name : \n";
            char Name[51];
            cin >> Name;
            m.deleteByName(Name);
            break;

        case 0:
            continuelooping = false;
            break;
        default:
            cout << "Invalid Input \n";
            continuelooping = false;
            break;
        }
    } while (continuelooping);
    return 0;

}