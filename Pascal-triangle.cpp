#include <iostream>



double PK(int N, int K)
{
	return ((N < K) ? 0 : ((K == 0) ? 1 : ((N - K + 1) / double(K) * PK(N, K - 1))));
}

int main()

{
	
	int string;
	
	std::cin >> string; 

	for (int j = 0; j < string; j++)
	{
		for (int i = 0; i < j; i++)
			std::cout << PK(j, i) << "  ";
		std::cout << "\n";
	}

	return 0;
}