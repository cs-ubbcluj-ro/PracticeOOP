#include "StarGUI.h"

StarGUI::StarGUI(Service& _s,Astronomer& _a,AstronomersTableModel* model,QWidget *parent)
	: service{ _s }, a{ _a }, model{ model },QMainWindow(parent)
{
    ui.setupUi(this);
	ui.tableView->setModel(this->model);
    this->setWindowTitle((a.getName()).c_str());
	this->populateList();
	this->connectSignalsSlots();
	
}

StarGUI::~StarGUI()
{}

void StarGUI::populateList()
{
	this->ui.listWidget->clear();

	for (auto elem : this->service.getsortedStars()) {
		std::string str = elem.getName() + ", " + elem.getConstellation()+","+std::to_string(elem.getRa())+","+std::to_string(elem.getDec())+","+std::to_string(elem.getDec());
		this->ui.listWidget->addItem(QString::fromStdString(str));
	}
}

void StarGUI::connectSignalsSlots()
{

}

void StarGUI::addStar()
{
}

void StarGUI::removeStar()
{
}



