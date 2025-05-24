#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebSocket>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTimer>
#include <QDateTime>
#include <QChartView>
#include <QLineSeries>
#include <QList>
#include <QChart>
#include <QValueAxis>
#include <QLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onConnected();
    void onTextMessageReceived(const QString &message);
    void onDisconnected();
    void onError(QAbstractSocket::SocketError error);
    void activarConexion(); // Función para el botón de enviar
    void sendHeartbeat();
    void connectWebSocket(const QUrl &url);
    void enviarComando(int comando);
    void keyPressEvent(QKeyEvent *event);

    void maquina_estados();
    void updateDistancia(double temp, qint64 timestamp);
    void updateHumidity(double humidity, qint64 timestamp);
    void updateVoltage(double voltage, qint64 timestamp);
    void updateTemperature(double temp, qint64 timestamp);
    void loop();
    bool insertarDatos(double temperatura, double voltaje, double humedad);
    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;

    QWebSocket *m_webSocket;
    bool m_connected;
    QString esp32IP = "192.168.0.160";

    QChart *chartTemp, *chartVolt, *chartHum, *chartDis;
    QChartView *chartViewTemp, *chartViewVolt, *chartViewHum;
    QLineSeries *seriesTemp, *seriesVolt, *seriesHum, *seriesdistancia;
    QValueAxis *axisXTemp, *axisXVolt, *axisXHum, *axisXDis;
    QValueAxis *axisYTemp, *axisYVolt, *axisYHum, *axisYDis;

    QList<QPointF> dataPointsTemp, dataPointsVolt, dataPointsHum, dataPointsDis;
    qint64 startTime;
    double temperatura;
    double voltaje;
    double humedad;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QTimer *cronos = new QTimer(this);
};
#endif // MAINWINDOW_H
