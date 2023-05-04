#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    {
        cout << "TASK 1\n";
        double kil, speed, time, mett;
        cout << "Kilometers: ";
        cin >> kil;
        cout << "Meters per second: ";
        cin >> speed;
        mett = kil * 1000;
        time = mett / speed;
        cout << "Hours = " << (time / 3600) << endl;
        cout << "Minutes = " << (time / 60) << endl;
        cout << "Seconds = " << (time) << endl;
    }

    {
        cout << "\n\nTASK 2\n";
        float a, b;
        float sum = 0;
        cout << "1 Number: ";
        cin >> a;
        int a1, b1 = 0;
        float c1, c2 = 0;
        cout << "2 Number: ";
        cin >> b;
        a1 = a;
        b1 = b;
        c1 = a - a1;
        c2 = b - b1;
        cout << "The sum of the constituent parts " << a1 + b1 << endl;
        cout << "Sum of fractional parts " << c1 + c2 << endl;
    }
    {
        cout << "\n\nTASK 3\n";
        float UAH;
        int cop;
        cout << "UAH: ";
        cin >> UAH;
        cop = UAH * 100;
        cout << cop / 100 << endl;
        cout << cop % 100 << endl;
    }
    {
        cout << "\n\nTASK 5\n";
        int Seconds, Minutes, Hours, Days;
        cout << "Seconds: ";
        cin >> Seconds;
        Days = Seconds / (24 * 60 * 60);
        Hours = (Seconds / (60 * 60)) % 24;
        Minutes = (Seconds / 60) % 60;
        Seconds = Seconds % 60;
        cout << Seconds << " Seconds is equivalent to " << "Days =" << Days << " Hours =" << Hours << " Minutes =" << Minutes << " Seconds =" << Seconds;
    }

    {
        cout << "\n\nTASK 6\n";
        float l, v;
        int time;
        cout << "long, km: ";
        cin >> l;
        cout << "t, minut: ";
        cin >> time;
        v = l / time * 60;
        cout << (v) << "km/h";
    }

    {
        cout << "\n\nTASK 7\n";
        int h, h1, m, m1, s, s1;
        cout << "Starting a conversation: ";
        cin >> h;
        cout << "Enter the minute to start the call: ";
        cin >> m;
        cout << "Enter the second to start the conversation: ";
        cin >> s;
        cout << "Enter the end hour of the call: ";
        cin >> h1;
        cout << "Enter the minute to end the call: ";
        cin >> m1;
        cout << "Enter a second to end the call: ";
        cin >> s1;
        int duration = (h1 - h) * 3600 + (m1 - m) * 60 + (s1 - s);
        cout << "Cost: " << duration * 15 / 60 << "Cent";
    }
}
