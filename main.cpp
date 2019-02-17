
#include "Database.h"
#include <iostream>s
using namespace std;

int main(){

    string l, p;
    cout << "Enter login";
    cin >> l >> p;

    Database *d = new Database();
    User *u = d->getUser(l, p);

    if (u != NULL){
        cout << "Welcome " << u->getName() << "!!!" << endl;
    }
    else
        cout << "invalid login or password" << endl;

    delete d;
    delete u;


    system("pause");
    return 0;
}