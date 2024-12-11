//Include the Category header
#include "Category.h"
//For input/output
#include <iostream>
using namespace std;

//The constructor initializes the category object with a given name
Category::Category(const string& name) : name(name) {}

// To return the name of the category
string Category::getName() const {
    return name;
}

//This method allows me to add a Transaction to the vector using a smart pointer.
void Category::addTransaction(shared_ptr<Transaction> transaction) {
    transactions.push_back(transaction); //I use push back to add it at the end of the vector
}

//To display the name of the Category and all the Transactions in it
void Category::displayTransactions() const {
    cout << "Category: " << name << endl;
    for (const auto& transaction : transactions) { //Loop to go thwough every Transaction 
        transaction->display(); //Im calling the display method of the transaction class
    }
}
