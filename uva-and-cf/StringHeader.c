/**
#################################################
#   Name: Md. Nahid Hassan                      #
#   Email: nahid.cseru@gmail.com                #
#   Department: Computer Science & Engineering  #
#   University Name: University of Rajshahi     #
#################################################
                                             **/

#include <string.h>
#include <stdio.h>

int main (void)
{
char buffer[100];
char *to = buffer;
to = stpcpy (to, "foo");
to = stpcpy (to, "bar");
to = stpcpy(to," Nahid Hassan");
puts (buffer);
return 0;
}
