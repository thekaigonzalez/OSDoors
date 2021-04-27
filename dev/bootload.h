
#ifndef INC_E70BA14F88AB4527B0378720C4BA9FBC
#define INC_E70BA14F88AB4527B0378720C4BA9FBC
#include <iostream>
#include "../usr/boot/locale.inl"
#include <dirent.h>
#include <filesystem>
#include <curl/curl.h>
#include <unistd.h>

#include <vector>
void put (uint64_t size, const std::string &ioBufer)
{
  std::cout << ioBufer;
}
size_t WriteCallback (char *contents, size_t size, size_t nmemb, void *userp)
{
  ((std::string *) userp)->append ((char *) contents, size * nmemb);
  return size * nmemb;
}
namespace fs = std::filesystem;

void isInConsole ()
{
  std::string CM;
  std::string defpath = "../usr/bin/";
  
  sputs (("Thank you for loading doors.\n------------------------\nItems that you add here are stored to " + defpath
		  + "#\n\tChange this by typing CD <dir> To move.\n"
			"\tThe system as of " + __TIME__ + " Is running perfectly healthy.\n").c_str ());
  sputs ("Did you know?\nIf you type printf You can print things? Cool Right?\n");
  flush ("Type help For a list of commands.");
  
  while (true)
	{
	  
	  std::cout << "~/#-:";
	  std::cin >> CM;
	  if (CM == "help")
		{
		  std::cout << "opts\n";
		}
	  else if (CM == "leave")
		abort ();
	  else if (CM == "ldir")
		{
		  for (const auto &entr : fs::directory_iterator ("."))
			{
			  std::cout << "#/" << entr.path ().string ().substr (2, entr.path ().string ().find ('\n')) << std::endl;
			}
		  char *buff;
		  getcwd (buff, 1000);
		  std::string buffe = buff;
		  put (1000, "Contents of Directory " + fs::current_path ().string () + " listed without any errors.\n");
		}
	  else if (CM == "printf")
		{
		  std::vector<char> array16_t;
		  std::string bufer;
		  getline (std::cin, bufer);
		
		}
				
	  else
		std::cout << "E: '" << CM << "' Command not found.";
	}
}

#endif //INC_E70BA14F88AB4527B0378720C4BA9FBC

