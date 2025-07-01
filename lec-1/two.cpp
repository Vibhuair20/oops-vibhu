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
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<< "level is: "<< (a).level << endl;
    cout<< "health is: "<< (a).getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b -> setHealth(70);
    b -> setLevel('A');
    cout<< "level is: "<< (*b).level << endl;
    cout<< "health is: "<< (*b).getHealth() << endl;
    
    // any method can be used here
    cout<< "level is: "<< b -> level << endl;
    cout<< "health is: "<< b -> getHealth() << endl;

}