
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


template <class T> class MagicBag {
private:
  T * bag;
  int size;
  int maxSize;
public:
    MagicBag (){
    bag = new T [15];
    size = 0;
    maxSize = 15;
  }
  MagicBag (const MagicBag& other){
    size = other.size;
    maxSize = other.maxSize;
    T * temp = bag;
    bag = new T [maxSize];

    for (int i = 0; i < size; i++){ //moves all values into new array
      bag[i] = other.bag [i];
    }
  }
  ~MagicBag (){
    delete (bag);
  }
  void insert (T item){
    if (size == maxSize){ //checks if bag is full
      T *temp = bag; //stores address of bag
      T tempArray [2*maxSize]; //creates a new array twice as large to replace bag
      for (int i = 0; i < maxSize; i++){
        tempArray [i] = bag[i]; //moves items from bag to new array
      }
      maxSize = maxSize*2;
      bag = tempArray; //changes bag to the new array
      delete (temp); // deletes the old bag
    }
    bag [size] = item; //adds the item to the back of the array
    size = size + 1;
  }
  //draw pulls a random obgject out of the magic hat (removes and returns the object)
  T draw (){
    if (size == 0){ // error in case bag is empty
      cout << "The contents of the bag are not here right now, please come back later" << endl;
    } else { //actual program if bag had contents
      int randNum = rand() % size; // chooses a value randomly for selecting an item in the bag
      T chosenOne = bag[randNum]; // grabs the item
      bag [randNum] = bag [size];
      size = size - 1;
      return chosenOne;
    }
    return 0;
  }
  //this checks if an object is in the bag and returns the count in the bag (0 if none, 2 if 2 etc)
  int peek (T item){
    int count = 0;
    for (int i = 0; i < size; i++){
      if (bag[i] == item){
        count = count + 1;
      }
    }
    return count;
  }
  MagicBag& operator=(const MagicBag& other){
    maxSize = other.maxSize;
    size = other.size;
    T *temp = bag;
    T tempArray [maxSize];
    bag = tempArray;
    for (int i = 0; i < size; i++){
      bag [i] = other.bag[i];
    }
    delete (temp);
    return *this;
  }
  friend ostream& operator<<(ostream& os, const MagicBag& me){
    for (int i = 0; i < me.size; i++){
      os << me.bag [i] << ", ";
    }
    return os;
  }
};
