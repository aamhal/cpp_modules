/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:46:31 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/31 12:13:29 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <iostream>
#include <utility>
#include <vector>
#include <cctype>



class PmergeMe {
	private:
		std::vector<int> vec;
		std::deque<int>  deq;
		double time;
	public:
	PmergeMe();
	PmergeMe(const PmergeMe &pm);
	PmergeMe& operator=(const PmergeMe &pm);
	~PmergeMe();

	
	int parcing(char **av);
	void fill_vec(char **av, std::vector<int> &vec);
	void vec_pair(std::vector<std::pair<int, int> > &pair_v);
	void ft_sort(char **av);
	void jacobs_vec(int len,std::vector<int> &vec);





	int parcing_deq(char **av);
	void fill_deq(char **av, std::deque<int> &vec);
	void deq_pair(std::deque<std::pair<int, int> > &pair_v);
	void ft_sort_deq(char **av);
	void jacobs_deq(int len,std::deque<int> &vec);
};

