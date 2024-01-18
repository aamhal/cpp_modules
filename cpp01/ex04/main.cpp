/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:18:28 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/08 11:35:55 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


int main (int ac, char **av)
{
    if (ac == 4)
    {
        std::string fname = av[1];
        std::ifstream f(fname);
        if (!f.is_open()) {
            std::cout << "file error" << fname << std::endl;
            return 1;
        }
        std::stringstream buffer;
        buffer << f.rdbuf();
        f.close();
        std::string s = buffer.str();
        s = replace_strings(s, av[2], av[3]);
        std::string newF = fname + ".replace";
        std::ofstream outfile(newF);
        if (outfile.is_open()) {
            outfile << s;
            outfile.close();
        }
        else
        {
            std::cout << "file error" << newF << std::endl;
            return (1);
        }
        return 0;
    }
    else 
        std::cout << "This programe take only three arguments (Filename , s1, s2) ";
}