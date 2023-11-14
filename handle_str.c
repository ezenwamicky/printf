#include "main.h"
int handle_str(char *str)
{
    if (str == NULL)
    {
        print_str("(null)");
        return 6;  /*Length of "(null)"*/
    }
    else
    {
        return print_str(str);
    }
}
