#include "generatedatabase.h"
#include "ui_generatedatabase.h"

GenerateDatabase::GenerateDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenerateDatabase)
{
    ui->setupUi(this);
}

GenerateDatabase::~GenerateDatabase()
{
    delete ui;
}

void GenerateDatabase::accept(){
    qInfo() << "Wow";
}


void GenerateDatabase::on_buttonBox_rejected()
{
    this->hide();
}


void GenerateDatabase::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Database"), "/home", tr("Excel file extension (*.xlsx *.xlsm *.xlsb *.xls)"));

    qInfo() << fileName;
    ui->lineEdit->setText(fileName);
}

