#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int  i;
for(i=0;i<20;i++)
{
    int child=fork();
    if(child==0)
    {
        double c;
        for(double j=0;j<10000000;j++)
        {
            for(double k=j;k<1000000;k++)
            {
                double a=9.2112,b=3.3232;
                c+=a*b;
                c+=k;
            }
        }
        printf(1,"exited\n");
        exit();
    }

}
// while(wait()!=-1); 
// printf(1,"all exit\n"); 
exit();
}