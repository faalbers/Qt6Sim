#ifndef __MAINWINDOW__
#define __MAINWINDOW__

#include <QMainWindow>
#include "SpringSim.hpp"
#include "Widget.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = NULL);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SpringSim   *simFunc;
    SpringSim   *simEuler;
    SpringSim   *simEulerCromer;
    Widget      *openGL;
};

#endif
