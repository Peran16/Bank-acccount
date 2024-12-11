//To include the Expense header
#include "Expense.h"
//For input/output
#include <iostream>
using namespace std;

//Implementation of the constructor declared in the header
//It uses an initializer list to call the Transaction base class and pass its parameters 
Expense::Expense(const string& date, float amount, const string& description)
    : Transaction(date, amount, description) {}

//Implementation of the applyCategoryRule implemented in Transaction
//Prints a message to indicate that an expense category rule is being applied
void Expense::applyCategoryRule() {
    cout << "Applying expense category rule for: " << description << endl; //Description of it
    
    //Because it overrides a pure virtual function from Transaction
    //this method enables polymorphic behavior.
}

