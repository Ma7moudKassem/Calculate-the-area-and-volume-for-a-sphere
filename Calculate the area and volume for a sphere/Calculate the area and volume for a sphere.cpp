// write a program to calculate the area and volume for a sphare 
// - the area of sphare = 4 * PI * radies
// - the volume of sphare = 4/3 * PI * radies * radies * radies
//(PI = 3.14)

#include <iostream>
using namespace std;

double area (int radius);
double volume (int radius);
int main()
{
    cout << "Please enter the sphere radius \n";
    int r;
    cin >> r ;
    cout  << "The area is : " << area(r) << "\n";
    cout  << "The volume is : " << volume(r) << "\n";
}

double area(int radius)
{
    return 4 * 3.14 * radius;
}

double volume(int radius)
{
    return 4/3 * 3.14 * radius * radius * radius;

}
