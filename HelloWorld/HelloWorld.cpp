#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <string> Census;

void Census2017(){
  // Census.push_back("Name @ GitHub link");
  Census.push_back("Allen Comp Sci @ https://github.com/AllenCompSci");
  
}

void printCensus(){
  for(int i = 0; i < (int)Census.size(); i++){
    cout << "Hello World from " + Census[i] << "\n"; 
  
  }
}

void main(){
  Census2017();
  printCensus();  
}
