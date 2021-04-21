
#include<iostream>
#include<vector>

using namespace std;

/*
Look at wk10.cpp for an example to follow of recursive searching
*/

/*
STUDENT: Write a function that will take two vectors of int
         and return true if the vectors are equal (they have
         the same numbers in the same order) and false if they
         are not equal
*/
bool areEqual(vector<int> a, vector<int> b) {
  if (a.size() != b.size()) {
    return false;
  }
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}
/*
STUDENT: Write a function that will take two vectors of int
         and return true if the second vector exists inside 
         the first vector.  Use recursion to implement this
         function
*/

void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }
  cout << endl;
}

int main() {

  vector<int> vec_a;
  vector<int> vec_b;
  vector<int> vec_c;
  vector<int> vec_d;

  vec_a.push_back(1);
  vec_a.push_back(4);
  vec_a.push_back(2);
  vec_a.push_back(7);
  vec_a.push_back(5);
  vec_a.push_back(8);
  vec_a.push_back(2);
  vec_a.push_back(9);
  vec_a.push_back(3);
  vec_a.push_back(5);
  vec_a.push_back(4); 
  vec_a.push_back(0);

  //USE THIS EXAMPLE TO "SLICE" A VECTOR
  vector<int> small_a(vec_a.begin()+1, vec_a.end());

  vector<int> small_b(vec_a.begin()+3, vec_a.end()-3);

  printVector(vec_a);
  printVector(small_a);
  printVector(small_b);

  vec_b.push_back(4);
  vec_b.push_back(2);

  vec_c.push_back(5);
  vec_c.push_back(7);

  vec_d.push_back(5);
  vec_d.push_back(8);
  vec_d.push_back(2);


  /*
  STUDENT: Use your function to test if vec_b, vec_c, vec_d are within vec_a
           cout the result of each test
  */
}