#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <string>
#include <QPushButton>
#include "qi.h"

const QString Transparent = "background-color:transparent";
const QString Team[2] = { "R" , "B" } ;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_x1_y1_clicked(bool checked);

    void on_x1_y2_clicked(bool checked);

    void on_x2_y1_clicked(bool checked);

    void on_x3_y1_clicked(bool checked);

    void on_x4_y1_clicked(bool checked);

    void on_x5_y1_clicked(bool checked);

    void on_x6_y1_clicked(bool checked);

    void on_x7_y1_clicked(bool checked);

    void on_x8_y1_clicked(bool checked);

    void on_x9_y1_clicked(bool checked);

    void on_x2_y2_clicked(bool checked);

    void on_x3_y2_clicked(bool checked);

    void on_x4_y2_clicked(bool checked);

    void on_x5_y2_clicked(bool checked);

    void on_x6_y2_clicked(bool checked);

    void on_x7_y2_clicked(bool checked);

    void on_x8_y2_clicked(bool checked);

    void on_x1_y3_clicked(bool checked);

    void on_x2_y3_clicked(bool checked);

    void on_x3_y3_clicked(bool checked);

    void on_x4_y3_clicked(bool checked);

    void on_x5_y3_clicked(bool checked);

    void on_x6_y3_clicked(bool checked);

    void on_x7_y3_clicked(bool checked);

    void on_x8_y3_clicked(bool checked);

    void on_x9_y3_clicked(bool checked);

    void on_x1_y4_clicked(bool checked);

    void on_x2_y4_clicked(bool checked);

    void on_x3_y4_clicked(bool checked);

    void on_x4_y4_clicked(bool checked);

    void on_x5_y4_clicked(bool checked);

    void on_x6_y4_clicked(bool checked);

    void on_x7_y4_clicked(bool checked);

    void on_x8_y4_clicked(bool checked);

    void on_x9_y4_clicked(bool checked);

    void on_x9_y2_clicked(bool checked);

    void on_x1_y5_clicked(bool checked);

    void on_x2_y5_clicked(bool checked);

    void on_x3_y5_clicked(bool checked);

    void on_x4_y5_clicked(bool checked);

    void on_x5_y5_clicked(bool checked);

    void on_x6_y5_clicked(bool checked);

    void on_x7_y5_clicked(bool checked);

    void on_x8_y5_clicked(bool checked);

    void on_x9_y5_clicked(bool checked);

    void on_x1_y6_clicked(bool checked);

    void on_x2_y6_clicked(bool checked);

    void on_x3_y6_clicked(bool checked);

    void on_x4_y6_clicked(bool checked);

    void on_x5_y6_clicked(bool checked);

    void on_x6_y6_clicked(bool checked);

    void on_x7_y6_clicked(bool checked);

    void on_x8_y6_clicked(bool checked);

    void on_x9_y6_clicked(bool checked);

    void on_x1_y7_clicked(bool checked);

    void on_x2_y7_clicked(bool checked);

    void on_x3_y7_clicked(bool checked);

    void on_x4_y7_clicked(bool checked);

    void on_x5_y7_clicked(bool checked);

    void on_x6_y7_clicked(bool checked);

    void on_x7_y7_clicked(bool checked);

    void on_x8_y7_clicked(bool checked);

    void on_x9_y7_clicked(bool checked);

    void on_x1_y8_clicked(bool checked);

    void on_x2_y8_clicked(bool checked);

    void on_x3_y8_clicked(bool checked);

    void on_x4_y8_clicked(bool checked);

    void on_x5_y8_clicked(bool checked);

    void on_x6_y8_clicked(bool checked);

    void on_x7_y8_clicked(bool checked);

    void on_x8_y8_clicked(bool checked);

    void on_x9_y8_clicked(bool checked);

    void on_x1_y9_clicked(bool checked);

    void on_x2_y9_clicked(bool checked);

    void on_x3_y9_clicked(bool checked);

    void on_x4_y9_clicked(bool checked);

    void on_x5_y9_clicked(bool checked);

    void on_x6_y9_clicked(bool checked);

    void on_x7_y9_clicked(bool checked);

    void on_x8_y9_clicked(bool checked);

    void on_x9_y9_clicked(bool checked);

    void on_x1_ya_clicked(bool checked);

    void on_x2_ya_clicked(bool checked);

    void on_x3_ya_clicked(bool checked);

    void on_x4_ya_clicked(bool checked);

    void on_x5_ya_clicked(bool checked);

    void on_x6_ya_clicked(bool checked);

    void on_x7_ya_clicked(bool checked);

    void on_x8_ya_clicked(bool checked);

    void on_x9_ya_clicked(bool checked);


private:
    Ui::MainWindow *ui;
    QString next_sheet;
    QString before_sheet;
    QPushButton *start;\
    Qipan plate;
    QString team;
    bool isFinish;
    int step;

};

#endif // MAINWINDOW_H
