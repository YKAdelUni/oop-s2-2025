#include <iostream>
#include "Orchestra.h"

using namespace std;

// default constructor
Orchestra::Orchestra(){
    numMusicians = 0;
    musicians = nullptr;
}           

// constructor for an orchestra of given numMusicians
Orchestra::Orchestra(int size){
    this->maxMusicians = size;
    this->numMusicians = 0;
    this->musicians = new Musician[numMusicians];
}   

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return numMusicians;
} 

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(string instrument){
    for (int i = 0; i < numMusicians; i++){
        if (instrument == musicians[i].get_instrument()){
            return true;
        }
    }
    return false;
} 

// returns the array of members of the orchestra
Musician *Orchestra::get_members(){
    return musicians;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if (numMusicians < maxMusicians){
        musicians[numMusicians] = new_musician;
        numMusicians++;
        return true;
    } else {
        return false;
    }
}

Orchestra::~Orchestra(){delete[] musicians;}