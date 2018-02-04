/*
 * Providers.h
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#ifndef PROVIDERS_H_
#define PROVIDERS_H_

#include <iostream>
#include <fstream>
class Provider
{
private:
	std::string url;
	std::ostringstream fileStream;
	std::ofstream outFile;
	bool mainSiteProvided;

	virtual bool isMainSite() = 0;
public:
	Provider(std::string&);

	virtual ~Provider();
	virtual bool getNextPage() = 0;
	virtual bool nextChapter() = 0;
	virtual unsigned short int getChapter() = 0;

	bool getIsMainSite();
	void saveAsCommonFile(std::string&);
};

