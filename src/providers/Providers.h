/*
 * Providers.h
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#ifndef PROVIDERS_H_
#define PROVIDERS_H_

#include <iostream>
class Providers
{
public:
	Providers(std::string url)
	{
		this->url = url;
		this->coverProvided = this->isCoverPage();
	}
	virtual ~Providers();
	bool getCoverProvided()
	{
		return this->coverProvided;
	}
	std::ostringstream getNextPage() = 0;
	bool nextChapter() = 0;
private:
	std::string url;
	bool coverProvided;
	bool isCoverPage() = 0;
};

