#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number to check odd or even" <<endl;
    cin>>n;
    if(n==0)cout<<"Neither odd nor even"<<endl;
    else if(n%2==0)cout<<n<<" is Even number"<<endl;
    else cout<<n<<" is odd number"<<endl;
    return 0;
}