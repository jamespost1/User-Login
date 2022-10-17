#include <iostream>
#include <string>
#include "User.h"
#include "Security.h"
using namespace std;

User::User()
{
  name = "";
  password = "";
}
User::User(string username, string pass)
  {
  name = username;
  password = pass;
  }
bool User::login()
{
  int result;
  result = Security::validate(name, password);
  if (result == 1 || result == 2)
  {
    return true;
  }
  return false;
}