#include<stdio.h>
void Bubble_Sort(int N, int Ar[])
{
	int i,j,k,t;
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(Ar[j]>Ar[j+1])
			{
				t=Ar[j];
				Ar[j]=Ar[j+1];
				Ar[j+1]=t;
			}
		}
		printf("\nThe array after iteration %d is: ",i);
            for(k=0;k<N;k++)
	           printf(" %d",Ar[k]);
	}
}

int main()
{
	int n,Array[100],i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("\nEnter the array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&Array[i]);
	
	printf("\nThe original array is:  ");
	for(i=0;i<n;i++)
		printf(" %d",Array[i]);
	
	Bubble_Sort(n,Array);
	
	printf("\nThe sorted array after sorting using Bubble sort method is: ");
	for(i=0;i<n;i++)
	printf(" %d",Array[i]);
    return 0;
}


