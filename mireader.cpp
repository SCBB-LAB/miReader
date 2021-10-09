#include "mireader.h"
#include "ui_mireader.h"
#include <QtGui>

miReader::miReader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::miReader)
{

    ui->setupUi(this);
    setFixedHeight(450);
   setFixedWidth(520);
ui->widget_2->setStyleSheet("image: url(miReader.png); background-repeat: repeat;");

ui->widget_ihbt->setStyleSheet("image: url(Ihbt.gif); background-repeat: repeat;");

       int screenWidth, width;
       int screenHeight, height;
       int x, y;
       QSize windowSize;
        QDesktopWidget *desktop = QApplication::desktop();
       screenWidth = desktop->width(); // get width of screen
       screenHeight = desktop->height(); // get height of screen

       windowSize = size(); // size of our application window
       width = windowSize.width();
       height = windowSize.height();

       // little computations
       x = (screenWidth - width) / 2;
       y = (screenHeight - height) / 2;
       y -= 50;

       // move window to desired coordinates
       move ( x, y );

    connect(ui->pushButton_browse,SIGNAL(clicked()),this,SLOT(getpath()));
   connect(ui->pushButton_submit,SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->pushButton_result,SIGNAL(clicked()),this,SLOT(result()));
    //connect(ui->pushButton_help,SIGNAL(clicked()),this,SLOT(help()));
   // connect(ui->pushButton_show_result,SIGNAL(clicked()),this,SLOT(open()));

}
QString path;
void miReader::getpath()
{
       path = QFileDialog::getOpenFileName(
            this,
            "Choose input file for taref type1",
            QString::null,
            QString::null);
    ui->lineEdit->setText(path);
}

QString res;
void miReader::result()
{
    res = QFileDialog::getExistingDirectory(
                this,           "open directory"),
                ui->lineEdit_2->setText(res);;
}
int no_of_seq_to_be_processed=0;
void miReader::start(){



    QFile file1(path);
    file1.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in1(&file1);
    QString s1,s2,s3="";


    int co=0;
    s1=in1.readLine();
    while((s2=in1.readLine()) !=NULL)
    {
        if(s2.contains(">"))
        {
             co++;
           continue;
       }
    }
no_of_seq_to_be_processed = co;






    QString processor ;
//  ui->textEdit_processor->toPlainText().trimmed().isEmpty();

    if(ui->textEdit_processor->toPlainText().trimmed().isEmpty())
    {
        processor ="1";
qDebug()<<"empty";
    }
else
{
processor = ui->textEdit_processor->toPlainText();
}
qDebug()<<processor;




    QProcess *miReader = new QProcess;

        if(ui->radioButton_ath->isChecked())
            {
            ui->progressBar->setValue(0);
    miReader->start("java -jar miReader_dicot.jar " % path % " " % res % " " % processor);
    miReader->waitForStarted();

qDebug()<< "java -jar miReader_dicot.jar " % path % " " % res % " " % processor;
connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));


    //qDebug()<<"java -jar miReader_dicot.jar " % path % " " % res % " " % processor;

    

    connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
        }

        else if(ui->radioButton_human->isChecked())
            {
 miReader->start("java -jar miReader_human.jar " % path % " " % res % " " % processor);
 miReader->waitForStarted();
    connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));

 connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));

qDebug()<< "java -jar miReader_human.jar " % path % " " % res % " " % processor;
        }

        else if(ui->radioButton_rice->isChecked())
            {
 miReader->start("java -jar miReader_monocot.jar " % path % " " % res % " " % processor);
 miReader->waitForStarted();
    connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));

 connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
qDebug()<< "java -jar miReader_monocot.jar " % path % " " % res % " " % processor;

        }

        else if(ui->radioButton_droso->isChecked())
            {
 miReader->start("java -jar miReader_fly.jar " % path % " " % res % " " % processor);
 miReader->waitForStarted();
    connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));



 connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
qDebug()<< "java -jar miReader_fly.jar " % path % " " % res % " " % processor;
        }

        else if(ui->radioButton_elegans->isChecked())
            {
 miReader->start("java -jar miReader_celegans.jar " % path % " " % res % " " % processor);
 miReader->waitForStarted();

    connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));

 connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
qDebug()<< "java -jar miReader_celegans.jar " % path % " " % res % " " % processor;
        }

        else if (ui->radioButton_zebra_fish->isChecked())
        {
            miReader->start("java -jar miReader_fish.jar " % path % " " % res % " " % processor);
            miReader->waitForStarted();

               connect(miReader,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdout()));

            connect(miReader,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
           qDebug()<< "java -jar miReader_fish.jar " % path % " " % res % " " % processor;
        }

}

void  miReader::processend()
{
    ui->progressBar->setValue(100);;
    //bar->setValue(100);

   // bar->close();

    //    QMessageBox mm;
    //   mm.information(this,"Prediction of miRNA by miR-BAG is over","please check the result in result folder");

       //prog = ui->progressBar->setValue(100);;
}


//double ii=(-1)*(pro);

double i = 0;
void miReader::readFromStdout()
{
    i++;
     double s = no_of_seq_to_be_processed;
    double value = (i/s)*100;
ui->progressBar->setValue(value);

 qDebug()<< value;
    /*
    ii=ii+(ceil(1/pro));
    if(ii<=0)
    {
        double val=0;
        dlg.setValue(val);
    }
    else
    {
    double s1 = no_of_seq_to_be_processed;
  //  qDebug()<<s1;
    double val = ((ii/s1)*100);
   // qDebug()<<val;
    dlg.setValue(val);
    }
  if (dlg.wasCanceled())
  {
      delete ui;
  }
  */

}





void miReader::slInit()
{
    setWindowOpacity(1.0);
}


miReader::~miReader()
{
    delete ui;
}
