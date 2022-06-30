#pragma once
#include "AstronomerRepo.h"
#include "StarRepo.h"

class Service {
private:
	StarRepo starRepo;
	AstronomerRepo astronomerRepo;

public:
	Service(AstronomerRepo astronomerRepo, StarRepo starRepo);
	std::vector<Astronomer> getAstronomers() { return this->astronomerRepo.getAstronomers(); };
	std::vector<Star> getStars() { return this->starRepo.getStars(); };
	std::vector<Star>getsortedStars() { return this->starRepo.getSortedStars(); };
	void addStar(Star s);
	int findStar(std::string name);
	void removeStar(std::string name);
	int getSize() {
		return this->astronomerRepo.getSize();
	}

	void updateStar(Star s);


};