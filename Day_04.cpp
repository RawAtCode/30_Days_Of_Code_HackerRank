/*
https://www.hackerrank.com/challenges/30-class-vs-instance/problem
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person{
        int age;
        
    public:
        Person(int initialAge);
        void yearPasses();
        void amIOld();
};

Person::Person(int initialAge){
    if(initialAge < 0){
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
    else{
        age = initialAge;
    }
}


void Person::amIOld(){
    if(age < 13){
        cout << "You are young." << endl;
    }
    else if(age >= 13 && age < 18){
        cout << "You are a teenager." << endl;
    }
    else{
        cout << "You are old." << endl;
    }
}


void Person::yearPasses(){
    age++;
}

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int age;
        cin >> age;
        
        Person p(age);
        p.amIOld();
        
        // Simulate years passing, here I took 5. You can take any
        for(int j = 0; j < 5; j++) {
            p.yearPasses(); 
        }
        
        p.amIOld();
        cout << endl;
    }
    
    return 0;
}

