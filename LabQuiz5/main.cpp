//This is a program designed to hold Dog objects and practice overwriting operators to compare their ages
#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

class Dog{
public:
    Dog(string name, int humanYears){
        this->name = name;
        this->age = humanYears * 7;
    }
    
    void AddYears(int humanYears){
        age += humanYears * 7;
    }
    
    void AddYear(){
        age += 7;
    }
    
    int getAge(){
        return age;
    }
    
    string getName(){
        return name;
    }
    void operator++(){ //adds 7 years to age
        age += 7;
        
    }
    int operator++(int dummy){ //uses a dummy to tell the differnce between pre and post then adds 7 to age
        int temp = age;
        age += 7;
        return temp;
        
    }
    int operator+=(int humanYears){ //adds an appropriate amount of dogs year per human year to age
        age += humanYears*7;
        return age;
    }
    bool  operator>(Dog x){ //compares the age of two dogs to determine greater age
        if(this ->getAge() > x.getAge()){
            return true;
        }
        else
            return false;
    }
    bool  operator<(Dog x){ //compares the age of two dogs to determine lesser age
        if(this ->getAge() < x.getAge()){
            return true;
        }
        else
            return false;
    }
    
   const Dog& oldest(const Dog &h) const{ //compares two dog objects and returns the oldest aged one
        if (this->age > h.age){
            return *this;
        }
        if (this->age < h.age){
            return  h;
        }
        else{
            return h;
        }
    }

    
private:
    string name;
    int age;
};

ostream& operator<<(ostream& o,  Dog& d) {
    o << "I am " << d.getName() << ", a "  << d.getAge()  << " year old dog. Woof!" << endl;
    return o;
}

int main(){
    
    Dog myDog("Fido", 1);
    Dog myDog2("Jack", 10);//new test dog
    Dog myDog3("Jill",1); //new test dog
    
    myDog.AddYear();
    cout << myDog2.getName() << "'s age is : "<< myDog2.getAge() << endl;
    cout << myDog3.getName() << "'s age is : "<< myDog3.getAge() << endl;
    cout << myDog.getName() << "'s age is now: "<< myDog.getAge() << endl;
    
    myDog.AddYears(2);
    myDog2 += 3; //test use of +=
    
    cout << myDog.getName() << "'s age is now: " << myDog.getAge() << endl;
    myDog++; //test increment
    cout<< "Happy Birthday!\n";
    cout << myDog.getName() << "'s age is now: " << myDog.getAge() << endl;
    cout<< "Happy Birthday!\n";
    cout << myDog.getName() << " is " << myDog.operator++(0) << endl; //test post increment
    cout<< myDog.getName() << " is now " << myDog.getAge() << endl;
    
    if (myDog2 > myDog){ //test > comparison
        cout<< myDog2.getName() << " is older\n";
    }
    if (myDog3 < myDog){ //test < comparison
        cout<< myDog3.getName() << " is younger\n";
    }
    Dog old = myDog3.oldest(myDog2); //test oldest
    cout<< "Between Jack and Jill " << old.getName() << " is the oldest" <<endl;
   
    
    return 0;
}
