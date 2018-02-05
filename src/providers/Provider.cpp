/*
 * Provider.cpp
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#include "../include/Provider.h"

Provider::Provider(std::string& url) : uri(url)
{
	this->urlString = url;
	this->mainSiteProvided = this->isMainSite();
}

Provider::~Provider() {
	delete uri;
	delete urlString;
	delete mainSiteProvided;
}

void Provider::saveAsCommonFile(std::string& fileName)
{
	this->outFile.open(fileName);
	this->outFile << this->fileStream;
}

boost::network::uri::uri Provider::getUri()
{
	return this->uri;
}
