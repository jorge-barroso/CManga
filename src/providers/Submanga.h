/*
 * Submanga.h
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#ifndef SUBMANGA_H_
#define SUBMANGA_H_

#include "Providers.h"

class Submanga: public Providers
{
public:
	std::ostringstream getNextPage();
	bool nextChapter();
private:
	bool isCoverPage();
};

#endif /* SUBMANGA_H_ */
