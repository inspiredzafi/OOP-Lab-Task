/*
    In this lab task, students must implement a BankAccount class in C++ that demonstrates Encapsulation, Constructors, and Data Validation. All data members must remain private and should only be accessed or modified through getter and setter functions. Students must implement a Default Constructor, Parameterized Constructor, and Copy Constructor while ensuring that validation rules cannot be bypassed, even through constructors. The parameterized constructor should enforce validation by utilizing the setter methods. The goal of this task is to ensure that the object always remains in a valid state, preventing invalid values such as an empty name, incorrect account number, or negative balance.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;





class BankAccount{
    private:
        string accountHolderName ;
        int accountNumber;
        double balance;
        static inline vector<int> AccountNumbers = {};

        bool isUnique(const int& accNum);


    public: 
        void setName(string name);
        void setAccountNumber(const int& accNum);
        void setBalance(const double& bal);

        BankAccount(){
            setName("Guest");
            // setAccountNumber();
            // setBalance(0);
        }

        BankAccount(const string& name, int accountNumber , double balance ){
            setName(name);
            setAccountNumber(accountNumber);
            setBalance(balance);
        }

        string getName() {
            return accountHolderName;
        }
        int getAccountNumber() {
            return accountNumber;
        }
        double getBalance() {
            return balance;
        } 

        void displayInfo(){
            cout<< "Account Holder Name: " << accountHolderName << endl ;
            cout<< "Account Number: " << accountNumber << endl ;
            cout<< fixed << setprecision(2)<< "Balance: " << balance << endl << endl ;
        }

        
        

};

string removeSpaces(string& name){
        string str = "";
        bool encounteredChar = false;
        char prev ;
        


        for(char ch : name){

            if(!encounteredChar){

                if(ch == ' ' || ch == '\b' ){
                    continue;
                }else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
                    encounteredChar = !encounteredChar ;
                    prev = ch ;
                    str = ch ;
                }
                
            }else{      // Eda matlab k character ny wekh baitha ay.                

                if(prev == ' ' && ch == ' '){
                    continue;
                }
                prev = ch ;
                str += ch ;

            }
            
            
        }
        
        return str;
}


int main(){

    BankAccount a1("huzaifa", 22222, 34.23);
    a1.displayInfo() ;

    BankAccount a2 ("huzaifa", 22222, 34.33);
    return 0;
}





void BankAccount :: setName(string name){

    // Filter kr lo - Trim kr lo - Shurh aur akhir say spaces remove kr lo. Aur agr sirf spaces to bhi remove kr lo. 
    name = removeSpaces(name) ;

    if(name.size() <= 0){
        cout<< "Error: Cannot set empty string as Account Holder's Name. " << endl ;
        exit(400);
        return; 
        
    }
                   
        accountHolderName = name ;
        
}
        
void BankAccount :: setAccountNumber(const int& accNum){
    bool isTrue = isUnique(accNum) ;

    if(!isTrue){
        cout<< "Error: Couldn't create Account... !!!" << endl ;
        cout<< "The user with the Account Number: " << accNum << " already exists." << endl ;
        exit(400);
        return ;
    }

        if(!(accNum >= 10000 && accNum <= 99999)){
            cout<< "Error: Invalid Account Number: Account Number must be 5 digits" << endl ;
            exit(400);
            return; // I know k ignore hojaye gi. But let it be here.
        }
    
        AccountNumbers.push_back(accNum) ;
        accountNumber = accNum ;
    
}
    
    
void BankAccount :: setBalance(const double& bal){

    if(bal <= 0){

        cout<< "Cannot set the Balance to negative Integer." << endl ;

        cout<< "Your Balance is 0 'cause you tried to hack the system. And all your accounts have been banned. " << endl ;
        balance = 0 ;       // Choice
        // exit(400);      // ab ye apki choice hy, program terminate krna tay kr dyo, nitay bal "0" ojaye ga.
    }

    balance = bal ;
}



bool BankAccount :: isUnique(const int& accNum){
    
    for(int elem : AccountNumbers){
        if(accNum == elem){
            return false;
        }
    }

    return true;
}

