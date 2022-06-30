#include "Service.h"

Service::Service(AstronomerRepo astronomerRepo, StarRepo starRepo): astronomerRepo{astronomerRepo},starRepo{starRepo}
{
}

void Service::addStar(Star s)
{
	this->starRepo.addStar(s);
}

int Service::findStar(std::string name)
{
	return this->starRepo.findStar(name);
	
}

void Service::removeStar(std::string name)
{
	this->starRepo.removeStar(name);
	
	

}

void Service::updateStar(Star s) {
	return this->starRepo.updateStar(s);
	
}
