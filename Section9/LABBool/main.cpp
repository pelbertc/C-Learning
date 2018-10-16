#include<iostream>
using namespace std;
int main()
{
    bool i1;
    while(true)
    {
        cin>>i1;
        if(i1==1||i1==0)
        {
            cout << "i1 = " << i1 << endl;
            break;
        }
        else
	        cout<<"Please enter a proper condition(1 to ON/0 to OFF)"<<endl;
    }

    return 0;
}