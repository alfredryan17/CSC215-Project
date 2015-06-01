   #include <iostream>

using namespace std;

int FromBin (int n)
{
    int increment;
    int Result;
    increment = 1;
    Result = 0;
    while(n != 0)
    {
        if (n % 10 == 1){
            Result = Result+increment;
            n = n-1;
        }
        n = n/10;
        increment = increment*2;
    }
    cout<<Result;
}

void ToBin(int n)
{
    if (n / 2 != 0) {
        ToBin(n / 2);
    }
    cout<<n % 2;
}

int main()
{
    int choice;
    int n;
    cout<<"Choose a function: press 0 for decimals to binary, press 1 for binary to decimal\n";
    cin>>choice;
    if (choice == 0){
        cout<<"Enter a number: \n";
        cin>>n;
        ToBin(n);
    }
    else if (choice == 1){
        cout<<"Enter a number: \n";
        cin>>n;
        FromBin(n);
    }
    else{
        cout<<"Invalid input";
    }
}
