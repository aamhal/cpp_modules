/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:30:19 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/09 12:17:37 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace_strings(const std::string &buff, const std::string s1, const std::string s2)
{
    std::string s;
    if (s1.empty())
        return buff;
    for (size_t i = 0 ; i < buff.length(); i++)
    {
        if (buff.substr(i, s1.length()) == s1)
        {
            s += s2;
            i += s1.length() - 1; 
        }
        else
            s += buff[i];
    }
    return (s);
}