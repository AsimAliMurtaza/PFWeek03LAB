#include <iostream>
using namespace std;

int main ()
{
string name;
float matric;
float intermediate;
float ecat;

float mat_per;
float inter_per;
float ecat_per;

float mat_wei;
float inter_wei;
float ecat_wei;
float aggregate;

cout << "Enter the name: ";
cin >> name;

cout << "Enter the matric marks: ";
cin >> matric;

mat_per = (matric / 1100 ) * 100;
mat_wei = (mat_per / 100) * 10;

cout << "Enter the intermediate marks: ";
cin >> intermediate;

inter_per = (intermediate / 550) * 100;
inter_wei = (inter_per / 100) * 40;

cout << "Enter ecat marks: ";
cin >> ecat;

ecat_per = (ecat / 400) * 100;
ecat_wei = (ecat_per / 100) * 50;

cout << "The name is: " << name << endl;

aggregate = mat_wei + inter_wei + ecat_wei;
cout << "Aggregate= " << aggregate << endl;
}