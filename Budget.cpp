//To include Budget. Income and Expense headers
#include "Budget.h"
#include "Income.h"
#include "Expense.h"
//For input/output
#include <iostream>
using namespace std;

//Initializes a Budget with an optional saving goal, and the incomeTotal and expenseTotal as 0
Budget::Budget(float savingGoal) : incomeTotal(0), expenseTotal(0), savingGoal(savingGoal) {}

//To add a new category to the categories vector
void Budget::addCategory(const string& name) {
    categories.emplace_back(name); //This puts the new category at the end with the given name
}

//This funtion adds a Transaction (Income or Expense) to a specified Category in the Budget
void Budget::addTransaction(const string& categoryName, shared_ptr<Transaction> transaction) {
    for (auto& category : categories) {  //A loop to iterate through every category in the categories vector
        if (categoryName == category.getName()) { //If the category I want to add matches the one there is
            category.addTransaction(transaction); //in the vector it adds it
            if (dynamic_cast<Income*>(transaction.get())) { //It checks if the Transaction is an income 
                incomeTotal += transaction->getAmount();    //If it is, it adds it to the incomeTotal 
            } else if (dynamic_cast<Expense*>(transaction.get())) { //Samer but with expense
                expenseTotal += transaction->getAmount();
            }
            return; 
        }
    }
    //If the category name is not found it prints the message 
    cout << "Category not found: " << categoryName << endl;
}

//This function generates a report with the incomeTotal. the expenseTotal, the savings and the saving goal
void Budget::generateReport() const {
    cout << "--- Budget Report ---\n";
    cout << "Income Total: " << incomeTotal << endl;
    cout << "Expense Total: " << expenseTotal << endl;
    cout << "Savings: " << (incomeTotal - expenseTotal) << endl;
    cout << "Saving Goal: " << savingGoal << endl;
}
