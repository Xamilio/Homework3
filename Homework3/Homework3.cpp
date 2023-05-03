#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double kil, met, time, mett;
	cout << "Kilometers: ";
	cin >> kil;
	cout << "Meters per second: ";
	cin >> met;
	mett = kil*1000;
	time = mett/met;
	cout << "Hours = " << (time/ 3600) << endl;
	cout << "Minutes = " << (time/60) << endl;
	cout << "Seconds = " << (time) << endl;



    cout << "\n\n\n";



    float a,b;
    float sum = 0;
    cout <<"1 Number: ";
    cin >> a;
    int a1,b1 = 0;
    float c1,c2 = 0;
    cout <<"2 Number: ";
    cin >> b;
    a1 = a;
    b1 = b;
    c1 = a-a1;
    c2 = b-b1;
    cout << "The sum of the constituent parts " << a1+b1 << endl;
    cout << "Sum of fractional parts " << c1+c2 << endl;

    cout << "\n\n\n";
    


    float UAH;
    cout << "UAH: ";
    cin >> UAH;
    cout << UAH << endl;
    cout << UAH - (int)UAH << endl;


    cout << "\n\n\n";


    int Seconds, Minutes, Hours;
    cout << "Seconds: ";
    cin >> Seconds;
    Minutes = Seconds / 60;
    Hours = Minutes / 60;
    
    cout << Seconds << " Seconds is equivalent to " << Hours << " Hours " << (Minutes % 60)  << " Minutes " << (Seconds % 60) << " Seconds";


    cout << "\n\n\n";   

    int Kilometers, minut, meters, minutt;
    cout << "kilometers: ";
    cin >> Kilometers;
    cout << "minutes: ";
    cin >> minut;
    meters = Kilometers * 1000;
    minutt = minut / 60;
    cout << (meters / minut / 10);
    

    cout << "\n\n\n";

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
    int cost = 0;
    for (int i = 0; i < duration; i++) {
        cost += 15;
    }
    cout << "Cost: " << cost;



}