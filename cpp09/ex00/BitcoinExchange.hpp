/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 08:21:04 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/27 08:31:30 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

class BitcoinExchange {
private:
    std::map<std::string, float> map;

public:
    BitcoinExchange();
    BitcoinExchange(const std::string &dbFile);
    BitcoinExchange(const BitcoinExchange &Be);
    BitcoinExchange& operator=(const BitcoinExchange &Be);
    ~BitcoinExchange();

    void loadDatabase(const std::string &dbFile);
    void processInputFile(const std::string &inputFile);
    int parcing(const std::string &date);
    int nbrparcing(const std::string &nbr);
};