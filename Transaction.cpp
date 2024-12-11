//To allow the imp. of the class defined
#include "Transaction.h"
//For input/output op
#include <iostream>
using namespace std;

//Implementation of the constructor declared in Transaction.h to initialize the object
Transaction::Transaction(const string& date, float amount, const string& description)
    : date(date), amount(amount), description(description) {}

//This funtion retrieves the value of the amount
float Transaction::getAmount() const {
    return amount;
}

//To print the info on a Transaction and endl forinserting a new line
void Transaction::display() const {
    cout << "Date: " << date << ", Amount: " << amount << ", Description: " << description << endl;
}

//destrutor for the Transaction class
Transaction::~Transaction() {}
