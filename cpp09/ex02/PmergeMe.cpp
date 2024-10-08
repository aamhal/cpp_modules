/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:46:41 by aamhal            #+#    #+#             */
/*   Updated: 2024/09/12 06:55:17 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cctype>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <sstream>
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


void PmergeMe::moreparc(std::string av)
{
	for (size_t i = 0; i < av.length(); i++){
		if(!std::isdigit(av[i]) && av[i] != ' '){
			std::cerr << "Error"<< std::endl;
			exit(1);
		}
	}
		std::istringstream ss(av);
		std::string tmp;
		while(ss >> tmp){
			if (std::strtod(tmp.c_str(), NULL) != std::atoi(tmp.c_str()))	{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
			this->vec.push_back(std::atoi(tmp.c_str()));
			this->deq.push_back(std::atoi(tmp.c_str()));
		}
}

void PmergeMe::parcing(char **av){
	int count = 0;
	while(av[count])
		count++;
	if (count < 3 ){
		std::cerr << "Error"<< std::endl;
			exit(1);
	}
	for (int i = 1; av[i]; i++)
	{
		if (av[i] &&std::strtod(av[i], NULL) != std::atoi(av[i]))	{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
			
	}
	for (size_t i = 1; av[i] ; i++)
	{
		int f = 0;
		for (size_t j = 0; av[i][j] ; j++)
		{
			if (av[i][j] == ' ')
			{
				f = 1;
				moreparc(av[i]);
				break ;
			}
			else if (!std::isdigit(av[i][j])){
				std::cerr << "Error"<< std::endl;
					exit(1);
			}
		}
		if (f == 0){
			this->vec.push_back(std::atoi(av[i]));
			this->deq.push_back(std::atoi(av[i]));
		}
	}
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

	parcing(av);
	std::cout << "before : ";
	for(size_t i = 0 ; i < this->vec.size() ;i++)
		std::cout << vec[i] << " ";
	std::cout <<std::endl;
	clock_t b_time, end_time;
	b_time = clock();
	std::vector<int> vec;
	vec = this->vec;
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
	for (size_t k = 0; k < jacobs.size(); k++)
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
	std::cout << "Time to process a range of " << this->vec.size()<< " elements with std::vector :  "<< time << " us"<< std::endl;
}


//=========================================================



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

	(void)av;
	
	std::clock_t b_time, end_time;
	b_time = clock();
	std::deque<int> deq;
	deq = this->deq;
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
	std::cout << "Time to process a range of " << this->deq.size() << " elements with std::deque :  "<< this->time << " us"<< std::endl;

}