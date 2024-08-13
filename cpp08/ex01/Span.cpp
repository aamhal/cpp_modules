/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:08:30 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/06 20:21:47 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : n(5) {};
Span::Span(unsigned int nbr) : n(nbr) {};

Span& Span::operator=(const Span& S) {
    if (this != &S) {
        v = S.v; 
        n = S.n;
    }
    return *this;
}
Span::Span(const Span &S){
    *this = S;
}
Span::~Span() {};

const char* Span::size_excep::what() const throw(){
    return("Span is full !");
};
const char* Span::noSpan_excep::what() const throw(){
    return("no span can be found !");
};


void Span::addNumber(int nbr){
    if (this->n < 2)
        throw size_excep();
    v.push_back(nbr);
};
int  Span::shortestSpan(){
    if (v.size() < 2)
        throw noSpan_excep();
    std::sort(v.begin(), v.end());
    int minSpan = INT_MAX;
    int tmp;
    for (size_t i = 1; i < v.size(); i++){
        tmp = v[i] - v[i - 1];
        if (tmp < minSpan)
            minSpan = tmp;
    }
    return minSpan;
};


int  Span::longestSpan(){
    int minElement = *std::min_element(v.begin(), v.end());
    int maxElement = *std::max_element(v.begin(), v.end());
    return maxElement - minElement;
};