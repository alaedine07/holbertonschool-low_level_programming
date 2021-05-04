#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <string.h>

/* Define an alternative name for puts */
int (*orig_puts)(const char *str1);

int puts(const char *str1) 
{

  // Backup the orginal call to strcmp() in orig_strcmp()
  // by initialazing the pointer of orig_strcmp().
  if(!orig_puts) orig_puts = dlsym(RTLD_NEXT, "puts");
  // return the proper result of strcmp()
  return orig_puts("--> Please make me win!");
}
