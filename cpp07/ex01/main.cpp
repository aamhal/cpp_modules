/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:32:41 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/13 09:32:44 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    std::string tab2[] = { "Hello", "World", "!" };
    const int tab3[] = { 5, 6, 7, 8, 9 };
    const char tab4[] = { 'a', 'b', 'c', 'd', 'e'};
    const char *tab5[] = { "Hello", "World", "!" };

    iter(tab, 5, print<int>);
    std::cout << "--------" << std::endl;
    iter(tab2, 3, print<std::string>);
    std::cout << "--------" << std::endl;
    iter(tab3, 5, print<const int>);
    std::cout << "--------" << std::endl;
    iter(tab4, 5, print<const char>);
    std::cout << "--------" << std::endl;
    iter(tab5, 3, print<const char*>);
    return 0;
}