# include <stdio.h>
# include <stdlib.h>
int main (int argc,char *argv[])
{
	int n,i,j,p = 2,k = 0;
	n = atoi(argv[1]);
	for(i = 0;i < n/2;i++)
	{
		for(j=0;j<n;j++)

		{
			if(i==0||j==0||j==n-1||i==j||j==n/2||j==(n/2+i)||i==(n-1)/2)
		          printf("*");
			else
				printf(" ");
		} 
		printf("\n");

}
 for(i=(n+1)/2;i<=n;i++)
{
	for(j=n-1;j>=0;j--)
	{
	if(i==(n+1)/2||i==n||j==n/2||j==i-1||j==n-1||j==0||j==k)
	{
		printf("*");
	}
	else
		printf(" ");
	}
	printf("\n");
	k++;
	}
	return 0;
}
