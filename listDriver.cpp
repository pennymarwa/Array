// Test driver
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

#include "array_ds.h"

using namespace std;

int main()
{  
  string command;        // operation to be executed
  // Prompt for file names, read file names, and prepare files
  std::cout << "What operation to be performed? " << std::endl;
  cin >> command;
  while (command != "Quit")
  { 
    std::cout << command;
    if (command == "PutItem")
    {
      std::cout << "inside PutItem" << std::endl;
    }
    else if (command == "DeleteItem")
    {
      std::cout << "inside DeleteItem" << std::endl;
    }
    else if (command == "GetItem")
    {
      std::cout << "inside GetItem" << std::endl;
    } 
    else if (command == "GetLength")  
    {
      std::cout << "inside GetLength" << std::endl;
    } 
    else if (command == "MakeEmpty")
    {
      std::cout << "inside MakeEmpty" << std::endl;
    }
    else if (command == "PrintList")
    {
      std::cout << "inside PrintList" << std::endl;
    }
    else std::cout << " Command not recognized." << std::endl; 
    std::cout << "What next operation to be performed? " << std::endl;
    cin >> command;
  };
 
  std::cout << "Quit" << std::endl << "Testing completed."  << std::endl;
  return 0;
};

