#include<stdio.h>
#include<math.h>
int solutie[2][20],n,a[50][50]={{0,0, 0, 0, 0, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 1, 1, 1, 1, 1},{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }};

 

void tipar()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2;j++)
		printf("%d ",solutie[i][j]);
	}
	printf("\n");
}

int valid(int linii,int col)
{ 
	for(int i=1;i<=linii-1;i++)
	{
		for(int j=1;j<=col-1;j++)
			{
				if(a[i][j]==0)
				return 0;
		    }
		
	}
	
	
	return 1;
}

 void back(int linii,int col)
{
	for(int i=1;i<=linii;i++)
		for(int j=1;j<=col;j++)
	{	
		solutie[i][1]=i;
		solutie[i][2]=j;

        if (valid(linii,col))
		{
			if((linii==5)||(col==9))
               tipar();

		else
		{
                back(linii+1,col+1);
		}
		
	}
      

}
 }

 

void main()
{

printf("labirintul este :\n 0 0 0 0 0 0 0 0 0 0 \n 1 1 1 1 1 1 0 0 0 0 \n 0 0 0 0 0 1 0 0 0 0 \n 0 0 0 0 0 1 1 1 1 1 \n 0 0 0 0 0 0 0 0 0 0 \n");

scanf_s("%d",&n);

back(2,1);


}