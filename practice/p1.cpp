// string::rbegin/rend
#include <iostream>
#include <string>

int main ()
{
  std::string str ("one.two.a.b");
  for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit){
      if (*rit=='.') continue;
      std::cout<<*rit;
  }
    // std::cout << *rit;
  return 0;
}