/*
 * URL.h
 *
 *  Created on: 1 Feb 2018
 *      Author: jorba
 */

#ifndef NET_URL_H_
#define NET_URL_H_

#include <iostream>
#include<map>

class URL {
public:
	URL(const std::string&);
	virtual ~URL();
	std::string getProtocol();
	std::string getHost();
	short getPort();
	std::string getPath();
	std::string getQuery();
	std::string getFragment();
	std::map<std::string, std::string> getParameters();
private:
	std::string protocol;
	std::string host;
	short port = nullptr;
	std::string path;
	std::string query;
	std::string fragment;
	void set(std::string&, std::string&);
};

#endif /* NET_URL_H_ */
