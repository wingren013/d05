#include <iostream>

template <typename T> void swap(T &t1, T &t2)
{
	T	swap;
	
	swap = t1;
	t1 = t2;
	t2 = swap;
}

template <typename T> T min(T t1, T t2)
{
	if (t1 < t2)
		return (t1);
	else
		return (t2);
}

template <typename T> T max(T t1, T t2)
{
	if (t1 < t2)
		return (t2);
	else
		return (t1);
}

int		main(void)
{
	int	i = 2;
	int	j = 3;
	
	swap<int>(i, j);
	std::cout << j << std::endl;
	std::cout << min<int>(i, j) << std::endl;
	std::cout << max<int>(j, i) << std::endl;
}
