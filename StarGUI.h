#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StarGUI.h"
#include "Service.h"
#include "AstronomersTableModel.h"
class StarGUI : public QMainWindow
{
    Q_OBJECT

public:
    StarGUI(Service& service,Astronomer& a,AstronomersTableModel* model,QWidget *parent = nullptr);
    ~StarGUI();

private:
    Ui::StarGUIClass ui;
    AstronomersTableModel* model;
    Service& service;
    Astronomer& a;
    void populateList();
    void connectSignalsSlots();
    void addStar();
    void removeStar();
    //void changeSelected();
    //void populateUpdatedList();
   //void changeClosed();
};
