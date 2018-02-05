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
#include <boost/network/uri.hpp>
#include <boost/network/uri/uri_io.hpp>
class Provider
{
private:
	boost::network::uri::uri uri;
	std::string urlString;
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
	boost::network::uri::uri getUri();
};

#endif /* PROVIDERS_H_ */
