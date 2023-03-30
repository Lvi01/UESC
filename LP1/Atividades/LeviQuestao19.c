
int main()

{
    int n, prod=1,x;
    printf ("Digite um numero:");
    scanf ("%D", &n);
    for (x=1; x<=n; x++)
{
prod*= x;
}
printf ("Fat= %D\n", prod);
return 0;
}
