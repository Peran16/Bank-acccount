//To include the headers of all my classes (Income and Expense are derived from Transaction)
#include "Income.h"
#include "Expense.h"
#include "Category.h"
#include "Budget.h"
#include <memory>
using namespace std;

int main() {
    //I create a Budget with a saving goal of 500
    Budget myBudget(500);
    
    //I add two categories to my Budget 
    myBudget.addCategory("Food");
    myBudget.addCategory("Salary");
    
    //I create these two Transactions 
    shared_ptr<Transaction> t1 = make_shared<Income>("2024-12-08", 2000, "Monthly Salary"); //This one as an Income
    shared_ptr<Transaction> t2 = make_shared<Expense>("2024-12-09", 150, "Groceries"); //This one as an expense

    //I add the transactions to the categories I added previously
    myBudget.addTransaction("Salary", t1);
    myBudget.addTransaction("Food", t2);

    //And finally I generate the report of my Budget
    myBudget.generateReport();
    myBudget.generateReport(true);   


    return 0;
}
