#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void displayMainMenu();
void displayAreaMenu();
void displayVolumeMenu();
int getOptionFromUser(int totalOptions);
void handleAreaMenuOption(int option);
void calculateAreaOfRectangle();
void calculateAreaOfCircle();
void calculateAreaOfRightTriangle();
int getOption2FromUser(int totalOptions);
void handleVolumeMenuOption (int option);
void calculateVolumeofSphere();
void calculateVolumeofCylinder();


int main()
{
  bool should_continue = true;
  do
  {
    displayMainMenu();
    int option = getOptionFromUser(3);
    switch(option)
    {
      case 1:
      {
        displayAreaMenu();
        int areaOption = getOptionFromUser(3);
        handleAreaMenuOption(areaOption);
      } break;
      
      case 2:
      {
        displayVolumeMenu();
        int volumeoption = getOption2FromUser(2);
        handleVolumeMenuOption(volumeoption);

      } break;

      case 3:
      {
        should_continue = false;
      } break;
    }
  } while(should_continue);
}

void displayMainMenu()
{
  cout << "-- Main Menu --" << endl;
  cout << "1) Calculate Area" << endl;
  cout << "2) Calculate Volume" << endl;
  cout << "3) Exit Program" << endl;
}

void displayAreaMenu()
{
  cout << "-- Area Menu --" << endl;
  cout << "1) Rectangle" << endl;
  cout << "2) Circle" << endl;
  cout << "3) Right Triangle" << endl;
}

int getOptionFromUser(int totalOptions)
{
  int value = 0;
  while(value < 1 || value > totalOptions)
  {
    cout << "Enter option: ";
    cin >> value;
  }
  return value;
}

void handleAreaMenuOption(int option)
{
  switch(option)
  {
    case 1:
    {
      calculateAreaOfRectangle();
    } break;

    case 2:
    {
      calculateAreaOfCircle();
    } break;

    case 3:
    {
      calculateAreaOfRightTriangle();
    } break;
  }
}

void calculateAreaOfRectangle()
{
  double width, height;

  cout << "Enter width: ";
  cin >> width;

  cout << "Enter height: ";
  cin >> height;

  double area = width * height;
  cout << "Area of rectangle is " << area << endl;
}

void calculateAreaOfCircle()
{
  double radius;
  const double PI = 3.1416;

  cout << "Enter radius: ";
  cin >> radius;

  double area= PI * pow (radius,2);
  cout << "Area of circle is " << area << endl;

}

void calculateAreaOfRightTriangle()
{
 int base, height;
   double area;
 
   cout << "Enter the base : ";
   cin>> base;
 
   cout << "Enter the height : ";
   cin >> height;
 
   area = 0.5 * base * height;
   cout << "Area of Right Angle Triangle is "<< area << endl;

}

int getOption2FromUser(int totalOptions)
{
  int value = 0;
  while(value < 2 || value > totalOptions)
  {
    cout << "Enter option: ";
    cin >> value;
  }
  return value;
}

void displayVolumeMenu ()
{
  cout << "--Volume Menu--" << endl;
  cout << "1) Cylinder" <<endl;
  cout << "2) Sphere" << endl;
}

void handleVolumeMenuOption(int option)
{
  switch(option)
  {
    case 1:
    {
      calculateVolumeofCylinder();
    } break;

    case 2:
    {
      calculateVolumeofSphere();
    } break;
  }
}

void calculateVolumeofCylinder()
{
  double radius, height;
  const double PI = 3.1416;

  cout << "Enter radius: ";
  cin >> radius;

  cout << "Enter height: ";
  cin >> height;

  double area = PI * pow (radius,2);
  double volume = area * height;

  cout << "Volume of a Cylinder is " << volume << endl;
}

void calculateVolumeofSphere()
{
  double radius;
  const double PI = 3.1416;

  cout << "Enter radius: ";
  cin >> radius;

  double volume = ((4/3) * PI) * pow (radius,3);
  cout << "Volume of sphere is " << volume << endl;

}

