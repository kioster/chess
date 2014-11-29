#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QPoint>
#include <QPushButton>
#include <QtGui>
#include <QMouseEvent>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    before_sheet = Transparent;
    isFinish = true;
    step = 0;
    team = Team[0];
    start = NULL;
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_x1_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,1,team):
                    !plate.exist(1,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y1->styleSheet();
            ui->x1_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 1)==1)
            {
                next_sheet = ui->x1_y1->styleSheet();
                ui->x1_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x2_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,2,team):
                    !plate.exist(1,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y1->styleSheet();
            ui->x2_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 2)==1)
            {
                next_sheet = ui->x2_y1->styleSheet();
                ui->x2_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x3_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,3,team):
                    !plate.exist(1,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y1->styleSheet();
            ui->x3_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 3)==1)
            {
                next_sheet = ui->x3_y1->styleSheet();
                ui->x3_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,4,team):
                    !plate.exist(1,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y1->styleSheet();
            ui->x4_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 4)==1)
            {
                next_sheet = ui->x4_y1->styleSheet();
                ui->x4_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(1,5,team):
                    !plate.exist(1,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y1->styleSheet();
            ui->x5_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 5)==1)
            {

                next_sheet = ui->x5_y1->styleSheet();
                ui->x5_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(1,6,team):
                    !plate.exist(1,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y1->styleSheet();
            ui->x6_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 6)==1)
            {

                next_sheet = ui->x6_y1->styleSheet();
                ui->x6_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,7,team):
                    !plate.exist(1,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y1->styleSheet();
            ui->x7_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 7)==1)
            {
                next_sheet = ui->x7_y1->styleSheet();
                ui->x7_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,8,team):
                    !plate.exist(1,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y1->styleSheet();
            ui->x8_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 8)==1)
            {
                next_sheet = ui->x8_y1->styleSheet();
                ui->x8_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y1_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(1,9,team):
                    !plate.exist(1,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y1->styleSheet();
            ui->x9_y1->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y1 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 1, 9)==1)
            {
                next_sheet = ui->x9_y1->styleSheet();
                ui->x9_y1->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[1][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x1_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,1,team):
                    !plate.exist(2,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y2->styleSheet();
            ui->x1_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 1)==1)
            {
                next_sheet = ui->x1_y2->styleSheet();
                ui->x1_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x2_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,2,team):
                    !plate.exist(2,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y2->styleSheet();
            ui->x2_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 2)==1)
            {
                next_sheet = ui->x2_y2->styleSheet();
                ui->x2_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,3,team):
                    !plate.exist(2,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y2->styleSheet();
            ui->x3_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 3)==1)
            {
                next_sheet = ui->x3_y2->styleSheet();
                ui->x3_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,4,team):
                    !plate.exist(2,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y2->styleSheet();
            ui->x4_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 4)==1)
            {
                next_sheet = ui->x4_y2->styleSheet();
                ui->x4_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(2,5,team):
                    !plate.exist(2,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y2->styleSheet();
            ui->x5_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 5)==1)
            {

                next_sheet = ui->x5_y2->styleSheet();
                ui->x5_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(2,6,team):
                    !plate.exist(2,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y2->styleSheet();
            ui->x6_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 6)==1)
            {

                next_sheet = ui->x6_y2->styleSheet();
                ui->x6_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,7,team):
                    !plate.exist(2,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y2->styleSheet();
            ui->x7_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 7)==1)
            {
                next_sheet = ui->x7_y2->styleSheet();
                ui->x7_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,8,team):
                    !plate.exist(2,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y2->styleSheet();
            ui->x8_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 8)==1)
            {
                next_sheet = ui->x8_y2->styleSheet();
                ui->x8_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y2_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(2,9,team):
                    !plate.exist(2,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y2->styleSheet();
            ui->x9_y2->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y2 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 2, 9)==1)
            {
                next_sheet = ui->x9_y2->styleSheet();
                ui->x9_y2->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[2][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x1_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,1,team):
                    !plate.exist(3,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y3->styleSheet();
            ui->x1_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 1)==1)
            {
                next_sheet = ui->x1_y3->styleSheet();
                ui->x1_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,2,team):
                    !plate.exist(3,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y3->styleSheet();
            ui->x2_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 2)==1)
            {
                next_sheet = ui->x2_y3->styleSheet();
                ui->x2_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,3,team):
                    !plate.exist(3,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y3->styleSheet();
            ui->x3_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 3)==1)
            {
                next_sheet = ui->x3_y3->styleSheet();
                ui->x3_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,4,team):
                    !plate.exist(3,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y3->styleSheet();
            ui->x4_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 4)==1)
            {
                next_sheet = ui->x4_y3->styleSheet();
                ui->x4_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(3,5,team):
                    !plate.exist(3,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y3->styleSheet();
            ui->x5_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 5)==1)
            {

                next_sheet = ui->x5_y3->styleSheet();
                ui->x5_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(3,6,team):
                    !plate.exist(3,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y3->styleSheet();
            ui->x6_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 6)==1)
            {

                next_sheet = ui->x6_y3->styleSheet();
                ui->x6_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,7,team):
                    !plate.exist(3,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y3->styleSheet();
            ui->x7_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 7)==1)
            {
                next_sheet = ui->x7_y3->styleSheet();
                ui->x7_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,8,team):
                    !plate.exist(3,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y3->styleSheet();
            ui->x8_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3,8)==1)
            {
                next_sheet = ui->x8_y3->styleSheet();
                ui->x8_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y3_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(3,9,team):
                    !plate.exist(3,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y3->styleSheet();
            ui->x9_y3->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y3 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 3, 9)==1)
            {
                next_sheet = ui->x9_y3->styleSheet();
                ui->x9_y3->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[3][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,1,team):
                    !plate.exist(4,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y4->styleSheet();
            ui->x1_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 1)==1)
            {
                next_sheet = ui->x1_y4->styleSheet();
                ui->x1_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,2,team):
                    !plate.exist(4,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y4->styleSheet();
            ui->x2_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 2)==1)
            {
                next_sheet = ui->x2_y4->styleSheet();
                ui->x2_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,3,team):
                    !plate.exist(4,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y4->styleSheet();
            ui->x3_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 3)==1)
            {
                next_sheet = ui->x3_y4->styleSheet();
                ui->x3_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,4,team):
                    !plate.exist(4,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y4->styleSheet();
            ui->x4_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 4)==1)
            {
                next_sheet = ui->x4_y4->styleSheet();
                ui->x4_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(4,5,team):
                    !plate.exist(4,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y4->styleSheet();
            ui->x5_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 5)==1)
            {

                next_sheet = ui->x5_y4->styleSheet();
                ui->x5_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(4,6,team):
                    !plate.exist(4,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y4->styleSheet();
            ui->x6_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 6)==1)
            {

                next_sheet = ui->x6_y4->styleSheet();
                ui->x6_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,7,team):
                    !plate.exist(4,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y4->styleSheet();
            ui->x7_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 7)==1)
            {
                next_sheet = ui->x7_y4->styleSheet();
                ui->x7_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,8,team):
                    !plate.exist(4,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y4->styleSheet();
            ui->x8_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 8)==1)
            {
                next_sheet = ui->x8_y4->styleSheet();
                ui->x8_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y4_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(4,9,team):
                    !plate.exist(4,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y4->styleSheet();
            ui->x9_y4->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y4 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 4, 9)==1)
            {
                next_sheet = ui->x9_y4->styleSheet();
                ui->x9_y4->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[4][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,1,team):
                    !plate.exist(5,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y5->styleSheet();
            ui->x1_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 1)==1)
            {
                next_sheet = ui->x1_y5->styleSheet();
                ui->x1_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,2,team):
                    !plate.exist(5,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y5->styleSheet();
            ui->x2_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 2)==1)
            {
                next_sheet = ui->x2_y5->styleSheet();
                ui->x2_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,3,team):
                    !plate.exist(5,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y5->styleSheet();
            ui->x3_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 3)==1)
            {
                next_sheet = ui->x3_y5->styleSheet();
                ui->x3_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,4,team):
                    !plate.exist(5,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y5->styleSheet();
            ui->x4_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 4)==1)
            {
                next_sheet = ui->x4_y5->styleSheet();
                ui->x4_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(5,5,team):
                    !plate.exist(5,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y5->styleSheet();
            ui->x5_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 5)==1)
            {

                next_sheet = ui->x5_y5->styleSheet();
                ui->x5_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(5,6,team):
                    !plate.exist(5,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y5->styleSheet();
            ui->x6_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 6)==1)
            {

                next_sheet = ui->x6_y5->styleSheet();
                ui->x6_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,7,team):
                    !plate.exist(5,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y5->styleSheet();
            ui->x7_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 7)==1)
            {
                next_sheet = ui->x7_y5->styleSheet();
                ui->x7_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,8,team):
                    !plate.exist(5,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y5->styleSheet();
            ui->x8_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 8)==1)
            {
                next_sheet = ui->x8_y5->styleSheet();
                ui->x8_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y5_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(5,9,team):
                    !plate.exist(5,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y5->styleSheet();
            ui->x9_y5->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y5 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 5, 9)==1)
            {
                next_sheet = ui->x9_y5->styleSheet();
                ui->x9_y5->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[5][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,1,team):
                    !plate.exist(6,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y6->styleSheet();
            ui->x1_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 1)==1)
            {
                next_sheet = ui->x1_y6->styleSheet();
                ui->x1_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,2,team):
                    !plate.exist(6,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y6->styleSheet();
            ui->x2_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 2)==1)
            {
                next_sheet = ui->x2_y6->styleSheet();
                ui->x2_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,3,team):
                    !plate.exist(6,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y6->styleSheet();
            ui->x3_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 3)==1)
            {
                next_sheet = ui->x3_y6->styleSheet();
                ui->x3_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,4,team):
                    !plate.exist(6,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y6->styleSheet();
            ui->x4_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 4)==1)
            {
                next_sheet = ui->x4_y6->styleSheet();
                ui->x4_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(6,5,team):
                    !plate.exist(6,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y6->styleSheet();
            ui->x5_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 5)==1)
            {

                next_sheet = ui->x5_y6->styleSheet();
                ui->x5_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(6,6,team):
                    !plate.exist(6,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y6->styleSheet();
            ui->x6_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 6)==1)
            {

                next_sheet = ui->x6_y6->styleSheet();
                ui->x6_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,7,team):
                    !plate.exist(6,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y6->styleSheet();
            ui->x7_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 7)==1)
            {
                next_sheet = ui->x7_y6->styleSheet();
                ui->x7_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,8,team):
                    !plate.exist(6,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y6->styleSheet();
            ui->x8_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 8)==1)
            {
                next_sheet = ui->x8_y6->styleSheet();
                ui->x8_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y6_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(6,9,team):
                    !plate.exist(6,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y6->styleSheet();
            ui->x9_y6->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y6 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 6, 9)==1)
            {
                next_sheet = ui->x9_y6->styleSheet();
                ui->x9_y6->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[6][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,1,team):
                    !plate.exist(7,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y7->styleSheet();
            ui->x1_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 1)==1)
            {
                next_sheet = ui->x1_y7->styleSheet();
                ui->x1_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,2,team):
                    !plate.exist(7,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y7->styleSheet();
            ui->x2_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 2)==1)
            {
                next_sheet = ui->x2_y7->styleSheet();
                ui->x2_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x3_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,3,team):
                    !plate.exist(7,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y7->styleSheet();
            ui->x3_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 3)==1)
            {
                next_sheet = ui->x3_y7->styleSheet();
                ui->x3_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,4,team):
                    !plate.exist(7,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y7->styleSheet();
            ui->x4_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 4)==1)
            {
                next_sheet = ui->x4_y7->styleSheet();
                ui->x4_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(7,5,team):
                    !plate.exist(7,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y7->styleSheet();
            ui->x5_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 5)==1)
            {

                next_sheet = ui->x5_y7->styleSheet();
                ui->x5_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(7,6,team):
                    !plate.exist(7,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y7->styleSheet();
            ui->x6_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 6)==1)
            {

                next_sheet = ui->x6_y7->styleSheet();
                ui->x6_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,7,team):
                    !plate.exist(7,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y7->styleSheet();
            ui->x7_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 7)==1)
            {
                next_sheet = ui->x7_y7->styleSheet();
                ui->x7_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,8,team):
                    !plate.exist(7,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y7->styleSheet();
            ui->x8_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 8)==1)
            {
                next_sheet = ui->x8_y7->styleSheet();
                ui->x8_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y7_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(7,9,team):
                    !plate.exist(7,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y7->styleSheet();
            ui->x9_y7->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y7 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 7, 9)==1)
            {
                next_sheet = ui->x9_y7->styleSheet();
                ui->x9_y7->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[7][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,1,team):
                    !plate.exist(8,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y8->styleSheet();
            ui->x1_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 1)==1)
            {
                next_sheet = ui->x1_y8->styleSheet();
                ui->x1_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,2,team):
                    !plate.exist(8,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y8->styleSheet();
            ui->x2_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 2)==1)
            {
                next_sheet = ui->x2_y8->styleSheet();
                ui->x2_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }

}

void MainWindow::on_x3_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,3,team):
                    !plate.exist(8,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y8->styleSheet();
            ui->x3_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 3)==1)
            {
                next_sheet = ui->x3_y8->styleSheet();
                ui->x3_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,4,team):
                    !plate.exist(8,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y8->styleSheet();
            ui->x4_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 4)==1)
            {
                next_sheet = ui->x4_y8->styleSheet();
                ui->x4_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(8,5,team):
                    !plate.exist(8,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y8->styleSheet();
            ui->x5_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 5)==1)
            {

                next_sheet = ui->x5_y8->styleSheet();
                ui->x5_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(8,6,team):
                    !plate.exist(8,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y8->styleSheet();
            ui->x6_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 6)==1)
            {

                next_sheet = ui->x6_y8->styleSheet();
                ui->x6_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,7,team):
                    !plate.exist(8,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y8->styleSheet();
            ui->x7_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 7)==1)
            {
                next_sheet = ui->x7_y8->styleSheet();
                ui->x7_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,8,team):
                    !plate.exist(8,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y8->styleSheet();
            ui->x8_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 8)==1)
            {
                next_sheet = ui->x8_y8->styleSheet();
                ui->x8_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y8_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(8,9,team):
                    !plate.exist(8,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y8->styleSheet();
            ui->x9_y8->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y8 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 8, 9)==1)
            {
                next_sheet = ui->x9_y8->styleSheet();
                ui->x9_y8->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[8][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,1,team):
                    !plate.exist(9,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_y9->styleSheet();
            ui->x1_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 1)==1)
            {
                next_sheet = ui->x1_y9->styleSheet();
                ui->x1_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x2_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,2,team):
                    !plate.exist(9,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_y9->styleSheet();
            ui->x2_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 2)==1)
            {
                next_sheet = ui->x2_y9->styleSheet();
                ui->x2_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }

}

void MainWindow::on_x3_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,3,team):
                    !plate.exist(9,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_y9->styleSheet();
            ui->x3_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 3)==1)
            {
                next_sheet = ui->x3_y9->styleSheet();
                ui->x3_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,4,team):
                    !plate.exist(9,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_y9->styleSheet();
            ui->x4_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 4)==1)
            {
                next_sheet = ui->x4_y9->styleSheet();
                ui->x4_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(9,5,team):
                    !plate.exist(9,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_y9->styleSheet();
            ui->x5_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 5)==1)
            {

                next_sheet = ui->x5_y9->styleSheet();
                ui->x5_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(9,6,team):
                    !plate.exist(9,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_y9->styleSheet();
            ui->x6_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 6)==1)
            {

                next_sheet = ui->x6_y9->styleSheet();
                ui->x6_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,7,team):
                    !plate.exist(9,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_y9->styleSheet();
            ui->x7_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 7)==1)
            {
                next_sheet = ui->x7_y9->styleSheet();
                ui->x7_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,8,team):
                    !plate.exist(9,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_y9->styleSheet();
            ui->x8_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 8)==1)
            {
                next_sheet = ui->x8_y9->styleSheet();
                ui->x8_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_y9_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(9,9,team):
                    !plate.exist(9,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_y9->styleSheet();
            ui->x9_y9->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_y9 ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 9, 9)==1)
            {
                next_sheet = ui->x9_y9->styleSheet();
                ui->x9_y9->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x1_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,1,team):
                    !plate.exist(10,1,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x1_ya->styleSheet();
            ui->x1_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x1_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 1)==1)
            {
                next_sheet = ui->x1_ya->styleSheet();
                ui->x1_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][1]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}

void MainWindow::on_x2_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,2,team):
                    !plate.exist(10,2,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x2_ya->styleSheet();
            ui->x2_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x2_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 2)==1)
            {
                next_sheet = ui->x2_ya->styleSheet();
                ui->x2_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][2]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x3_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,3,team):
                    !plate.exist(10,3,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x3_ya->styleSheet();
            ui->x3_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x3_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 3)==1)
            {
                next_sheet = ui->x3_ya->styleSheet();
                ui->x3_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][3]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x4_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,4,team):
                    !plate.exist(10,4,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x4_ya->styleSheet();
            ui->x4_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x4_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 4)==1)
            {
                next_sheet = ui->x4_ya->styleSheet();
                ui->x4_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][4]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x5_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(10,5,team):
                    !plate.exist(10,5,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x5_ya->styleSheet();
            ui->x5_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x5_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 5)==1)
            {

                next_sheet = ui->x5_ya->styleSheet();
                ui->x5_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][5]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x6_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish?
                    plate.exist(10,6,team):
                    !plate.exist(10,6,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x6_ya->styleSheet();
            ui->x6_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x6_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 6)==1)
            {

                next_sheet = ui->x6_ya->styleSheet();
                ui->x6_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][6]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
                start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x7_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,7,team):
                    !plate.exist(10,7,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x7_ya->styleSheet();
            ui->x7_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x7_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 7)==1)
            {
                next_sheet = ui->x7_ya->styleSheet();
                ui->x7_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][7]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x8_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,8,team):
                    !plate.exist(10,8,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x8_ya->styleSheet();
            ui->x8_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x8_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 8)==1)
            {
                next_sheet = ui->x8_ya->styleSheet();
                ui->x8_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[10][8]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }

    }
}

void MainWindow::on_x9_ya_clicked(bool checked)
{
    if ( !checked )
    {
        bool isToAction;
        isToAction = isFinish ?
                    plate.exist(10,9,team):
                    !plate.exist(10,9,team);
        int start_y=0;
        int start_x=0;

        if (start != 0)
        {
           start_y = (start->x()-3)/52+1 ;
           start_x = (start->y()-16)/48+1 ;
        }

        if (isToAction && isFinish)
        {
            next_sheet = ui->x9_ya->styleSheet();
            ui->x9_ya->setStyleSheet(before_sheet);
            before_sheet = next_sheet;
            start = ui->x9_ya ;
            isFinish = !isFinish;
        }

        else if (isToAction && !isFinish)
        {

            if (plate.q[start_x][start_y]->move(plate, start_x, start_y, 10, 9)==1)
            {
                next_sheet = ui->x9_ya->styleSheet();
                ui->x9_ya->setStyleSheet(before_sheet);
                before_sheet = Transparent;
                plate.q[9][9]=plate.q[start_x][start_y];
                plate.q[start_x][start_y]=&plate.space;
                step++;
                team = Team[step%2];
                isFinish = !isFinish;
            }

            else
            {
               start->setStyleSheet(before_sheet);
               before_sheet = Transparent;
               isFinish = !isFinish;
            }

        }

        else
        {

            if ( start != 0 && !isFinish )
            {
               start->setStyleSheet(before_sheet);
            }

            before_sheet = Transparent;
            isFinish = true;
        }
    }
}
