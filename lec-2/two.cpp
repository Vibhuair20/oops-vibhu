#include<iostream>
using namespace std;

// ! Inheritance

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};


// inheritance
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<< "male is sleeping" << endl;
    }
};
  
//protected is like private only bahar access nhi kar sakte -> bas child calss me use kar sakte hai

class Female: protected Human{
    public:
    string color;

    void sleep(){
        cout << "male sleeping" <<endl;
    }

    int getHeight(){
        return this-> height;
    }

};

int main(){
    Male o1;
    cout<<o1.age<<endl;
    cout<<o1.weight<<endl;
    cout<<o1.age<<endl;
    cout<<o1.color<<endl;
    o1.setWeight(84);
    cout<<o1.weight<<endl;
    o1.sleep();

    Female f1;
    cout << f1.getHeight() << endl; 

    return 0;
}

// parent class private not public inherit possible

// public -> private -> private (getter setter use kar sakte hai)
// protected -> public -> protected
