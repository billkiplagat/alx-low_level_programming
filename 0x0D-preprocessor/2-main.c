#include <stdio.h>
#include <libgen.h>
int main(void)
{
    printf("%s\n",basename(__FILE__));
    return (0);
}
