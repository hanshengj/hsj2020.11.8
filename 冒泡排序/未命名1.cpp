# include <stdio.h>
int sort (int s[],int num)
{
  for ( int i = 0; i < num -1; i ++)
  for ( int j = 0; j < num -1 - i ;j ++)
  {
  	int temp ;
  	if ( s[j] > s[j+1])
  	{
  		temp = s [j];
  		s [j]= s [j+1];
  		s [j+1]= temp;
	}
  }	
}
int main ()
{
	int arr[] = {1,4,2,6,8,3,5};
	int num = sizeof (arr)/sizeof (*arr);
	sort ( arr , num);
	for ( int i =0;i < num ; i++)
	{
		printf("%d",arr[i]); 
	}
}
