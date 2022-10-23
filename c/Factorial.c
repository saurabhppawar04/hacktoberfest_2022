void fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	printf("Factorial=%d",f);
}
main()
{
		int n;
		scanf("%d",&n);
		fact(n);
}
	
