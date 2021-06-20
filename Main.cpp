#include <iostream>
using namespace std;
int main()
{
double c, d, s;
int x;


//User interface
cout<< "To calculate the mass of the solution press 1" << endl;
cout<< "To calculate the mass of the dissolved substance, press 2" << endl;
cout<< "To calculate the percentage concentration, press 3" << endl;
cout<< "Choose which operation you want to do: ";


//Switch statements pentru operations
cin>>x;
switch (x) {
    case 1: //The operation of obtaining the mass of the solution
      cout<<"Enter the percentage concentration: ";
      cin>>c;
      cout<<"Enter the mass of the dissolved substance: ";
      cin>>d;
      s=100*d/c;
      cout<<"The mass of the solution is: " <<s<< " grams";
      break;
  
    case 2: //The operation of obtaining the mass of the dissolved substance
      cout<<"Introduceti concentratia procentuala: ";
      cin>>c;
      cout<<"Enter the solution table: ";
      cin>>s;
      d=c*s/100;
      cout<<"The mass of the dissolved substance is: " <<d<< " grams";
      break;

    case 3: //The operation of obtaining the percentage concentration
      cout<<"Enter the solution table: ";
      cin>>s;
      cout<<"Enter the mass of the dissolved substance: ";
      cin>>d;
      c=d*100/s;
      cout<<"The percentage concentration is: " <<c<< "%";
      break;
}
return 0; //The end
}
