#include <iostream>
#include <conio.h>

namespace std

class set
{
    int m, n;
public:
    void input(void)
    void display(void)
    int largest(void)
};

int set :: largest(void)
{
    if(m >= n)
        return(m);
    else
        reurn(n);
}

void set :: input(void)
{
    cout << "Input values of m and m" << "\n";
    cin >> m >> n;
}

void set :: display(void)

{
    cout << "Largest value = "
         << largest() << "\n";
         
}

int main()
{
        set A;
        A.input();
        A.display();

        return 0;
}