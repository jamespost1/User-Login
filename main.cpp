#include <iostream>
#include <string>
#include "Administrator.h"
#include "User.h"
using namespace std;
int main(){
  User user1("abbott","monday"), user2("james","wednesday"), user3("costello","tuesday");
  Administrator admin1("abbott","monday"), admin2("marshall","password"), 
  admin3("costello","tuesday");
  cout << "Results of login:" << endl;
  cout << "User login for abbott: " << user1.login() << endl;
  cout << "User login for james: " << user2.login() << endl;
  cout << "User login for costello: " << user3.login() << endl;
  cout << "Admin login for abbott: " << admin1.login() << endl;
  cout << "Admin login for marshall: " << admin2.login() << endl;
  cout << "Admin login for costello: " << admin3.login() << endl;
  return 0;
}