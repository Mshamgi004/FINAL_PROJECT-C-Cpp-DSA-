// C++ Programming //
// Q.3 //
// MAHADEV G I //



#include <iostream>
using namespace std;


class AddAmount
{
    private : 
    int amount = 50;

    public :
    AddAmount()
    {

    }

   AddAmount(int a)
    {
        amount = a+amount;
    }

    void displayAmount()
    {
        cout<<amount<<endl;
    }
};

    int main()
    {
        AddAmount a; 
        AddAmount b(10);
        a.displayAmount();
        b.displayAmount();
    return 0;
    }