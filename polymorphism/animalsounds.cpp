#include <iostream>

using namespace std;

// Base class
class Animal
{
public:
    virtual void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{
public:
    virtual void animalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    virtual void animalSound()
    {
        cout << "The dog says: bow wow \n";
    }
};

int main()
{
    Animal *ar[3];
    Animal animal;
    Dog dog;
    Pig pig;

    animal.animalSound();
    dog.animalSound();
    pig.animalSound();

    //set up an array of animal pointers
    ar[0] = &animal;
    ar[1] = &dog;
    ar[2] = &pig;

    // loop over our generic array
    for(int i=0; i<3; i++) {
        ar[i]->animalSound();
    }
}