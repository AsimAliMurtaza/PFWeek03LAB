#include <iostream>
using namespace std;

int main ()
{

float mb = 1024;
float input;
float kb = 1024;
float byte = 8;
float bit;

cout << "Enter megabytes: ";
cin >> input;

bit = input * mb * kb * byte;
cout << "Number of bits= " << bit << endl;

}