#include <cmath>

struct vector
{
    double x, y, z;
};

vector sumv(vector a, vector b) // suma a doi vectori
{
    vector rez;
    rez.x = a.x + b.y;
    rez.y = a.y + b.y;
    rez.z = a.z + b.z;
    return rez;
}


double prods(vector a,vector b) // produsul a doi vectori
{
    double rez;
    rez = a.x*b.x + a.y*b.y + a.z*b.z;
    return rez;
}

vector versor(vector a)
{
    vector rez;     // versorul unui vector (sqrt=radical din ...)
    double modul;
    modul = sqrt(a.x*a.x + a.y*a.y + a.z*a.z); // necesita #include <cmath>
    if(modul < 1.0e-7)
        return a;
    rez.x = a.x / modul;
    rez.y = a.y / modul;
    rez.z = a.z / modul;
    return rez;
}
