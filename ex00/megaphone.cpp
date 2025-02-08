/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:19:31 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 17:19:36 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv) {
  int i;
  int j;

  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else {
    i = 1;
    while (argv[i]) {
      j = 0;
      while (argv[i][j]) {
        std::cout << (char)std::toupper(argv[i][j]);
        j++;
      }
      if (i < argc - 1)
        std::cout << " ";
      i++;
    }
    std::cout << std::endl;
  }
  return 0;
}
