#include <iostream>
#include <string>
using namespace std;

class car 
{
public:
    string modelno = "Chiron super sport";
    string colour = "Carbon fiber Black";
    string brand = "Bugatti";
    string Engine = "8.0 quad-turbo W16";
    string Transmission = "7-speed dual-clutch automatic";
    string speed = "495 km/h";

    void driving() 
    {
        cout << "i'am driving" << endl;
    }

    void display() 
    {
        cout << "Model No: " << modelno << endl;
        cout << "Colour: " << colour << endl;
        cout << "Brand: " << brand << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() 
{
    car c1;
    c1.driving();
    c1.display();
    return 0;