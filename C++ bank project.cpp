#include <iostream>

using namespace std;

int main() {
  
char answer = 'Y'; 




  

    //ask for transcations and deposit / withdrawal amount
  do{
    int numTransactions  ;
  
  
    cout << "Welcome to Chabot Bank! How many transactions would you like to make today?"<< endl;
    cin >> numTransactions ;
    int accountBalance = 1500;

    for (int transactions = 0; transactions < numTransactions; transactions++ ){
      char transactionType; 
       
    cout << "Would you like to make a deposit (D) or withdrawal? (W) " << endl;
    cin >> transactionType; 

// transaction if deposit / withdrawal

      int withdrawalAmount;
      int depositAmount; 
     
if (transactionType == 'D'){
    cout << "How much would you like to deposit?" << endl;
    cin >> depositAmount;
     accountBalance = accountBalance + depositAmount;
      cout << "Your account is now: "<< accountBalance ;
}
if (transactionType == 'W'){
  
   cout << "How much would you like to withdraw?" << endl;
  cin >> withdrawalAmount;
  
  if (withdrawalAmount > accountBalance){
    cout << "You have insuficient funds. Please consult a teller or try again later." << endl;
  }
     
accountBalance = accountBalance - withdrawalAmount;
cout << "Your account balance is now: " << accountBalance;  }
  

      cout << endl;
  }
    
    cout << "Would you like to make another transaction? (Enter: Y or N): " << endl; 
    cin >> answer; 
  }while (answer != 'N');

   cout << "Thank you for your time at Chabot Bank! Have a wonderful day!" << endl; 
   
  
  
    /** Calculate and display new balance 
    accountBalance = accountBalance + depositAmount - withdrawalAmount;
  cout << "Your new balance is: $" << accountBalance << endl; **/
    

//Execution of multiple transactions
 
  /**
  do{
    cout << "Would you like to make another transaction? (Enter: Y or N): " << endl; 
    cin >> answer; 
        
  }while (answer == 'Y' || answer == 'y'); 
  cout << "Would you like to make a deposit (D) or withdrawal? (W) " << endl;
  cin >> transactionType; 
  
  if(transactionType == 'D'){
    cout << "How much would you like to deposit?" << endl;
    cin >> depositAmount;
  accountBalance = accountBalance + depositAmount;
  cout << "Your account is now: "<< accountBalance << endl;
  if (transactionType == 'W'){
    cout << "How much would you like to withdraw?" << endl;
    cin >> withdrawalAmount;


    if (withdrawalAmount > accountBalance){
      cout << "You have insuficient funds. Please consult a teller or try again later." << endl;
    }
    else {
      accountBalance= accountBalance - withdrawalAmount;
      cout << "Your account balance is now: " << accountBalance << endl;
    }

  
  
 cout << "Thank you for your time at Chabot Bank! Have a wonderful day!" << endl; 
  
  return 0;
}}
**/
    return 0;
    }