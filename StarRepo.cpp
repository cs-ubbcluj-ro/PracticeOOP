#include "StarRepo.h"
#include <fstream>
#include<algorithm>

StarRepo::StarRepo(std::string& filename) {
	this->filename = filename;
	this->readFromFile();
}



void StarRepo::readFromFile() {

	std::ifstream file(this->filename);
	if (file.is_open() == false)
		return;
    Star s;
	while (file >> s)
		this->stars.push_back(s);
	file.close();

}


void StarRepo::writeToFile() {
	std::ofstream file(this->filename);
	if (!file.is_open())
		return;

	for (auto& t : this->stars) {
		file << t;
		
	}
	file.close();
}

int StarRepo::findStar(std::string name)
{
	for (auto elem : this->stars)
		if (elem.getName() == name)
			return 1;
	return 0;
}

StarRepo::~StarRepo()
{
	
}

std::vector<Star> StarRepo::getSortedStars() {
	std::vector<Star>elems;
	for (int i = 0; i < this->getStars().size(); i++)
		elems.push_back(this->getStars()[i]);

	sort(elems.begin(),elems.end(), [](Star s1, Star s2) {return s1.getConstellation() < s2.getConstellation(); });
	return elems;

}

void StarRepo::addStar(Star s) {
	/*Task t = Task(description, "open", id);
	for (Task elem : this->tasks)
		if (elem.getDescription() == t.getDescription() && elem.getStatus() == "open" && elem.getId() == id)
			return;
	this->tasks.push_back(t);
	this->writeToFile();
	*/

}

void StarRepo::removeStar(std::string name)
{
	for (int i = 0; i < this->stars.size(); i++)
		if (this->stars[i].getName() == name ){
			this->stars.erase(this->stars.begin() + i);
			this->writeToFile();
			return ;
		}

}

void StarRepo::updateStar(Star s) {

	for(int i=0;i<this->stars.size();i++)
		if (this->stars[i].getName() == s.getName() && this->stars[i].getConstellation() == s.getConstellation() && this->stars[i].getDiameter() == s.getDiameter())
		{
			//this->tasks[i].setTask("in progress");
		}
			
	
	this->writeToFile();
}


