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
    static int TimetoComplete;

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
    // Hero(Hero& temp){
    //     cout << "copy constructor is called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<endl;
        cout << "Name:" << this->name << '||' ;
        cout << this->health << '||' ;
        cout << this->level << endl;
        cout<<endl;
    }

    //static functions
    // no create object // this keyword x || pointer to currebt object

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

    static int random(){
        return TimetoComplete;
    }

    ~Hero(){
        cout<< "destructor is called" << endl;
    }

};

// datatype classname scope resolution filename = value
int Hero :: TimetoComplete = 5;

int main() {
    // for static no need to create objects
    cout << Hero::TimetoComplete <<endl;
    
    return 0;
}
// // static ke loye automatic destructor
// Hero a;
// // destructor will be called here
// // no retun type npo input pare=ameter

// //dynamic  -> manual destructor
// Hero *b = new Hero();
// delete b;

// Hero h1;
// h1.setHealth(70);
// h1.setLevel('D');
// char name[7] = "Babbar";
// h1.setName(name);
// h1.print();

// //default copy constructor
// Hero h2(h1);
// h2.print();

// h1.name[0] = 'G';
// h1.print();

// // yaha par h2 ka nam bhi change ho jayega so yaha shallow copy ka concept lagega
// // due to default copy constructor
// h2.print();