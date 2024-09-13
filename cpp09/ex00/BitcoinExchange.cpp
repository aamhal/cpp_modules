/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:35:26 by aamhal            #+#    #+#             */
/*   Updated: 2024/09/13 19:57:49 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>


BitcoinExchange::BitcoinExchange(const std::string &dbFile) {
    loadDatabase(dbFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &Be)
    : map(Be.map) {
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &Be) {
    if (this != &Be) { 
        this->map = Be.map;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}




void BitcoinExchange::loadDatabase(const std::string &dbFile) {
	 std::ifstream file(dbFile);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    std::string line;
    if (!std::getline(file, line)){
        std::cerr << "Error: data empty." << std::endl;
        file.close();
        exit(1) ;
    }
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        float price;
        if (std::getline(ss, date, ',') && ss >> price) {
            map[date] = price;
        }
    }
    file.close();
}


void BitcoinExchange::processInputFile(const std::string &inputFile){
    std::ifstream file(inputFile);
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
        std::string h_code;
        if (getline(file,h_code))
        {
            if (( h_code != "date | value"))
            {
                std::cerr << "invalid file form." << std::endl;
                file.close();
                return  ;
            }
        }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        std::string nbr;
        
        if (getline(ss, date,'|')){    
            if (parcing(date)){
                std::cerr << "bad input => " << date << std::endl;
                continue;
            }
        if (getline(ss, nbr,'\0')) {
            if (nbrparcing(nbr) == 2)
            {
                std::cerr << "Error: not a positive number." << std::endl;       
                continue;
            }
            if (nbrparcing(nbr))
            {
                
                std::cerr << "bad input => " << date << std::endl;       
                continue;
            }
        }
    }
    double tmp = std::strtod(nbr.c_str(), NULL);
    if(map.begin()->first > date)
    {
        std::cerr << "bad input => " << date << std::endl;       
        continue;
    }
    if(tmp > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;        
        continue;
    }
    std::cout << date << " => " << nbr << " = " ;
	std::cout << tmp * (--this->map.upper_bound(date))->second << std::endl;
    }
    file.close();
}

int BitcoinExchange::parcing(const std::string &ds) {
    std::string date = ds.substr(0,ds.length() -1);
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
        return 1;
    }
    for (size_t i = 0; i < date.length(); ++i) {
        if ((i != 4 && i != 7) && !std::isdigit(date[i])) {
            return 1;
        }
    }

    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    int currentYear = now->tm_year + 1900;
    int currentMonth = now->tm_mon + 1;
    int currentDay = now->tm_mday;


    std::string year, month, day;
    std::stringstream ss(date);

    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day, '\0');

    int y = std::atoi(year.c_str());
    int m = std::atoi(month.c_str());
    int d = std::atoi(day.c_str());

    if (m < 1 || m > 12) {
        return 1;
    }
    if (d < 1 || d > 31) {
        return 1;
    }
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
        return 1;
    }
    if (m == 2) {
        if (d > 29 || (d == 29 && (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0)))) {
            return 1;
        }
    }

    if (y > currentYear ||
        (y == currentYear && m > currentMonth) ||
        (y == currentYear && m == currentMonth && d > currentDay))
        return 1;

    return 0;
}


int BitcoinExchange::nbrparcing(const std::string &nbr){
    if (nbr[0] != ' ' || nbr.length() == 1)
            return 1;
    if (nbr[1] == '.')
            return 1;
    int count = 0;
    if(nbr[1] == '+' && nbr[1] == '-' && nbr.length() == 1)
        return 1;
    // std::cout << '|' << nbr << '|' << std::endl;
    for (size_t i = 2; i < nbr.length();i++) {
        if (!std::isdigit(nbr[i]) && nbr[i] != '.')
        return (1);
        if (nbr[i] == '.')
            count++;
    } 
    if (nbr[1] == '-')
        return 2;
    if (count > 1)
        return 1;
    return 0;
}
    