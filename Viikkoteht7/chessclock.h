#ifndef CHESSCLOCK_H
#define CHESSCLOCK_H

#include <QMainWindow>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class Chessclock;
}
QT_END_NAMESPACE

class Chessclock : public QMainWindow
{
    Q_OBJECT

public:
    Chessclock(QWidget *parent = nullptr);
    ~Chessclock();
public slots:
    void timeout();
private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonStop_clicked();

    void on_pushButton120sec_clicked();

     void on_pushButton5min_clicked();

    void on_pushButtonplayer1_clicked();

    void on_pushButtonplayer2_clicked();

private:
    Ui::Chessclock *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer* pQTimer;
    void updateProgressBar();
    void setGameIntoText(QString, short );
};
#endif // CHESSCLOCK_H
