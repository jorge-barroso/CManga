//============================================================================
// Name        : CManga.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Manga download software in C++, Ansi-style
//============================================================================

#include <getopt.h>
#include <iostream>
#include <vector>

#include "../include/Submanga.h"

int main(int argc, char* argv[])
{
	option longOptions[] =
	{
		{"url", required_argument, nullptr, 'u'},
		{"config", no_argument, nullptr, 'c'},
		{"help", no_argument, nullptr, 'h'},
		{"first", required_argument, nullptr, "f"},
		{"last", required_argument, nullptr, "l"},
		{0, 0, 0, 0}
	};

	std::string url;
	unsigned int firstChapter;
	unsigned int lastChapter;
	int opt;
	while((opt = getopt_long(argc, argv, "u:f:l:ch", longOptions, nullptr)) != -1)
	{
		switch(opt)
		{
			case 'u':
				url = optarg;
				break;
			case 'f':
				firstChapter = atoi(optarg);
				break;
			case 'l':
				lastChapter = atoi(optarg);
				break;
			case 'c':
				return 0;
			case 'h':
				return 0;
		}
	}

	delete longOptions;

	if(url.empty())
	{
		std::cout << "Please specify the download url: ";
		do{
			//TODO check exceptions
			if(!std::getline(std::cin, url))
				return -1;

		}while(url.empty());
	}

	std::cout << url << std::endl;
	Provider *p;
	if(url.find("submanga", 0))
		p = new Submanga(url);
	else if(url.find("mangafox", 0))
		return 0;

	/*unsigned short chapters = lastChapter-firstChapter;
	do {

		if(p->getIsMainSite() && !(unsigned)(p->getChapter()-firstChapter)<=chapters)
			break;

		for(unsigned short page=1; p->getNextPage(); page++)
		{
			//p->saveAsCommonFile(std::to_string(page)+".jpg");
		}
	} while(p->nextChapter());*/
	std::cout << p->getUri().host() << std::endl;
}
