#include<iostream>
using namespace std;
int add(int a, int b){
    int c = a+b;
    return c;
}
void evenoddNum(int n){
    if(n%2==0){
        cout<<"Even number"<<endl;
    }else{
        cout<<"Odd number"<<endl;
    }
}
void multiplication(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<"="<<n*i<<endl;
    }
}

int main(){
cout<<"The sum of a+b is"<<add(2,5)<<endl;
evenoddNum(add(2,5));
multiplication(7);
return 0;
}

