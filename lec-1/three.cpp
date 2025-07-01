// class -> properties

// to create a instance of class we create a object 

#include<iostream>
using namespace std;

// creating a class

class Hero{

    //properties
    private: // iske niche ka sirf bas ek class ke andar hi access sakta hai
    int health;

    public: // iske niche sab kuch public hoga har jagah use kar sakte
    char *name;
    char level;

    // default constructor -> jarurat nhi hai uski
    Hero(){
        cout << "constructor is called" << endl;
        name = new char[100];
    }

    //parameterized constructor
    // agar input aur data member ka same nam ho
    // this pointer ka use ho toh h1 ki health data member vali health me dal do
    // this -> ek pointer hai yeh
    Hero(int health, char level){
        cout << "this ->" << this << endl;
        this -> health = health;
        this -> level = level;
    }

    //copy constructor
    // only pass by reference not pass by value
    Hero(Hero& temp){
        cout << "copy constructor is called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout << "Name:" << this->name << '||' ;
        cout << this->health << '||' ;
        cout << this->level << endl;
        cout<<endl;
    }

    //getter and setter
    // agar koi private me hai and we want to access it then we ue this

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }  

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch; 
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

};

int main(){


    Hero suresh(70, 'C');
    suresh.print();
    
    // copy constructor // made by default
    Hero R(suresh);
    R.print();

}

// // whenever we create an object a constructor is invoked
// // by default when we have hero h1
// // a constructor at backend h1.Hero() is called but not visible

// //static called
// cout<< "hello" << endl;
// Hero h1(10);
// cout<<"address of h1 is: "<< &h1 << endl;

// //dynamic called
// Hero *h = new Hero(11);

// agar ek bhi naya constructor bana lo toh defalut vale ki mritu ho jati hai