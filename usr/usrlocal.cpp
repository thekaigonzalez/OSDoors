#include "usrlocal.h"


int main() {
  right_side();
  
  left_side();
  std::string t;
  std::cout << "Running Doors 1.0.0 " <<  std::right << std::setw(80)  << std::setfill(' ') << "Doors Bootloader Statistics\nBootloader Edition: stable" << std::right << std::setw(72)  << std::setfill(' ') << "Memory Heap (Hex): 0x00001\nType 'help' for Commands." << std::right << std::setw(48)  << std::setfill(' ') << "Loader Version: 1.0.0\n" << std::right << std::setw(100)  << std::setfill(' ') << "\n\n";
  std::cout << "#-: ";
  std::cin >> t;
  while (t != "exit")
	{
	  std::cout << "#-: ";
	  
	 
	  if (t == "putchar") {
	    char c;
	    std::cin >> c;
		  putchar (c);
	  }
	  else if (t == "puts") {
	    std::string T;
	    getline(std::cin, T);
	    std::cout << T << std::endl;
	  }
	  else
		{
		  
		  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		  std::cin >> t;
		  std::cin.clear();
		  
		}
	 
	}
}