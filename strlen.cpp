//��1���ݹ��㷨

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

printf ("�ַ����ĳ���Ϊ%d\n",strlen(s)); 

}

//��2���ǵݹ��㷨

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

printf ("�ַ����ĳ���Ϊ%d\n",strlen(s)); 

}
