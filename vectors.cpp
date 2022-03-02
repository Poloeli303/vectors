#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <string>
using namespace std;
int main() {

  srand(time(NULL));
  vector<int> x;
  vector<string>:: iterator iter;

  for (int i = 0; i < 10; i++)
    {
      x.push_back(rand() % 51 + 50);
    }

  for (auto iter = x.begin(); iter != x.end(); iter++)
    {
      cout << *iter << " ";
    }

  cout << endl;
  
  vector<string>name;
  vector<int>mum;
  // make input variable to hold input
  string input;
  cout<<"Enter 5 friends names"<<endl;
  for (int j = 0; j < 5; j++)
    {
      // get input 5 times
      getline(cin, input);
      //put input into vector
      name.push_back(input);
    }

  cout << endl;
  
  for(auto iter = name.begin(); iter != name.end(); iter++)
    {
      sort(name.begin(), name.end());
      cout << *iter << " ";
    }
  iter = find(name.begin(), name.end(),"alejandro");

  cout << endl;
  
  if (iter != name.end())
  {
    cout << "You have cute friends." << endl;
  }
  else
  {
    cout << "Get better friends you bum" << endl;
  }
  
}
