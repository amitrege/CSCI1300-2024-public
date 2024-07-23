#include <iostream>


using namespace std;




// INHERITANCE

class Base{
    private:
    int a = 0; 

};

class Derived : public Base {
    int b;

    public:
    int get_a() {

        return a;  // CANNOT use (private) attributes from the base class
    }
};









class Base{
    private:
    int a = 0; 
    
    public:
    int get_a() { // Need a public member function 
        return a;
    }

};

class Derived : public Base {
    int b;

    public:
    int get_a() {

        return Base::get_a();  // Need to specify which get_a() we refer
                                // to to avoid recursion
    }
};





int main() {

    Derived d;
    cout << d.b << endl;  // ERROR!!!! 'b' is private
    cout << d.a << endl;  // ERROR!!!! 'a' is private
    
    cout << d.get_a() << endl; // Legal for the second example above
}