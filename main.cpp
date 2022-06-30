#include "StarGUI.h"
#include <QtWidgets/QApplication>
#include "AstronomerRepo.h"
#include "StarRepo.h"
#include "Service.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    std::string filename = "Astronomers.txt";
    AstronomerRepo arepo(filename);
    filename = "Stars.txt";
    StarRepo srepo(filename);
    Service service(arepo, srepo);
    AstronomersTableModel* model = new AstronomersTableModel{ service };
    std::vector<Astronomer> elems = service.getAstronomers();

    for (auto elem : elems)
    {
        auto window = new StarGUI{service,elem,model };
        window->show();
    }

    
    return a.exec();
}
