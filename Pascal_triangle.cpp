#include<iostream>


int main()
{
    int n;
    std::cout << "Input n : ";
    std::cin >> n;
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        int s = 1;
        for (int j = 1; j < (n - i); j++)
        {
            std::cout << "\r";
        }
        for (int k = 0; k <= i; k++)
        {
            std::cout << " " << s;
            s = s * (i - k) / (k + 1);
        }
        std::cout << std::endl ;
    }
    std::cout << std::endl;
    return 0;
}
