#include <iostream>
using namespace std;

void showMenu()
{
    cout << "********************Welcome to the bank of Chitkara********************" << endl
         << endl;
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << endl;
    cout << "***********************************************************************" << endl
         << endl;
}

int main()
{
    showMenu();
    // Storing Account Credentials
    int accNo, pass, option, index;
    int accArr[10] = {4324, 1478, 4814, 7014, 3895, 5092, 7162, 4672, 6158, 1206};
    string nameArr[10] = {"Abhishek", "Abhay", "Sujal", "Kanika", "Mohak", "Sidhi", "Abhiraj", "Meher", "Nidhi", "Harsh"};
    int passArr[10] = {4234, 8741, 4184, 4107, 5983, 2905, 2617, 2764, 8516, 6021};
    int balanceArr[10] = {73720, 41653, 39568, 77508, 80199, 25312, 56400, 76229, 30718, 40398};

    // Taking input for Account credentials
    cout << "Account Number: ";
    cin >> accNo;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (accNo == accArr[i])
        {
            index = i;
            cout<<"ATM Pin: ";
            cin>>pass;
            if(pass = passArr[index]){
                cout<<"What you want to do select option from menu: ";
                cin>>option;
                if(option == 1){
                    cout<<"Account number:          "<<"Name:              "<<"Available Balance:"<<endl;
                    cout<<"    "<<accArr[index]<<"                 "<<nameArr[index]<<"              "<<balanceArr[index]<<endl;
                }
            }
            else{
                cout<<"Incorrect Pin"<<endl;
            }
        }
    }
    return 0;
}