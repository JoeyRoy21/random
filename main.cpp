// Jazmin Proano, Andrew Phan, Nishaan Amin, Nikki Benitez
// CECS 282-06
// Prog #1 Week 2 Lab 2
// 9/2/2021 demo at 5:36pm

#include <iostream>
#include <string>
#include "Can.cpp"
using namespace std;

void printContents(Can arr[], int n)
{ 
  int total = 0; 

  for(int i = 0; i < n; i++)
  { 
    cout << arr[i].getVolume() << " ounce can of " << arr[i].getName() << endl; 
    total += arr[i].getVolume(); 
  }

  cout << endl; 
  cout << "Total Weight = " << total << " ounces " << endl; 
}

int main()
{
  Can* sixpack = new Can[6];
  sixpack[0] = Can("Coke",12);
  sixpack[1] = Can("Mango Monster Energy Drink",16);
  sixpack[2] = Can("Red Bull",8);
  sixpack[3] = Can("Bang!",16);
  sixpack[4] = Can("Venom Energy",16);
  sixpack[5] = Can("Jolt Cola",12);
  
  printContents(sixpack, 6); 
  return 0; 
}
