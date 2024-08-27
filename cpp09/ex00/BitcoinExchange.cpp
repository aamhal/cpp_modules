/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:35:26 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/27 08:51:57 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstdlib>
#include <fstream>


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
        return;
    }

    std::string line;
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

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        std::string nbr;
        if (getline(ss, date,'|')){    
            if (parcing(date)){
                std::cout << "bad input => " << date << std::endl;
                continue;
            }
        if (getline(ss, nbr,'\0')) {
            if (nbrparcing(nbr) == 2)
            {
                std::cout << "Error: not a positive number." << std::endl;       
                continue;
            }
            if (nbrparcing(nbr))
            {
                
                std::cout << "bad input => " << date << std::endl;       
                continue;
            }
        }
    }
    double tmp = std::strtod(nbr.c_str(), NULL);
    if(tmp > 100000)
    {
        std::cout << "Error: too large a number." << std::endl;        
        continue;
    }
    std::cout << date << " => " << nbr << " = " ;
	std::cout << tmp * (--this->map.upper_bound(date))->second << std::endl;
    }
    file.close();
}

int BitcoinExchange::parcing(const std::string &date){
    if (date.length() != 11)
        return 1;
    if (date[1] == ' ' || date[7] != '-')
        return 1;
    std::string year, month, day;
	std::stringstream ss(date);
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '\0');
    if (year.length() != 4 && month.length() !=2 && day.length() != 3)
        return 1;
    if (std::atoi(year.c_str()) > 2024 || std::atoi(year.c_str()) < 0)
        return 1;
    if (std::atoi(month.c_str()) > 12 || std::atoi(month.c_str()) < 0){
        return 1;
    }
    if (std::atoi(month.c_str()) == 1 || std::atoi(month.c_str()) == 3 || std::atoi(month.c_str()) == 5 || std::atoi(month.c_str()) == 7 || std::atoi(month.c_str()) == 8 ||std::atoi(month.c_str()) == 10 || std::atoi(month.c_str()) == 12)
    {
    if (std::atoi(day.c_str()) > 31 || std::atoi(day.c_str()) < 0)
        return 1;
    }
    else if (std::atoi(month.c_str()) == 2)
    {
    if ((std::atoi(year.c_str()) % 4 == 0 && std::atoi(year.c_str()) % 100 != 0) || (std::atoi(year.c_str()) % 400 == 0)){   
    if (std::atoi(day.c_str()) > 29 || std::atoi(day.c_str()) < 0)
        return 1;
    }
    else {
        if (std::atoi(day.c_str()) > 28 || std::atoi(day.c_str()) < 0)
            return 1;
    }
    }
    else {

    if (std::atoi(day.c_str()) > 30 || std::atoi(day.c_str()) < 0)
        return 1;
       
    }
    return 0;
}


int BitcoinExchange::nbrparcing(const std::string &nbr){
    if (nbr[0] != ' ' || nbr.length() == 1)
            return 1;
    if (nbr[1] == '.')
            return 1;
    int count = 0;
    for (size_t i = 1; i < nbr.length();i++) {
        if (!std::isdigit(nbr[i]) && nbr[i] != '.' && nbr[i] != '-' && nbr[i] != '+')
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