#include <iostream>
#include <string>
#include "Administrator.h"
#include "Security.h"
using namespace std;

Administrator::Administrator()
{
  name = "";
  password = "";
}
Administrator::Administrator(string username, string pass)
  {
  name = username;
  password = pass;
  }
bool Administrator::login()
{
  int result;
  result = Security::validate(name, password);
  if (result == 2)
  {
    return true;
  }
  return false;
}