
#include <iostream>
#include <string>
#include <cstdlib>
#include "MagicBag.h"
using namespace std;

void testChar ();
void testFloat();
void testInt();
int main (){
  //test information is all displayed between the carrot rows, compile and run and it will guide you through it
  cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
  testChar();
  testFloat();
  testInt();
  cout << endl << "feel free to change the f values in the tests to check for yourself with diff values" << endl;
  cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
  //tests methods on int
  //tests methods on float
  return 0;
}
void testChar (){
  //tests methods on char
  cout << "Test1: character Primative type" << endl;
  MagicBag<char> m1;
  char f1 = 'a';
  char f2 = 'b';
  char f3 = 'c';
  cout << "test values: " << f1 << f2 << f3 << endl;
  m1.insert (f1);
  m1.insert (f2);
  m1.insert (f3);
  cout << "These should match test values: " << m1 << endl << "if they did then insert and operator << both worked" << endl;
  char f4 = 'd';
  MagicBag<char> m2 = m1;
  cout << "should match previous: " << m2 << endl << "if they did then the operator = worked" << endl;
  m2.draw ();
  m2.draw ();
  m2.draw ();
  cout << "should match previous followed by an empty line: " << endl << m1 << endl << m2 << endl << "if that worked then draw method works" << endl;
  cout << "should print 10: " << m1.peek(f1) << m1.peek(f4) << " if it did then peek works" << endl << endl;
}
void testFloat (){
  //tests the float compadability
  cout << "Test2: Float Primative type" << endl;
  MagicBag<float> m1;
  float f1 = 10.5;
  float f2 = 15.3;
  float f3 = 5.6;
  cout << "test values: " << f1 << " " << f2 << " " << f3 << endl;
  m1.insert (f1);
  m1.insert (f2);
  m1.insert (f3);
  cout << "These should match test values " << m1 << endl << "if they did then insert and operator << both worked" << endl;
  float f4 = 2.1;
  MagicBag<float> m2 = m1;
  cout << "should match previous " << m2 << endl << "if they did then the operator = worked" << endl;
  m2.draw ();
  m2.draw ();
  m2.draw ();
  cout << "should match previous followed by an empty line " << endl << m1 << endl << m2 << endl << "if that worked then draw method works" << endl;
  cout << "should print 10: " << m1.peek(f1) << m1.peek(f4) << " if it did then peek works" << endl << endl;
}
void testInt (){
  // tests the int compatibility
  cout << "Test3: Integer Primative type" << endl;
  MagicBag<int> m1;
  int f1 = 10;
  int f2 = 15;
  int f3 = 5;
  cout << "test values: " << f1 << " " << f2 << " " << f3 << endl;
  m1.insert (f1);
  m1.insert (f2);
  m1.insert (f3);
  cout << "These should match test values " << m1 << endl << "if they did then insert and operator << both worked for char" << endl;
  int f4 = 2;
  MagicBag<int> m2 = m1;
  cout << "should match previous " << m2 << endl << "if they did then the operator = worked" << endl;
  m2.draw ();
  m2.draw ();
  m2.draw ();
  cout << "should match previous followed by an empty line " << endl << m1 << endl << m2 << endl << "if that worked then draw method works" << endl;
  cout << "should print 10: " << m1.peek(f1) << m1.peek(f4) << " if it did then peek works" << endl << endl;
}
