//
//  polynomial.cpp
//
//
//  Created by Admin on 3/7/22.
// Focusing on printing the coefficient correctly

#include "polynomial.hpp"

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// struct named Monomial
struct Monomial{
    Monomial *next; // pointer to the next monomial
    int degree;
    int coefficient; // think of this as the int n of the notes
};

//class called Polynomial
class Polynomial{
private:
    Monomial *integer;// i.e. 8, NOT THE EXPONENT
    Monomial *exponent; // the ^9
    
public:
    Polynomial(){
        // this is going to be the constructor
        integer=NULL;
        exponent= NULL;
        
    }
    ~Polynomial(){}; // the destructor
    
    // class member functions
    void generate_polynomial(vector<vector<int>> V){
        // think of this as the insert_node from the notes
        Monomial *new_coefficient= new Monomial(); // creates new coefficient i.e. 8
        Monomial *new_degree= new Monomial();//other linked list
        new_coefficient->coefficient= V[0][0];// here is where I need to get it to equal to "value"
        new_degree->degree=V[0][1];
        //new_coefficient= coefficient;
        new_degree->next= NULL;
        new_coefficient->next= NULL;
        //when list is empty
        if(integer ==NULL){
            integer=new_coefficient;
            exponent= new_degree;
        }
        else{
            for(int i=0; i < sizeof(V); i++){
            
                integer->next =new_coefficient;
                integer= new_coefficient;
                
                exponent->next= new_degree;
                exponent= new_degree;
            }
        }
//        new_coefficient->coefficient=V;
        // not sure what i did here
        // when we change the -> to =, there is nothing printed out
        //new_monomial->coefficient;// store the bottom num
        //new_degree->degree;// stores the exponent
        
//
//        // now we need to check if there are any polynomials in the list
//        if(coefficient == 0){
//            coefficient= new_monomial;
//
//        }
//        else{
//            coefficient-> next= new_monomial;
//            coefficient= new_monomial;
//
//
//        }
    }
    
    /*
     this is the "showing part of the function from the notes"
     */
    void print_polynomial(){
        Monomial *new_coefficient;
        new_coefficient=integer;
        while(new_coefficient != NULL){
            cout << new_coefficient-> coefficient<< " x^ "<< new_coefficient->next<< " P ";
            new_coefficient= new_coefficient-> next;
        }
        cout << endl;
    }
    //print the polynomial
//    void print_polynomial(){
//        Monomial *new_monomial;
//        new_monomial= coefficient;
//
//        while(new_monomial != NULL){
//            //we are going to print the polynomial out
//            cout << new_monomial<<"x^ "<<new_monomial->next<<" + "<< " + x^";
//            new_monomial= new_monomial->next;
//
//        }
//        cout << endl;
//    }
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
