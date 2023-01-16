#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>

#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_01->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_02->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_03->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_04->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_05->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_06->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_07->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_08->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_09->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_10->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_11->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_12->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_13->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_14->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_15->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_16->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_17->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_18->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_19->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_20->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_21->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_22->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_23->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_24->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_25->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_26->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_27->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_28->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_29->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_30->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_31->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_32->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_33->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_34->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_35->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_36->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_37->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_38->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_39->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_40->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_41->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_42->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_43->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_44->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_45->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_46->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_47->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_48->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_49->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_50->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_51->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_52->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_53->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_54->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_55->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_56->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_57->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_58->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_59->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_60->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_61->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_62->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_63->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_64->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_65->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_66->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_67->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_68->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_69->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_70->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_71->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_72->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_73->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_74->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_75->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_76->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_77->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_78->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_79->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_80->setValidator(new QIntValidator(0, 9, this));
    ui->lineEdit_81->setValidator(new QIntValidator(0, 9, this));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clearButton_clicked()
{
    ui->lineEdit_01->setText("");
    ui->lineEdit_02->setText("");
    ui->lineEdit_03->setText("");
    ui->lineEdit_04->setText("");
    ui->lineEdit_05->setText("");
    ui->lineEdit_06->setText("");
    ui->lineEdit_07->setText("");
    ui->lineEdit_08->setText("");
    ui->lineEdit_09->setText("");
    ui->lineEdit_10->setText("");
    ui->lineEdit_11->setText("");
    ui->lineEdit_12->setText("");
    ui->lineEdit_13->setText("");
    ui->lineEdit_14->setText("");
    ui->lineEdit_15->setText("");
    ui->lineEdit_16->setText("");
    ui->lineEdit_17->setText("");
    ui->lineEdit_18->setText("");
    ui->lineEdit_19->setText("");
    ui->lineEdit_20->setText("");
    ui->lineEdit_21->setText("");
    ui->lineEdit_22->setText("");
    ui->lineEdit_23->setText("");
    ui->lineEdit_24->setText("");
    ui->lineEdit_25->setText("");
    ui->lineEdit_26->setText("");
    ui->lineEdit_27->setText("");
    ui->lineEdit_28->setText("");
    ui->lineEdit_29->setText("");
    ui->lineEdit_30->setText("");
    ui->lineEdit_31->setText("");
    ui->lineEdit_32->setText("");
    ui->lineEdit_33->setText("");
    ui->lineEdit_34->setText("");
    ui->lineEdit_35->setText("");
    ui->lineEdit_36->setText("");
    ui->lineEdit_37->setText("");
    ui->lineEdit_38->setText("");
    ui->lineEdit_39->setText("");
    ui->lineEdit_40->setText("");
    ui->lineEdit_41->setText("");
    ui->lineEdit_42->setText("");
    ui->lineEdit_43->setText("");
    ui->lineEdit_44->setText("");
    ui->lineEdit_45->setText("");
    ui->lineEdit_46->setText("");
    ui->lineEdit_47->setText("");
    ui->lineEdit_48->setText("");
    ui->lineEdit_49->setText("");
    ui->lineEdit_50->setText("");
    ui->lineEdit_51->setText("");
    ui->lineEdit_52->setText("");
    ui->lineEdit_53->setText("");
    ui->lineEdit_54->setText("");
    ui->lineEdit_55->setText("");
    ui->lineEdit_56->setText("");
    ui->lineEdit_57->setText("");
    ui->lineEdit_58->setText("");
    ui->lineEdit_59->setText("");
    ui->lineEdit_60->setText("");
    ui->lineEdit_61->setText("");
    ui->lineEdit_62->setText("");
    ui->lineEdit_63->setText("");
    ui->lineEdit_64->setText("");
    ui->lineEdit_65->setText("");
    ui->lineEdit_66->setText("");
    ui->lineEdit_67->setText("");
    ui->lineEdit_68->setText("");
    ui->lineEdit_69->setText("");
    ui->lineEdit_70->setText("");
    ui->lineEdit_71->setText("");
    ui->lineEdit_72->setText("");
    ui->lineEdit_73->setText("");
    ui->lineEdit_74->setText("");
    ui->lineEdit_75->setText("");
    ui->lineEdit_76->setText("");
    ui->lineEdit_77->setText("");
    ui->lineEdit_78->setText("");
    ui->lineEdit_79->setText("");
    ui->lineEdit_80->setText("");
    ui->lineEdit_81->setText("");
}


int s[10][10];
bool row[10][10], col[10][10], sq[10][10];

bool dfs(int x, int y) {
    if (s[x][y] != 0) {
        if (x == 9 && y == 9) return true;
        else if (y == 9) { if (dfs(x+1, 1)) { return true; } }
        else { if (dfs(x, y+1)) { return true; } }
    } else {
        for (int i = 1; i <= 9; i++) {
            if (!row[x][i] && !col[y][i] && !sq[(x-1)/3*3 + (y-1)/3 + 1][i]) {
                s[x][y] = i;
                row[x][i] = col[y][i] = sq[(x-1)/3*3 + (y-1)/3 + 1][i] = true;
                if (x == 9 && y == 9) return true;
                else if (y == 9) { if (dfs(x+1, 1)) { return true; } }
                else { if (dfs(x, y+1)) { return true; } }
                s[x][y] = 0;
                row[x][i] = col[y][i] = sq[(x-1)/3*3 + (y-1)/3 + 1][i] = false;
            }
        }
    }
    return false;
}

void MainWindow::on_solveButton_clicked()
{
    for (int h = 0; h < 10; h++)
    {
        for (int w = 0; w < 10; w++)
        {
            s[h][w] = 0;
            row[h][w] = col[h][w] = sq[h][w] = false;
        }
    }

    s[1][1] = (ui->lineEdit_01->text() == "" ? 0 : ui->lineEdit_01->text().toInt());
    s[1][2] = (ui->lineEdit_02->text() == "" ? 0 : ui->lineEdit_02->text().toInt());
    s[1][3] = (ui->lineEdit_03->text() == "" ? 0 : ui->lineEdit_03->text().toInt());
    s[1][4] = (ui->lineEdit_04->text() == "" ? 0 : ui->lineEdit_04->text().toInt());
    s[1][5] = (ui->lineEdit_05->text() == "" ? 0 : ui->lineEdit_05->text().toInt());
    s[1][6] = (ui->lineEdit_06->text() == "" ? 0 : ui->lineEdit_06->text().toInt());
    s[1][7] = (ui->lineEdit_07->text() == "" ? 0 : ui->lineEdit_07->text().toInt());
    s[1][8] = (ui->lineEdit_08->text() == "" ? 0 : ui->lineEdit_08->text().toInt());
    s[1][9] = (ui->lineEdit_09->text() == "" ? 0 : ui->lineEdit_09->text().toInt());
    s[2][1] = (ui->lineEdit_10->text() == "" ? 0 : ui->lineEdit_10->text().toInt());
    s[2][2] = (ui->lineEdit_11->text() == "" ? 0 : ui->lineEdit_11->text().toInt());
    s[2][3] = (ui->lineEdit_12->text() == "" ? 0 : ui->lineEdit_12->text().toInt());
    s[2][4] = (ui->lineEdit_13->text() == "" ? 0 : ui->lineEdit_13->text().toInt());
    s[2][5] = (ui->lineEdit_14->text() == "" ? 0 : ui->lineEdit_14->text().toInt());
    s[2][6] = (ui->lineEdit_15->text() == "" ? 0 : ui->lineEdit_15->text().toInt());
    s[2][7] = (ui->lineEdit_16->text() == "" ? 0 : ui->lineEdit_16->text().toInt());
    s[2][8] = (ui->lineEdit_17->text() == "" ? 0 : ui->lineEdit_17->text().toInt());
    s[2][9] = (ui->lineEdit_18->text() == "" ? 0 : ui->lineEdit_18->text().toInt());
    s[3][1] = (ui->lineEdit_19->text() == "" ? 0 : ui->lineEdit_19->text().toInt());
    s[3][2] = (ui->lineEdit_20->text() == "" ? 0 : ui->lineEdit_20->text().toInt());
    s[3][3] = (ui->lineEdit_21->text() == "" ? 0 : ui->lineEdit_21->text().toInt());
    s[3][4] = (ui->lineEdit_22->text() == "" ? 0 : ui->lineEdit_22->text().toInt());
    s[3][5] = (ui->lineEdit_23->text() == "" ? 0 : ui->lineEdit_23->text().toInt());
    s[3][6] = (ui->lineEdit_24->text() == "" ? 0 : ui->lineEdit_24->text().toInt());
    s[3][7] = (ui->lineEdit_25->text() == "" ? 0 : ui->lineEdit_25->text().toInt());
    s[3][8] = (ui->lineEdit_26->text() == "" ? 0 : ui->lineEdit_26->text().toInt());
    s[3][9] = (ui->lineEdit_27->text() == "" ? 0 : ui->lineEdit_27->text().toInt());
    s[4][1] = (ui->lineEdit_28->text() == "" ? 0 : ui->lineEdit_28->text().toInt());
    s[4][2] = (ui->lineEdit_29->text() == "" ? 0 : ui->lineEdit_29->text().toInt());
    s[4][3] = (ui->lineEdit_30->text() == "" ? 0 : ui->lineEdit_30->text().toInt());
    s[4][4] = (ui->lineEdit_31->text() == "" ? 0 : ui->lineEdit_31->text().toInt());
    s[4][5] = (ui->lineEdit_32->text() == "" ? 0 : ui->lineEdit_32->text().toInt());
    s[4][6] = (ui->lineEdit_33->text() == "" ? 0 : ui->lineEdit_33->text().toInt());
    s[4][7] = (ui->lineEdit_34->text() == "" ? 0 : ui->lineEdit_34->text().toInt());
    s[4][8] = (ui->lineEdit_35->text() == "" ? 0 : ui->lineEdit_35->text().toInt());
    s[4][9] = (ui->lineEdit_36->text() == "" ? 0 : ui->lineEdit_36->text().toInt());
    s[5][1] = (ui->lineEdit_37->text() == "" ? 0 : ui->lineEdit_37->text().toInt());
    s[5][2] = (ui->lineEdit_38->text() == "" ? 0 : ui->lineEdit_38->text().toInt());
    s[5][3] = (ui->lineEdit_39->text() == "" ? 0 : ui->lineEdit_39->text().toInt());
    s[5][4] = (ui->lineEdit_40->text() == "" ? 0 : ui->lineEdit_40->text().toInt());
    s[5][5] = (ui->lineEdit_41->text() == "" ? 0 : ui->lineEdit_41->text().toInt());
    s[5][6] = (ui->lineEdit_42->text() == "" ? 0 : ui->lineEdit_42->text().toInt());
    s[5][7] = (ui->lineEdit_43->text() == "" ? 0 : ui->lineEdit_43->text().toInt());
    s[5][8] = (ui->lineEdit_44->text() == "" ? 0 : ui->lineEdit_44->text().toInt());
    s[5][9] = (ui->lineEdit_45->text() == "" ? 0 : ui->lineEdit_45->text().toInt());
    s[6][1] = (ui->lineEdit_46->text() == "" ? 0 : ui->lineEdit_46->text().toInt());
    s[6][2] = (ui->lineEdit_47->text() == "" ? 0 : ui->lineEdit_47->text().toInt());
    s[6][3] = (ui->lineEdit_48->text() == "" ? 0 : ui->lineEdit_48->text().toInt());
    s[6][4] = (ui->lineEdit_49->text() == "" ? 0 : ui->lineEdit_49->text().toInt());
    s[6][5] = (ui->lineEdit_50->text() == "" ? 0 : ui->lineEdit_50->text().toInt());
    s[6][6] = (ui->lineEdit_51->text() == "" ? 0 : ui->lineEdit_51->text().toInt());
    s[6][7] = (ui->lineEdit_52->text() == "" ? 0 : ui->lineEdit_52->text().toInt());
    s[6][8] = (ui->lineEdit_53->text() == "" ? 0 : ui->lineEdit_53->text().toInt());
    s[6][9] = (ui->lineEdit_54->text() == "" ? 0 : ui->lineEdit_54->text().toInt());
    s[7][1] = (ui->lineEdit_55->text() == "" ? 0 : ui->lineEdit_55->text().toInt());
    s[7][2] = (ui->lineEdit_56->text() == "" ? 0 : ui->lineEdit_56->text().toInt());
    s[7][3] = (ui->lineEdit_57->text() == "" ? 0 : ui->lineEdit_57->text().toInt());
    s[7][4] = (ui->lineEdit_58->text() == "" ? 0 : ui->lineEdit_58->text().toInt());
    s[7][5] = (ui->lineEdit_59->text() == "" ? 0 : ui->lineEdit_59->text().toInt());
    s[7][6] = (ui->lineEdit_60->text() == "" ? 0 : ui->lineEdit_60->text().toInt());
    s[7][7] = (ui->lineEdit_61->text() == "" ? 0 : ui->lineEdit_61->text().toInt());
    s[7][8] = (ui->lineEdit_62->text() == "" ? 0 : ui->lineEdit_62->text().toInt());
    s[7][9] = (ui->lineEdit_63->text() == "" ? 0 : ui->lineEdit_63->text().toInt());
    s[8][1] = (ui->lineEdit_64->text() == "" ? 0 : ui->lineEdit_64->text().toInt());
    s[8][2] = (ui->lineEdit_65->text() == "" ? 0 : ui->lineEdit_65->text().toInt());
    s[8][3] = (ui->lineEdit_66->text() == "" ? 0 : ui->lineEdit_66->text().toInt());
    s[8][4] = (ui->lineEdit_67->text() == "" ? 0 : ui->lineEdit_67->text().toInt());
    s[8][5] = (ui->lineEdit_68->text() == "" ? 0 : ui->lineEdit_68->text().toInt());
    s[8][6] = (ui->lineEdit_69->text() == "" ? 0 : ui->lineEdit_69->text().toInt());
    s[8][7] = (ui->lineEdit_70->text() == "" ? 0 : ui->lineEdit_70->text().toInt());
    s[8][8] = (ui->lineEdit_71->text() == "" ? 0 : ui->lineEdit_71->text().toInt());
    s[8][9] = (ui->lineEdit_72->text() == "" ? 0 : ui->lineEdit_72->text().toInt());
    s[9][1] = (ui->lineEdit_73->text() == "" ? 0 : ui->lineEdit_73->text().toInt());
    s[9][2] = (ui->lineEdit_74->text() == "" ? 0 : ui->lineEdit_74->text().toInt());
    s[9][3] = (ui->lineEdit_75->text() == "" ? 0 : ui->lineEdit_75->text().toInt());
    s[9][4] = (ui->lineEdit_76->text() == "" ? 0 : ui->lineEdit_76->text().toInt());
    s[9][5] = (ui->lineEdit_77->text() == "" ? 0 : ui->lineEdit_77->text().toInt());
    s[9][6] = (ui->lineEdit_78->text() == "" ? 0 : ui->lineEdit_78->text().toInt());
    s[9][7] = (ui->lineEdit_79->text() == "" ? 0 : ui->lineEdit_79->text().toInt());
    s[9][8] = (ui->lineEdit_80->text() == "" ? 0 : ui->lineEdit_80->text().toInt());
    s[9][9] = (ui->lineEdit_81->text() == "" ? 0 : ui->lineEdit_81->text().toInt());

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            int t = s[i][j];
            if (t != 0) {
                row[i][t] = col[j][t] = sq[(i-1)/3*3 + (j-1)/3 + 1][t] = true;
            }
            s[i][j] = t;
        }
    }

    dfs(1, 1);

    ui->lineEdit_01->setText(QString::number(s[1][1]));
    ui->lineEdit_02->setText(QString::number(s[1][2]));
    ui->lineEdit_03->setText(QString::number(s[1][3]));
    ui->lineEdit_04->setText(QString::number(s[1][4]));
    ui->lineEdit_05->setText(QString::number(s[1][5]));
    ui->lineEdit_06->setText(QString::number(s[1][6]));
    ui->lineEdit_07->setText(QString::number(s[1][7]));
    ui->lineEdit_08->setText(QString::number(s[1][8]));
    ui->lineEdit_09->setText(QString::number(s[1][9]));
    ui->lineEdit_10->setText(QString::number(s[2][1]));
    ui->lineEdit_11->setText(QString::number(s[2][2]));
    ui->lineEdit_12->setText(QString::number(s[2][3]));
    ui->lineEdit_13->setText(QString::number(s[2][4]));
    ui->lineEdit_14->setText(QString::number(s[2][5]));
    ui->lineEdit_15->setText(QString::number(s[2][6]));
    ui->lineEdit_16->setText(QString::number(s[2][7]));
    ui->lineEdit_17->setText(QString::number(s[2][8]));
    ui->lineEdit_18->setText(QString::number(s[2][9]));
    ui->lineEdit_19->setText(QString::number(s[3][1]));
    ui->lineEdit_20->setText(QString::number(s[3][2]));
    ui->lineEdit_21->setText(QString::number(s[3][3]));
    ui->lineEdit_22->setText(QString::number(s[3][4]));
    ui->lineEdit_23->setText(QString::number(s[3][5]));
    ui->lineEdit_24->setText(QString::number(s[3][6]));
    ui->lineEdit_25->setText(QString::number(s[3][7]));
    ui->lineEdit_26->setText(QString::number(s[3][8]));
    ui->lineEdit_27->setText(QString::number(s[3][9]));
    ui->lineEdit_28->setText(QString::number(s[4][1]));
    ui->lineEdit_29->setText(QString::number(s[4][2]));
    ui->lineEdit_30->setText(QString::number(s[4][3]));
    ui->lineEdit_31->setText(QString::number(s[4][4]));
    ui->lineEdit_32->setText(QString::number(s[4][5]));
    ui->lineEdit_33->setText(QString::number(s[4][6]));
    ui->lineEdit_34->setText(QString::number(s[4][7]));
    ui->lineEdit_35->setText(QString::number(s[4][8]));
    ui->lineEdit_36->setText(QString::number(s[4][9]));
    ui->lineEdit_37->setText(QString::number(s[5][1]));
    ui->lineEdit_38->setText(QString::number(s[5][2]));
    ui->lineEdit_39->setText(QString::number(s[5][3]));
    ui->lineEdit_40->setText(QString::number(s[5][4]));
    ui->lineEdit_41->setText(QString::number(s[5][5]));
    ui->lineEdit_42->setText(QString::number(s[5][6]));
    ui->lineEdit_43->setText(QString::number(s[5][7]));
    ui->lineEdit_44->setText(QString::number(s[5][8]));
    ui->lineEdit_45->setText(QString::number(s[5][9]));
    ui->lineEdit_46->setText(QString::number(s[6][1]));
    ui->lineEdit_47->setText(QString::number(s[6][2]));
    ui->lineEdit_48->setText(QString::number(s[6][3]));
    ui->lineEdit_49->setText(QString::number(s[6][4]));
    ui->lineEdit_50->setText(QString::number(s[6][5]));
    ui->lineEdit_51->setText(QString::number(s[6][6]));
    ui->lineEdit_52->setText(QString::number(s[6][7]));
    ui->lineEdit_53->setText(QString::number(s[6][8]));
    ui->lineEdit_54->setText(QString::number(s[6][9]));
    ui->lineEdit_55->setText(QString::number(s[7][1]));
    ui->lineEdit_56->setText(QString::number(s[7][2]));
    ui->lineEdit_57->setText(QString::number(s[7][3]));
    ui->lineEdit_58->setText(QString::number(s[7][4]));
    ui->lineEdit_59->setText(QString::number(s[7][5]));
    ui->lineEdit_60->setText(QString::number(s[7][6]));
    ui->lineEdit_61->setText(QString::number(s[7][7]));
    ui->lineEdit_62->setText(QString::number(s[7][8]));
    ui->lineEdit_63->setText(QString::number(s[7][9]));
    ui->lineEdit_64->setText(QString::number(s[8][1]));
    ui->lineEdit_65->setText(QString::number(s[8][2]));
    ui->lineEdit_66->setText(QString::number(s[8][3]));
    ui->lineEdit_67->setText(QString::number(s[8][4]));
    ui->lineEdit_68->setText(QString::number(s[8][5]));
    ui->lineEdit_69->setText(QString::number(s[8][6]));
    ui->lineEdit_70->setText(QString::number(s[8][7]));
    ui->lineEdit_71->setText(QString::number(s[8][8]));
    ui->lineEdit_72->setText(QString::number(s[8][9]));
    ui->lineEdit_73->setText(QString::number(s[9][1]));
    ui->lineEdit_74->setText(QString::number(s[9][2]));
    ui->lineEdit_75->setText(QString::number(s[9][3]));
    ui->lineEdit_76->setText(QString::number(s[9][4]));
    ui->lineEdit_77->setText(QString::number(s[9][5]));
    ui->lineEdit_78->setText(QString::number(s[9][6]));
    ui->lineEdit_79->setText(QString::number(s[9][7]));
    ui->lineEdit_80->setText(QString::number(s[9][8]));
    ui->lineEdit_81->setText(QString::number(s[9][9]));

}

