#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "Polynom.h"
#include "Monom.h"
using ariel::Polynom, ariel::Monom;
//using namespace ariel;

int main() {
  try {
    Polynom p0;   
    Polynom p1; 

    cout << p0 << endl;   
    cout << p1 << endl;

    cout << (p0 + p1) << endl; 

    cout << (p1 - p0) << endl; 

  
    istringstream input("1x^2+5x"); //init polynom
    input >> p0;

    cout << p0 << endl;   // Prints Polynom

    cout << p0.derivative() << endl; //prints "2x+5"

    cout << (p0 += Polynom(p0)) << endl;  // prints 2 * p0
    cout << p0 << endl;   

    p0.sort(); // sorts p0
    std::cout << "sort :"  << p0 << '\n';

    Monom m0(1.0 , 2) ;
    bool b = p0.contains(m0); // returs true
  }
   catch (...) { // if there is an error
    cout << "Unexpected exception!" << endl;
  }
  return 0;
}
