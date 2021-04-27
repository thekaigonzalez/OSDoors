//copy file with no changes
#include <cstdint>

#include <cstdio>

#include <typeinfo> // NOLINT
#include <cstring>
#include <cstdlib>

typedef struct FRAMEBUF {
  
  static void write (char);
  
  uint16_t CharAlloc{};
  
  uint64_t Mega{};
  int val = 0x002a9;
  
} FRAMEBUF;

void FRAMEBUF::write (const char C)
{
  
  putchar (C);
  
}
int str_size_t (const char *array)
{
  const char *str = array;
  int Size = 0;
  while (str[Size] != '\0') Size++;
  return Size;
}
void sputs (const char *__s)
{
  
  for (int i = 0; i < str_size_t (__s); ++i)
	{
	  
	  putchar (__s[i]);
	  
	}
  

  
}

typedef struct {

}
	DoorStructure;

typedef struct {

}
	StructMake;

int mix (void *, FRAMEBUF *buf)
{
  
  if (buf->val != 0x00000) return 1;
  
  if (buf->val != 0x192381) return 2;
  
  else return 3;
  
}
/**
 * Shows an ERROR. format is shown below.
 * @code
 * errac('no parser found') -> E: no parser found
 * @param err
 * @return
 */
void errac (const char *err)
{
  const char *str1 = "\nE: ";
  const char *str2 = err;
  const char *str3 = "\n";
  char *new_str;
  
  if ((new_str = static_cast<char *>(malloc (strlen (str1) + strlen (str2)))) != NULL)
	{
	  new_str[0] = '\0';   // ensures the memory is an empty string
	  strcat (new_str, str1);
	  strcat (new_str, str2);
	  strcat (new_str, str3);
	}
  sputs (new_str);
  
}
void flush (const char *__s)
{
  const char *str1 = __s;
  const char *str2 = "\n";
  
  char *new_str;
  
  if ((new_str = static_cast<char *>(malloc (strlen (str1) + strlen (str2)))) != NULL)
	{
	  new_str[0] = '\0';   // ensures the memory is an empty string
	  strcat (new_str, str1);
	  strcat (new_str, str2);
	  
	}
  sputs (new_str);
  
}

