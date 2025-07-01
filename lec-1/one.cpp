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
    char level;

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

};

int main(){
    // creation of an object
    // static allocation
    Hero h1;
    cout<< "health of h1 is:" << h1.getHealth() << endl;

    //size if 8 it should be 5 because of padding and greedy alignment
    cout<< "health of h1 is:" << sizeof(h1) << endl;

    // h1.health = 70;
    h1.setHealth(70);
    cout << "health is:" << h1.getHealth() << endl;

    return 0;
}

// in case of empty class we will have a 1 byte of class to keep its identification

// to access a properti // data members using "."

// 3 types of access modifiers 1. public 2.private 3.protected
