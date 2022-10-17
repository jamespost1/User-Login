#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User
{
  public:
  User();
  User(string name, string password);
  bool login();
  private:
  string name;
  string password;
};
#endif