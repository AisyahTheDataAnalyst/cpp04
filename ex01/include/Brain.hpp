/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:04:55 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 19:29:07 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
		static int ideaCount;
		int currIdeaCount;

	public:
		Brain();
		Brain( const Brain &other );
		Brain &operator=( const Brain &other );
		~Brain();
		// setter & getter
		// void setIdea( const std::string &newIdea ) const;
		// std::string getIdea() const;
};

#endif