#include<iostream>
using namespace std;

template<class t>

t add (t &a, t &b){
    t sum = a+b;
    return sum;
}

int main () {
    int a,b;
    float c,d;
    cout<<"enter 2 int for template function"<<endl;
    cin>>a>>b;
    cout<<"ente 2 float "<<endl;
   cin>>c>>d;
    char x='A',y='B';

    cout<<"int additon "<<add(a,b)<<endl;;
    cout<<"float addition "<<add(c,d)<<endl;
    cout<<"float addition "<<add(x,y)<<endl;
}