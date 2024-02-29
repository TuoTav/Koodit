#include "chessclock.h"
#include "ui_chessclock.h"

Chessclock::Chessclock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chessclock)
{
    ui->setupUi(this);
    ui->progressBar->setOrientation(Qt::Horizontal);
    ui->progressBar_2->setOrientation(Qt::Horizontal);
    ui->progressBar_2->setValue(0);
    ui->progressBar->setValue(0);
    setGameIntoText("Select playtime and press start the game",10);


}

Chessclock::~Chessclock()
{
    delete ui;
}
void Chessclock:: updateProgressBar()
{


    if(currentPlayer==1)
    {
    player1Time--;
    ui->progressBar->setValue(player1Time);
    if(player1Time==0)
    {
        setGameIntoText("Player 2 won",10);
        delete pQTimer;
        currentPlayer=0;

    }
    }
    if(currentPlayer==2)
    {
        player2Time--;
        ui->progressBar_2->setValue(player2Time);
        if(player2Time==0)
        {
            setGameIntoText("Player 1 won",10);
            delete pQTimer;
            currentPlayer=0;
        }
    }

}
void Chessclock::on_pushButtonStart_clicked()
{
    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()),this,SLOT(timeout()));
    pQTimer ->start(1000);
    currentPlayer=1;


    setGameIntoText("Game ongoing",10);
    if(currentPlayer==0)
    {
        delete pQTimer;
    }


}


void Chessclock::on_pushButtonStop_clicked()
{
    currentPlayer=0;
    delete pQTimer;
    setGameIntoText("New game via start button",10);


}


void Chessclock::on_pushButton120sec_clicked()
{

    gameTime=120;
    player1Time=gameTime;
    player2Time=gameTime;
    ui->progressBar->setMaximum(gameTime);
    ui->progressBar->setMinimum(0);
    ui->progressBar_2->setMaximum(gameTime);
    ui->progressBar_2->setMinimum(0);
    ui->progressBar_2->setValue(120);
    ui->progressBar->setValue(120);
    setGameIntoText("Ready to play", 10);


}






void Chessclock::timeout()
{
    updateProgressBar();
}



void Chessclock::on_pushButton5min_clicked()
{

    gameTime=300;
    player1Time=gameTime;
    player2Time=gameTime;
    ui->progressBar->setMaximum(gameTime);
    ui->progressBar->setMinimum(0);
    ui->progressBar_2->setMaximum(gameTime);
    ui->progressBar_2->setMinimum(0);
    ui->progressBar_2->setValue(300);
    ui->progressBar->setValue(300);
    setGameIntoText("Ready to play", 10);
}


void Chessclock::on_pushButtonplayer1_clicked()
{
    if(currentPlayer!=0)
    {
    currentPlayer=2;
    }

}


void Chessclock::on_pushButtonplayer2_clicked()
{
    if(currentPlayer!=0)
    {
    currentPlayer=1;
    }
}
void Chessclock::setGameIntoText(QString b,short a)
{
    QFont font=ui->label->font();
    font.setPointSize(a);
    ui->label->setFont(font);
    ui->label->setText(b);

}
