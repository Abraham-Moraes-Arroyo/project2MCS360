//
//  polynomial.cpp
//  
//
//  Created by Admin on 3/7/22.
//

#include "polynomial.hpp"

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// struct named Monomial
struct Monomial{
    Monomial *next; // pointer to the next monomial
    int degree;
    int coefficient;
};

//class called Polynomial
class Polynomial{
private:
    Monomial *degree; // private member variable, points to the exponent
    Monomial *coefficient; // private member variable, points to the coefficient
public:
    Polynomial(){
        // this is going to be the constructor
        degree= NULL;
        coefficient= NULL;
    }
    ~Polynomial(){}; // the destructor
    
    // class member functions
    
};
int main(){
    Polynomial P;
    Polynomial D;
    Polynomial T;
    
    //test, see if the following line of code makes the program crash
    vector<vector<int>> V= {{-3,6}, {1,4}, {8,2}, {-5,0}};
    
    return 0;
}
