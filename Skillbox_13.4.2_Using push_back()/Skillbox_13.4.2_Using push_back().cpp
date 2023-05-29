/*Задание 2
Робот приходит в очередь и заставляет уходить из конца очереди всех, чей номер меньше, 
чем у него, а потом становится в очередь сам. Последний робот будет иметь 
номер -1 (и, соответственно, не сможет никого выгнать, так как остальные имеют 
положительные номера). Когда он пришёл, нужно вывести все номера в очереди на экран.*/

#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> vec;
	int number;

	while(true)
	{
		std::cout << "Robot enter your serial number: ";
		std::cin >> number;
		
		if (number == -1) break;
		
		while (!vec.empty() && vec.back() < number)
		//while (vec.size() != 0 && vec[vec.size() - 1] < number)
		{
			vec.pop_back();
		}
		vec.push_back(number);
	}

	std::cout << "All robots line: ";
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
		if (i != vec.size() - 1)
			std::cout << ", ";
	}
}