#include "types.h"
#include "stat.h"
#include "user.h"
// #include "defs.h"


int
main(int argc, char *argv[])
{
  int  i;

  if(argc <= 1){
    exit();
  }
  for(i=1;i<argc;i++)
  {
      for(int j = 0;j < strlen(argv[i]) ; j++)
      {
          if(argv[i][j]>=97 && argv[i][j]<=122)
          {
            printf(1,"%c",argv[i][j]-32);
          }
          else if(argv[i][j]>=65 && argv[i][j]<=90)
          {
            printf(1,"%c",argv[i][j]+32);
          }
          else
          {
            printf(1,"%c",argv[i][j]);
          }
      }
    printf(1," ");
  }
  printf(1,"\n");
  exit();
}