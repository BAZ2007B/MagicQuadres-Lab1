#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
using namespace std;

/*  Две нижние функции используют данный магический квадрат 3х3
        { 2, 7, 6 },
        { 9, 5, 1 },
        { 4, 3, 8 },
    То же самое, только -1
        { 2, 7, 6 },
        { 9, 5, 1 },
        { 4, 3, 8 },
*/

string Coder3(string code) {
    if (code.size() < 9)
        for (int i = code.size(); i < 9; i++)
            code = code + "*";
    string word = code.substr(1, 1) + code.substr(6, 1) + code.substr(5, 1)
                + code.substr(8, 1) + code.substr(4, 1) + code.substr(0, 1)
                + code.substr(3, 1) + code.substr(2, 1) + code.substr(7, 1);
    return word;
}

string Decoder3(string code) {
    string word = code.substr(5, 1) + code.substr(0, 1) + code.substr(7, 1)
                + code.substr(6, 1) + code.substr(4, 1) + code.substr(2, 1)
                + code.substr(1, 1) + code.substr(8, 1) + code.substr(3, 1);
    for (int i = 0; i < 9; i++)
        if (word.substr(i, 1) == "*") { word.erase(i); break; }
    return word;
}

/*  Две нижние функции используют данный магический квадрат 4х4
        { 7, 12, 1, 14 },
        { 2, 13, 8, 11 },
        { 16, 3, 10, 5 },
        { 9, 6, 15, 4 }
    То же самое, только -1
        { 6, 11, 0, 13 },
        { 1, 12, 7, 10 },
        { 15, 2, 9, 4 },
        { 8, 5, 14, 3 }
*/


string Coder4(string code) {
    if (code.size() < 16)
        for (int i = code.size(); i < 16; i++)
            code = code + "*";
    string word = code.substr(6, 1) + code.substr(11, 1) + code.substr(0, 1) + code.substr(13, 1)
                + code.substr(1, 1) + code.substr(12, 1) + code.substr(7, 1) + code.substr(10, 1)
                + code.substr(15, 1) + code.substr(2, 1) + code.substr(9, 1) + code.substr(4, 1)
                + code.substr(8, 1) + code.substr(5, 1) + code.substr(14, 1) + code.substr(3, 1);
    return word;
}

string Decoder4(string code) {
    string word = code.substr(2, 1) + code.substr(4, 1) + code.substr(9, 1) + code.substr(15, 1)
                + code.substr(11, 1) + code.substr(13, 1) + code.substr(0, 1) + code.substr(6, 1)
                + code.substr(12, 1) + code.substr(10, 1) + code.substr(7, 1) + code.substr(1, 1)
                + code.substr(5, 1) + code.substr(3, 1) + code.substr(14, 1) + code.substr(8, 1);
    for (int i = 0; i < 16; i++)
        if (word.substr(i, 1) == "*") { word.erase(i); break; }
    return word;
}

/*  Две нижние функции используют данный магический квадрат 5х5
        { 11, 24, 7, 20, 3 },
        { 4, 12, 25, 8, 16 },
        { 17, 5, 13, 21, 9 },
        { 10, 18, 1, 14, 22 },
        { 23, 6, 19, 2, 15 }
    То же самое, только -1
        { 10, 23, 6, 19, 2 },
        { 3, 11, 24, 7, 15 },
        { 16, 4, 12, 20, 8 },
        { 9, 17, 0, 13, 21 },
        { 22, 5, 18, 1, 14 }
*/


string Coder5(string code) {
    if (code.size() < 25)
        for (int i = code.size(); i < 25; i++)
            code = code + "*";
    string word = code.substr(10, 1) + code.substr(23, 1) + code.substr(6, 1) + code.substr(19, 1) + code.substr(2, 1)
                + code.substr(3, 1) + code.substr(11, 1) + code.substr(24, 1) + code.substr(7, 1) + code.substr(15, 1)
                + code.substr(16, 1) + code.substr(4, 1) + code.substr(12, 1) + code.substr(20, 1) + code.substr(8, 1)
                + code.substr(9, 1) + code.substr(17, 1) + code.substr(0, 1) + code.substr(13, 1) + code.substr(21, 1)
                + code.substr(22, 1) + code.substr(5, 1) + code.substr(18, 1) + code.substr(1, 1) + code.substr(14, 1);
    return word;
}

string Decoder5(string code) {
    string word = code.substr(17, 1) + code.substr(23, 1) + code.substr(4, 1) + code.substr(5, 1) + code.substr(11, 1)
                + code.substr(21, 1) + code.substr(2, 1) + code.substr(8, 1) + code.substr(14, 1) + code.substr(15, 1)
                + code.substr(0, 1) + code.substr(6, 1) + code.substr(12, 1) + code.substr(18, 1) + code.substr(24, 1)
                + code.substr(9, 1) + code.substr(10, 1) + code.substr(16, 1) + code.substr(22, 1) + code.substr(3, 1)
                + code.substr(13, 1) + code.substr(19, 1) + code.substr(20, 1) + code.substr(1, 1) + code.substr(7, 1);
    for (int i = 0; i < 25; i++)
        if (word.substr(i, 1) == "*") { word.erase(i); break; }
    return word;
}

/*  Две нижние функции используют данный магический квадрат 5х5
        { 6, 32, 3, 34, 35, 1 },
        { 7, 11, 27, 28, 8, 30 },
        { 19, 14, 16, 15, 23, 24 },
        { 18, 20, 22, 21, 17, 13 },
        { 25, 29, 10, 9, 26, 12 },
        { 36, 5, 33, 4, 2, 31 }
    То же самое, только -1
        { 5, 31, 2, 33, 34, 0 },
        { 6, 10, 26, 27, 7, 29 },
        { 18, 13, 15, 14, 22, 23 },
        { 17, 19, 21, 20, 16, 12 },
        { 24, 28, 9, 8, 25, 11 },
        { 35, 4, 32, 3, 1, 30 }
*/

string Coder6(string code) {
    if (code.size() < 36)
        for (int i = code.size(); i < 36; i++)
            code = code + "*";
    string word = code.substr(5, 1) + code.substr(31, 1) + code.substr(2, 1) + code.substr(33, 1) + code.substr(34, 1) + code.substr(0, 1)
                + code.substr(6, 1) + code.substr(10, 1) + code.substr(26, 1) + code.substr(27, 1) + code.substr(7, 1) + code.substr(29, 1)
                + code.substr(18, 1) + code.substr(13, 1) + code.substr(15, 1) + code.substr(14, 1) + code.substr(22, 1) + code.substr(23, 1)
                + code.substr(17, 1) + code.substr(19, 1) + code.substr(21, 1) + code.substr(20, 1) + code.substr(16, 1) + code.substr(12, 1)
                + code.substr(24, 1) + code.substr(28, 1) + code.substr(9, 1) + code.substr(8, 1) + code.substr(25, 1) + code.substr(11, 1)
                + code.substr(35, 1) + code.substr(4, 1) + code.substr(32, 1) + code.substr(3, 1) + code.substr(1, 1) + code.substr(30, 1);
    return word;
}

string Decoder6(string code) {
    string word = code.substr(5, 1) + code.substr(34, 1) + code.substr(2, 1) + code.substr(33, 1) + code.substr(31, 1) + code.substr(0, 1)
                + code.substr(6, 1) + code.substr(10, 1) + code.substr(27, 1) + code.substr(26, 1) + code.substr(7, 1) + code.substr(29, 1)
                + code.substr(23, 1) + code.substr(13, 1) + code.substr(15, 1) + code.substr(14, 1) + code.substr(22, 1) + code.substr(18, 1)
                + code.substr(12, 1) + code.substr(19, 1) + code.substr(21, 1) + code.substr(20, 1) + code.substr(16, 1) + code.substr(17, 1)
                + code.substr(24, 1) + code.substr(28, 1) + code.substr(8, 1) + code.substr(9, 1) + code.substr(25, 1) + code.substr(11, 1)
                + code.substr(35, 1) + code.substr(1, 1) + code.substr(32, 1) + code.substr(3, 1) + code.substr(4, 1) + code.substr(30, 1);
    for (int i = 0; i < 36; i++)
        if (word.substr(i, 1) == "*") { word.erase(i); break; }
    return word;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_CodeButton_clicked()
{
    ui->CodeBrowser->clear();
    QString text = ui->textEdit->toPlainText();
    string word = text.toStdString();
    if (word.empty() == true) {
        ui->CodeBrowser->insertPlainText("Строка пустая!");
    } else if (word.size() > 36) {
        ui->CodeBrowser->insertPlainText("Длина текста превышает 36 символов!");
    } else {
        if (word.size() <= 9) {
                ui->CodeBrowser->insertPlainText("Used 3x3n\n");
                word = Coder3(word);
            }
            if (word.size() > 9 && word.size() <= 16) {
                ui->CodeBrowser->insertPlainText("Used 4x4n\n");
                word = Coder4(word);
            }
            if (word.size() > 16 && word.size() <= 25) {
                ui->CodeBrowser->insertPlainText("Used 5x5n\n");
                word = Coder5(word);
            }
            if (word.size() > 25 && word.size() <= 36) {
                ui->CodeBrowser->insertPlainText("Used 6x6n\n");
                word = Coder6(word);
            }
            QString code = QString::fromStdString(word);
            ui->CodeBrowser->insertPlainText("Зашифрованное слово:" + code);
    }
}

void MainWindow::on_DecodeButton_clicked()
{
    ui->DecodeBrowser->clear();
    QString text = ui->textEdit->toPlainText();
    string word = text.toStdString();
    if (word.empty() == true) {
        ui->DecodeBrowser->insertPlainText("Строка пустая!");
    } else if (word.size() > 36) {
        ui->DecodeBrowser->insertPlainText("Длина текста превышает 36 символов!");
    } else {
        if (word.size() <= 9) {
                ui->DecodeBrowser->insertPlainText("Used 3x3n\n");
                word = Decoder3(word);
            }
            if (word.size() > 9 && word.size() <= 16) {
                ui->DecodeBrowser->insertPlainText("Used 4x4n\n");
                word = Decoder4(word);
            }
            if (word.size() > 16 && word.size() <= 25) {
                ui->DecodeBrowser->insertPlainText("Used 5x5n\n");
                word = Decoder5(word);
            }
            if (word.size() > 25 && word.size() <= 36) {
                ui->DecodeBrowser->insertPlainText("Used 6x6n\n");
                word = Decoder6(word);
            }
            QString code = QString::fromStdString(word);
            ui->DecodeBrowser->insertPlainText("Дешифрованное слово:" + code);
    }
}
