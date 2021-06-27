#include <iostream>
#include<stdlib.h>
using namespace std;

void lake() {
    cout << "Lake Atanasovsko - 17 Quadrat Meter, 1 Meter Depth" << endl;
    cout << "Lake Shabla - 0.8 Quadrat Meter, 4 Meter Depth" << endl;
    cout << "Lake Burgas - 27.6 Quadrat Meter, 31 Meter Depth" << endl;
    cout << "Lake Pomorie - 8.5 Quadrat Meter, 1.5 Meter Depth" << endl;
    cout << "Lake Varna - 17 Quadrat Meter, 19 Meter Depth" << endl;
    cout << endl;
}

void text() {
    cout << "Press 1 To Exit" << endl;
}


int main()
{
    lake();
    int a;
    text();
    cin >> a;
}
