//============================================================================
// Name        : Baamanga.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <getopt.h>

int main(int argc, char* argv[])
{
	option longOptions[] =
	{
		{"url", required_argument, nullptr, 'u'},
		{"config", no_argument, nullptr, 'c'},
		{"help", no_argument, nullptr, 'h'},
		{0, 0, 0, 0}
	};

	std::string url;
	int opt;
	while((opt = getopt_long(argc, argv, "u:ch", longOptions, nullptr)) != -1)
	{
		switch(opt)
		{
			case 'u':
				url = optarg;
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
}
