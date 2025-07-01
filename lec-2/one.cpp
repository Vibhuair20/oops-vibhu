// 1 encapsulation

// wrapping up data members and functions -> ek siingle entity me dal diya

// fully encapsulated class -> all data members are private marked

//? what is the reason of encapsulation -> information/data hiding
// ! data HIDING - SWCURITY
// ! if we want we can make class read only
// ! code reusability

#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;
    
    public:
    int getAge(){
        return this->age;
    }


};

int main(){

    Student first;
    cout<< "sab shi hai" << endl; 

     return 0;
}
