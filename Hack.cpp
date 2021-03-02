#include <iostream>
using namespace std;

int main() {
bool a = true;
  int first = 0;
  string port;
  string str;
  cout << "enter server ip address: ";
  cin >> str;
  cout << "\n";
while (a){
    if (first > 1000){
    cout << " \n|------------------------| \n |     access granted     | \n |------------------------| \n";
    break;
  }
  int y = rand() % 5 + 0;
    cout << rand() % 2 + 0;
        if (y == 1){
           cout << "$";
       } else if (y == 3) {
          cout << "#";
       }
    int x = rand() % 20 + 0;

    if (x == 1){
          cout << "\n";
    }
  if (first == 10){
    cout << "\n";
    cout << "enter port: ";
      cin >> port;
    cout << "\n";
  } else if (first == 12){
    cout << "hacking " << str << " on port " << port << "\n";
  }

  
  first++;
 }
  cout << "> ";
  cin >> str;
  cout << "\n";
}