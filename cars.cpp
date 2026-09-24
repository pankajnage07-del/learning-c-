#include <iostream>
#include <string>
using namespace std;

class car 
{
 public:
    string brand = "Bugatti";
    string model = "Chiron super sport";
    string colour = "Carbon fiber Black";
    string Engine = "8.0 quad-turbo W16";
    string Transmission = "7-speed dual-clutch automatic";
    string speed = "495 km/h";

    void driving() 
    {
        cout << "i'am driving" << endl;
    }

    void display() 
    {   
        cout << "Brand: " << brand << endl;
        cout << "Model : " << model<< endl;
        cout << "Colour: " << colour << endl;
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
}