//To prevent reprocessing
#ifndef CATEGORY_H
#define CATEGORY_H
//To include the definition of Transaction to be used as part of the Category class.
#include "Transaction.h"
//Used to hold transactions
#include <vector>
//To prevent memory leaks and to use shared_ptr
#include <memory>
using namespace std;

//Defines the category class that groups Transaction objects
class Category {

private:
    //A private string for a name like "Game"
    string name;
    //A vector of different Transactions and shared_ptr to ensure is managed and shared
    vector<shared_ptr<Transaction>> transactions;

public:
    //Initialize a Category object with a name
    Category(const string& name);
    //To add a Transaction to the vector ensuring proper memory management
    void addTransaction(shared_ptr<Transaction> transaction);
    //To display every transaction in the category
    void displayTransactions() const;


    //To get the name of the category
    string getName() const;
};
#endif
