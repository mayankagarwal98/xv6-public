#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
// printf(1,"%d %d\n",atoi(argv[1]),atoi(argv[2]));
set_priority(atoi(argv[1]),atoi(argv[2]));
exit();
}
