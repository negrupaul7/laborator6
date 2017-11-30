int suma(int a[], int n) //suma elementelor unui sir
{
    int i, s;
    for(i=0,s=0; i<n; i++)
        s += a[i]; //s=s+a[i] ,se poate si fara acolade
        return s;
}


void modul(int a[], int n) //
{
    int i;
    for(i=0; i<n; i++)
        if(a[i] < 0) // daca elementul curent este negativ
        a[i]=-a[i]; //  a[i] primeste valoarea lui -[ai]
}


void permcirc (int s[], int n) //permutarea  circulara cu o pozitie spre stanga
{
    int i, aux;
    aux=s[0];
    for(i=0; i<n-1; i++)
        s[i]=s[i+1]; // s[i] ia valoarea liu s[i+1]
        s[n-1]=aux;
}
