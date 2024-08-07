#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"A ka show";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"B ka show";
    }
};
int main(){
    B b;
    b.show();
    b.A::show();//b ki help se A ka show call krana(scope resolution operator

}
