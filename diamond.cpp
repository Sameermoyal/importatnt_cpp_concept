//diamond problem in cpp Inheritance
//it happens in the concept of multiple Inheritance
//when a derived class inherits from two classes that
//have a comman base class properties
//this creates a ambiguity due to repeated Inheritance.

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void display()
        {
            cout<<"Class A"<<endl;
        }
};
class B: public  A{};
class C: public  A{};
class D: public  B,public C{};


int main()
{
    D obj;
   // obj.display();//error : ambiguity which display is to be called during runtime
    obj.B::display();
    obj.C::display();
}