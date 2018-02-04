/*
 * Submanga.h
 *
 *  Created on: 2 Feb 2018
 *      Author: Jorge Barroso
 */

#ifndef SUBMANGA_H_
#define SUBMANGA_H_

#include "Provider.h"

class Submanga: public Provider
{
public:
	bool getNextPage();
	bool nextChapter();
	int getChapter();
private:
	bool isMainSite();
};

#endif /* SUBMANGA_H_ */
