/*
 * Provider.cpp
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#include "Provider.h"

Provider::Provider(std::string& url) {
	this->uri = new uri::uri(url);
	this->url = url;
	this->mainSiteProvided = this->isMainSite();
}

Provider::~Provider() {
	delete url;
	delete urlString;
	delete mainSiteProvided;
}

void Provider::saveAsCommonFile(std::string& fileName)
{
	this->outFile.open(fileName);
	this->outFile << this->fileStream;
}
