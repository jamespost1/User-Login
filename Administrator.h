#ifndef ADMIN_H
#define ADMIN_H
#include <string>
using namespace std;

class Administrator
{
  public:
  Administrator();
  Administrator(string name, string password);
  bool login();
  private:
  string name;
  string password;
};
#endif