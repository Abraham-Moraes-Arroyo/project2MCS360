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
    void generate_polynomial(vector<vector<int>> V){
        cout << "works"<<endl;
        Monomial *new_monomial= new Monomial(); // creates new monomial
        Monomial *new_degree= new Monomial();
        new_monomial->coefficient;// store the bottom num
        new_degree-> degree;// stores the exponent
        
        
        // now we need to check if there are any polynomials in the list
        if(coefficient == NULL){
            coefficient= new_monomial;
            degree= new_degree;
        }
        else{
            coefficient-> next= new_monomial;
            coefficient= new_monomial;
            degree-> next= new_degree;
            degree= new_degree;
        }
    }
    //print the polynomial
    void print_polynomial(){
        Monomial *new_monomial;
        Monomial *new_degree;
        new_monomial= coefficient;
        new_degree= degree;
        while(new_monomial != NULL && new_degree !=NULL){
            //we are going to print the polynomial out
            cout << new_monomial->coefficient<<"x^ "<<" + "<<new_monomial->next<< new_degree->degree <<new_degree->next;
            new_monomial= new_monomial->next;
            new_degree=new_degree->next;
        }
        cout << endl;
    }
};
int main(){
    Polynomial P;
    Polynomial D;
    Polynomial T;
    
    //test, see if the following line of code makes the program crash
    vector<vector<int>> V= {{-3,6}, {1,4}, {8,2}, {-5,0}};
    //SOL, it doesn't
    
    P.generate_polynomial(V);
    P.print_polynomial();
    return 0;
}
