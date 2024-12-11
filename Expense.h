//To prevent reprocessing: 
#ifndef EXPENSE_H
#define EXPENSE_H
//This includes the header file of Transaction, which serves as the base class (inheritance)
#include "Transaction.h"

//We declare Expense as a derived class for Transaction
class Expense : public Transaction {
public:
    //Initializes the object Expense inheriting the parameters of Transaction.h
    Expense(const string& date, float amount, const string& description = "");
    
    //Pure virtual function from the base class
    void applyCategoryRule() override; //override to ensure the function correctly overrides the base class
};

#endif

