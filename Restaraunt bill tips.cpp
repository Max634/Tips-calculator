// Restaraunt bill tips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        system("color 1f");
        cout << fixed << setprecision(2);
        double bill = 0.0;
        double tip = 0;
        cout << "Bill amount:$";
        cin >> bill;
        for (double rate = 0.1; rate <= 0.2; rate += 0.05)
        {
            tip = bill * rate;
            cout << rate * 100 << " % tip: ";
            cout << "$" << tip << endl;
        }
        cout << "Thank you\n";
        system("pause");
        return 0;
}

