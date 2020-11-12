//（1）递归算法

# include <stdio.h>

# include <stdlib.h>

int strlen ( char *s)

{

if (*s== 0)

return 0 ;

else 

return strlen ( s + 1) + 1 ;

}

int main ()

{

char s[] = "Hellow,World";

printf ("字符串的长度为%d\n",strlen(s)); 

}

//（2）非递归算法

//# include <stdio.h>

//# include <stdlib.h>

//# include <string.h>

int strlen ( const char *s)

{

int count = 0 ;

While (*s)

{

count ++ ;

s ++ ;

}

return count ;

}

int main ()

{

char s[] = "Hellow,World";

printf ("字符串的长度为%d\n",strlen(s)); 

}
