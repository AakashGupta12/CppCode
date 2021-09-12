#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(int n){
            a=n;
        }
        int dual(){
            return 2*a;
        }
        int quadruple(){
            return 4*a;
        }
        void display(){
            a=dual();
            cout<<a;
        }
};

int main(){
    A o1(100);
    o1.quadruple();
    o1.display();
    return 0;
}