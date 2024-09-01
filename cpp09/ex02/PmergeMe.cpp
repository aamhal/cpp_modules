/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:46:41 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/31 12:16:24 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>


PmergeMe::PmergeMe(){};
PmergeMe::PmergeMe(const PmergeMe &pm){
	*this = pm;
};
PmergeMe& PmergeMe::operator=(const PmergeMe &pm){
	if (this != &pm) {
		(*this).vec = pm.vec;
		(*this).deq	= pm.deq;
	}
	return *this;
};
PmergeMe::~PmergeMe() {};


int PmergeMe::parcing(char **av){
	int j = 0;
	for (int i = 1; av[i]; i++){
		j = 0;
		while(av[i][j])
		{
			if (!std::isdigit(av[i][0]) ||  av[i][0] == '+')
				j++; ;
			if (av[i][0] == '-')
				return 1;
			if (!std::isdigit(av[i][j]))
				return 1;
			j++;
		}
	}
	std::cout << "Before: ";
	for (int i = 1; av[i]; i++)
			std::cout << av[i] << " ";
	std::cout << std::endl;
	
	return 0;
}


void PmergeMe::fill_vec(char **av, std::vector<int> &vec){
	for (int i = 1; av[i]; i++)
		vec.push_back(std::atoi(av[i]));

}


void PmergeMe::vec_pair(std::vector<std::pair<int, int> > &pair_v){
	std::pair<int, int> p;
	for (int i = 0; i < (int)pair_v.size(); i++){
		p = pair_v[i];
		int j = i - 1;
		while(j >= 0 && pair_v[j].first > p.first){
			pair_v[j +1] = pair_v[j];
			j--;
		}
		pair_v[j + 1] = p;
	}
}


void PmergeMe::jacobs_vec(int len,std::vector<int> &vec){
	vec.push_back(0);
	vec.push_back(1);
	if (len <= 2) 
	return ;
	for (int i = 2; i <= len; i++){
		vec.push_back(vec[i - 1] + 2 * vec[i - 2]);
	}
	std::vector<int> v;
	v = vec;
	int a,b;
	vec.clear();
	for (int i = 0; i < (int)v.size(); i++){
		a = v[i];
		b = v[i+1];
		while(b > a)
			vec.push_back(b--);
		if ((int)vec.size() >= len) 
			break;
	}
	for (int i = 0; i < (int)vec.size(); i++)
		vec[i] -= 1;
}

void PmergeMe::ft_sort(char **av){

	if (parcing(av)){
		std::cerr << "Error" << std::endl;
			return  ;
	}
	clock_t b_time, end_time;
	b_time = clock();
	std::vector<int> vec;
	fill_vec(av, vec);
	int left_f = 0, left = 0;
	if (vec.size() % 2 != 0)
		left_f = 1;
	int len = vec.size();
	if (left_f == 1)
	{
		left = *(vec.rbegin());
		len = len - 1;
	}
	std::vector<std::pair<int, int> > pair_v;
	std::pair<int, int> p;
	for(int i = 0 ; i < len; i+= 2){
		if (vec[i] >= vec[i + 1])
		{
			p.first = vec[i];
			p.second = vec[i + 1];
		}
		else
		{
			p.first = vec[i + 1];
			p.second = vec[i];
		}
		pair_v.push_back(p);
	}
	vec_pair(pair_v);
	std::vector<int> main;
	std::vector<int> pend;
	for(int i = 0 ; i < (int)pair_v.size(); i++){
		main.push_back(pair_v[i].first);
		pend.push_back(pair_v[i].second);
	}
	std::vector<int> jacobs;
	jacobs_vec(len, jacobs);
	main.insert(main.begin(),pend[0]);
	int i = 1, j = 1;
	while(i < (int)pend.size() && j < (int)jacobs.size()){
		if (jacobs[j] < (int)pend.size()){
			main.insert(std::lower_bound(main.begin(), main.end(), pend[jacobs[j]]), pend[jacobs[j]]);
			i++;
		}
		j++;
	}
	if (left_f == 1)
		main.insert(std::lower_bound(main.begin(), main.end(), left),left);
	this->vec.clear();
	this->vec = main;
	end_time = clock();
	time =  (double)(end_time - b_time);
	std::cout << "after: ";
	for(size_t i = 0; i < this->vec.size(); i++)
		std::cout << this->vec[i] << " ";
	
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->vec.size()<< " elements with std::vector :  "<< (double)time << " us"<< std::endl;
}


//=========================================================


int PmergeMe::parcing_deq(char **av){
	
	int j = 0;
	for (int i = 1; av[i]; i++){
		j = 0;
		while(av[i][j])
		{
			if (!std::isdigit(av[i][0]) ||  av[i][0] == '+')
				j++; ;
			if (av[i][0] == '-')
				return 1;
			if (!std::isdigit(av[i][j]))
				return 1;
			j++;
		}
	}
	return 0;
}


void PmergeMe::fill_deq(char **av, std::deque<int> &deq){
	for (int i = 1; av[i]; i++)
		deq.push_back(std::atoi(av[i]));

}


void PmergeMe::deq_pair(std::deque<std::pair<int, int> > &pair_v){
	std::pair<int, int> p;
	for (int i = 0; i < (int)pair_v.size(); i++){
		p = pair_v[i];
		int j = i - 1;
		while(j >= 0 && pair_v[j].first > p.first){
			pair_v[j +1] = pair_v[j];
			j--;
		}
		pair_v[j + 1] = p;
	}
}


void PmergeMe::jacobs_deq(int len,std::deque<int> &deq){
	deq.push_back(0);
	deq.push_back(1);
	if (len <= 2) 
	return ;
	for (int i = 2; i <= len; i++){
		deq.push_back(deq[i - 1] + 2 * deq[i - 2]);
	}
	std::deque<int> v;
	v = deq;
	int a,b;
	deq.clear();
	for (int i = 0; i < (int)v.size(); i++){
		a = v[i];
		b = v[i+1];
		while(b > a)
			deq.push_back(b--);
		if ((int)deq.size() >= len) 
			break;
	}
	for (int i = 0; i < (int)deq.size(); i++)
		deq[i] -= 1;
}

void PmergeMe::ft_sort_deq(char **av){
if (parcing_deq(av))
			return  ;
	clock_t b_time, end_time;
	b_time = clock();
	std::deque<int> deq;
	fill_deq(av, deq);
	int left_f = 0, left = 0;
	if (deq.size() % 2 != 0)
		left_f = 1;
	int len = deq.size();
	if (left_f == 1)
	{
		left = *(deq.rbegin());
		len = len - 1;
	}
	std::deque<std::pair<int, int> > pair_v;
	std::pair<int, int> p;
	for(int i = 0 ; i < len; i+= 2){
		if (deq[i] >= deq[i + 1])
		{
			p.first = deq[i];
			p.second = deq[i + 1];
		}
		else
		{
			p.first = deq[i + 1];
			p.second = deq[i];
		}
		pair_v.push_back(p);
	}
	deq_pair(pair_v);
	std::deque<int> main;
	std::deque<int> pend;
	for(int i = 0 ; i < (int)pair_v.size(); i++){
		main.push_back(pair_v[i].first);
		pend.push_back(pair_v[i].second);
	}
	std::deque<int> jacobs;
	jacobs_deq(len, jacobs);
	main.insert(main.begin(),pend[0]);
	int i = 1, j = 1;
	while(i < (int)pend.size() && j < (int)jacobs.size()){
		if (jacobs[j] < (int)pend.size()){
			main.insert(std::lower_bound(main.begin(), main.end(), pend[jacobs[j]]), pend[jacobs[j]]);
			i++;
		}
		j++;
	}
	if (left_f == 1)
		main.insert(std::lower_bound(main.begin(), main.end(), left),left);
	this->deq.clear();
	this->deq = main;
	end_time = clock();
	time =  (double)(end_time - b_time);
	std::cout << "Time to process a range of " << this->deq.size()<< " elements with std::deque :  "<< (double)this->time << " us"<< std::endl;

}
