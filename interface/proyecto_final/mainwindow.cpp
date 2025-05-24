#include "mainwindow.h"
#include "ui_mainwindow.h"

double distancia_actual = -1;
double distancia_centro = -1;
double distancia_derecha = -1;
double distancia_izquierda = -1;
QString estado_actual = "inicio";
QString estado_sig;

void MainWindow::maquina_estados() {
    qDebug() << estado_actual;

    if (estado_actual == "inicio") {
        enviarComando(90); // Posición inicial del servo al centro (90°)
        estado_sig = "evaluar";
    }
    else if (estado_actual == "evaluar") {
        distancia_centro = distancia_actual;
        qDebug() << "Distancia centro: " << distancia_centro;
        if (distancia_centro < 15)
            estado_sig = "fin";
        else {
            enviarComando(180); // Mover servo a la derecha (180°)
            estado_sig = "medir_derecha";
        }
    }
    else if (estado_actual == "medir_derecha") {
        distancia_derecha = distancia_actual;
        qDebug() << "Distancia derecha: " << distancia_derecha;
        if (distancia_derecha < 15)
            estado_sig = "fin";
        else {
            enviarComando(8); // Mover servo a la izquierda (0°)
            estado_sig = "medir_izquierda";
        }
    }
    else if (estado_actual == "medir_izquierda") {
        distancia_izquierda = distancia_actual;
        qDebug() << "Distancia izquierda: " << distancia_izquierda;
        if (distancia_izquierda < 15)
            estado_sig = "fin";
        else {
            enviarComando(90); // Volver servo al centro (90°)
            estado_sig = "decidir";
        }
    }
    else if (estado_actual == "decidir") {
        if ((distancia_centro < distancia_derecha) && (distancia_centro < distancia_izquierda)) {
            qDebug() << "Gano centro";
            estado_sig = "avanzar";
        } else if ((distancia_derecha < distancia_centro) && (distancia_derecha < distancia_izquierda)) {
            qDebug() << "Gano derecha";
            enviarComando(3); // Comando para girar a la derecha
            estado_sig = "avanzar";
        } else if ((distancia_izquierda < distancia_centro) && (distancia_izquierda < distancia_derecha)) {
            qDebug() << "Gano izquierda";
            enviarComando(4); // Comando para girar a la izquierda
            estado_sig = "avanzar";
        } else {
            estado_sig = "avanzar";
        }
    }
    else if (estado_actual == "avanzar") {
        enviarComando(2); // Comando para avanzar
        estado_sig = "inicio";
    }
    else if (estado_actual == "fin") {
        qDebug() << "Fin del programa";
    }
    else {
        qDebug() << "Error en los estados";
    }
    estado_actual = estado_sig;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->setupUi(this);
    this->setFocus();  // Establecer el foco en la ventana principal

    startTime = QDateTime::currentSecsSinceEpoch();

    // Configuración para gráfica de temperatura
    chartTemp = new QChart();
    seriesTemp = new QLineSeries();
    chartTemp->addSeries(seriesTemp);
    chartTemp->setTitle("Temperatura");

    axisXTemp = new QValueAxis();
    axisXTemp->setTitleText("Tiempo (s)");
    axisXTemp->setRange(0, 40);
    chartTemp->addAxis(axisXTemp, Qt::AlignBottom);
    seriesTemp->attachAxis(axisXTemp);

    // Inicializar el eje Y para temperatura y configurarlo
    axisYTemp = new QValueAxis();
    axisYTemp->setTitleText("Temperatura (°C)");
    axisYTemp->setRange(0, 50);  // Ajusta según el rango esperado de temperatura
    chartTemp->addAxis(axisYTemp, Qt::AlignLeft);
    seriesTemp->attachAxis(axisYTemp);

    ui->widget->setChart(chartTemp);

    // Configuración para gráfica de voltaje
    chartVolt = new QChart();
    seriesVolt = new QLineSeries();
    chartVolt->addSeries(seriesVolt);
    chartVolt->setTitle("Voltaje");

    axisXVolt = new QValueAxis();
    axisXVolt->setTitleText("Tiempo (s)");
    axisXVolt->setRange(0, 40);
    chartVolt->addAxis(axisXVolt, Qt::AlignBottom);
    seriesVolt->attachAxis(axisXVolt);

    // Inicializar el eje Y para voltaje y configurarlo
    axisYVolt = new QValueAxis();
    axisYVolt->setTitleText("Voltaje (V)");
    axisYVolt->setRange(0, 5);  // Ajusta según el rango esperado de voltaje
    chartVolt->addAxis(axisYVolt, Qt::AlignLeft);
    seriesVolt->attachAxis(axisYVolt);

    ui->widget_2->setChart(chartVolt);

    // Configuración para gráfica de humedad
    chartHum = new QChart();
    seriesHum = new QLineSeries();
    chartHum->addSeries(seriesHum);
    chartHum->setTitle("Humedad");

    axisXHum = new QValueAxis();
    axisXHum->setTitleText("Tiempo (s)");
    axisXHum->setRange(0, 40);
    chartHum->addAxis(axisXHum, Qt::AlignBottom);
    seriesHum->attachAxis(axisXHum);

    // Inicializar el eje Y para humedad y configurarlo
    axisYHum = new QValueAxis();
    axisYHum->setTitleText("Humedad (%)");
    axisYHum->setRange(0, 100);  // Ajusta según el rango esperado de humedad
    chartHum->addAxis(axisYHum, Qt::AlignLeft);
    seriesHum->attachAxis(axisYHum);

    ui->widget_3->setChart(chartHum);

    // Configuración para gráfica de distancia
    chartDis = new QChart();
    seriesdistancia = new QLineSeries();
    chartDis->addSeries(seriesdistancia);
    chartDis->setTitle("distancia");

    axisXDis = new QValueAxis();
    axisXDis->setTitleText("Tiempo (s)");
    axisXDis->setRange(0, 40);
    chartDis->addAxis(axisXDis, Qt::AlignBottom);
    seriesdistancia->attachAxis(axisXDis);

    // Inicializar el eje Y para distancia y configurarlo
    axisYDis = new QValueAxis();
    axisYDis->setTitleText("distancia");
    axisYDis->setRange(0, 100);  // Ajusta según el rango esperado de distancia
    chartDis->addAxis(axisYDis, Qt::AlignLeft);
    seriesdistancia->attachAxis(axisYDis);

    ui->widget_4->setChart(chartDis);

    db.setHostName("localhost");       // Cambia a la IP de tu servidor MySQL si no es local
    db.setDatabaseName("interfaces");   // Reemplaza con el nombre de tu base de datos
    db.setUserName("admin");         // Reemplaza con tu usuario de MySQL
    db.setPassword("changeme");      // Reemplaza con tu contraseña de MySQL
    if (!db.open()) {
        qDebug() << "Error al conectar con la base de datos:" << db.lastError().text();
    } else {
        qDebug() << "Conexión exitosa con la base de datos";
    }

    m_webSocket = new QWebSocket;
    m_connected = false;
    // Conectar WebSocket
    connect(m_webSocket, &QWebSocket::connected, this, &MainWindow::onConnected);
    connect(m_webSocket, &QWebSocket::disconnected, this, &MainWindow::onDisconnected);
    connect(m_webSocket, &QWebSocket::textMessageReceived, this, &MainWindow::onTextMessageReceived);
    connect(m_webSocket, &QWebSocket::errorOccurred, this, &MainWindow::onError);

    activarConexion();

    // Enviar un heartbeat cada 2 segundos
    connect(cronos, SIGNAL(timeout()), this, SLOT(maquina_estados()));
    cronos->start(1000);

    // Enviar un heartbeat cada 2 segundos
    QTimer *cronometro = new QTimer(this);
    connect(cronometro, SIGNAL(timeout()), this, SLOT(sendHeartbeat()));
    connect(cronometro,SIGNAL(timeout()),this,SLOT(loop()));
    cronometro->start(2000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDisconnected() {
    qDebug() << "WebSocket disconnected!";
    ui->textEdit->append("Desconectado del WebSocket");
    m_connected = false;  // Actualizar el estado de la conexión
}

void MainWindow::onError(QAbstractSocket::SocketError errores) {
    QString errorMsg;
    switch (errores) {
    case QAbstractSocket::HostNotFoundError:
        errorMsg = "Host no encontrado.";
        break;
    case QAbstractSocket::ConnectionRefusedError:
        errorMsg = "Conexión rechazada.";
        break;
    case QAbstractSocket::RemoteHostClosedError:
        errorMsg = "El host remoto cerró la conexión.";
        break;
    default:
        errorMsg = "Error desconocido.";
        break;
    }
    qDebug() << "Error de WebSocket: " << errorMsg;
    ui->textEdit->append("Error de WebSocket: " + errorMsg);
}

void MainWindow::connectWebSocket(const QUrl &url) {
    if (!m_connected) {
        m_webSocket->open(url);
        qDebug() << "Conectando a WebSocket en" << url;
        ui->textEdit->append("Conectando a WebSocket en: " + url.toString());
    } else {
        qDebug() << "WebSocket ya está conectado";
        ui->textEdit->append("WebSocket ya está conectado");
    }
}

void MainWindow::activarConexion() {

    if (!esp32IP.isEmpty()) {
        QUrl url(QString("ws://") + esp32IP + "/ws");
        if (!m_connected) {
            connectWebSocket(url);
        }
    } else {
        ui->textEdit->append("Error: Debes ingresar la IP y el mensaje.");
    }
}

void MainWindow::sendHeartbeat() {
    QJsonObject heartbeatMessage;
    heartbeatMessage["type"] = "heartbeat";
    heartbeatMessage["timestamp"] = QDateTime::currentSecsSinceEpoch();  // Unix timestamp

    QJsonDocument doc(heartbeatMessage);
    QString jsonString = doc.toJson(QJsonDocument::Compact);

    if (m_connected) {
        m_webSocket->sendTextMessage(jsonString);
        qDebug() << "Enviando heartbeat: " << jsonString;
    }
}

void MainWindow::onConnected() {
    qDebug() << "WebSocket connected!";
    ui->textEdit->append("Conectado a WebSocket");
    m_connected = true;  // Actualizar el estado de la conexión
}


void MainWindow::onTextMessageReceived(const QString &message) {
    //qDebug() << "Mensaje recibido:" << message;  // Muestra el mensaje JSON completo recibido

    QJsonDocument doc = QJsonDocument::fromJson(message.toUtf8());
    if (!doc.isNull() && doc.isObject()) {
        QJsonObject jsonObj = doc.object();

        // Si el mensaje no contiene un timestamp, lo asigna desde Qt
        qint64 timestamp;
        if (jsonObj.contains("timestamp")) {
            timestamp = jsonObj["timestamp"].toVariant().toLongLong();
            //qDebug() << "Timestamp recibido:" << timestamp;
        } else {
            timestamp = QDateTime::currentSecsSinceEpoch();  // Asigna el timestamp actual
            //qDebug() << "El mensaje JSON no contiene un campo de 'timestamp', se usa timestamp actual:" << timestamp;
        }

        // Procesar temperatura
        if (jsonObj.contains("temperature")) {
            double tempValue = jsonObj["temperature"].toDouble();
            //qDebug() << "Temperatura recibida:" << tempValue;
            updateTemperature(tempValue, timestamp);
            ui->lcdNumber->display(tempValue);
        } else {
            //qDebug() << "No se recibió campo de 'temperature' en el mensaje JSON.";
        }

        // Procesar voltaje
        if (jsonObj.contains("adc_value")) {
            double voltValue = jsonObj["adc_value"].toDouble();
            //qDebug() << "Voltaje recibido:" << voltValue;
            updateVoltage(voltValue, timestamp);
            ui->lcdNumber_2->display(voltValue);
        } else {
            //qDebug() << "No se recibió campo de 'voltage' en el mensaje JSON.";
        }

        // Procesar humedad
        if (jsonObj.contains("humidity")) {
            double humValue = jsonObj["humidity"].toDouble();
            //qDebug() << "Humedad recibida:" << humValue;
            updateHumidity(humValue, timestamp);
            ui->lcdNumber_3->display(humValue);
        } else {
            //qDebug() << "No se recibió campo de 'humidity' en el mensaje JSON.";
        }
        // Procesar distancia
        if (jsonObj.contains("distancia")) {
            distancia_actual = jsonObj["distancia"].toDouble();
            qDebug() << "distancia recibida:" << distancia_actual;
            updateDistancia(distancia_actual, timestamp);
            ui->lcdNumber_4->display(distancia_actual);
        } else {
            qDebug() << "No se recibió campo de 'distancia_actual' en el mensaje JSON.";
        }
    } else {
        qDebug() << "Error: mensaje JSON no válido.";
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()) {
    case Qt::Key_Up:
        enviarComando(1);  // Comando para avanzar
        break;
    case Qt::Key_Down:
        enviarComando(2);  // Comando para retroceder
        break;
    case Qt::Key_Left:
        enviarComando(4);  // Comando para girar a la izquierda
        break;
    case Qt::Key_Right:
        enviarComando(3);  // Comando para girar a la derecha
        break;
    default:
        QMainWindow::keyPressEvent(event);
    }
}

void MainWindow::enviarComando(int comando) {
    // Crear el objeto JSON
    QJsonObject jsonObject;
    jsonObject["type"] = "comando";  // Tipo de mensaje
    jsonObject["comando"] = comando;  // Enviar el comando como entero

    // Convertir el objeto JSON a una cadena
    QJsonDocument jsonDoc(jsonObject);
    QString jsonString = QString::fromUtf8(jsonDoc.toJson(QJsonDocument::Compact));

    // Enviar el mensaje a través del WebSocket
    m_webSocket->sendTextMessage(jsonString);
}

void MainWindow::updateTemperature(double temp, qint64 timestamp) {
    qint64 currentTime = timestamp - startTime;
    dataPointsTemp.append(QPointF(currentTime, temp));
    while (!dataPointsTemp.isEmpty() && currentTime - dataPointsTemp.first().x() > 60) {
        dataPointsTemp.removeFirst();
    }
    seriesTemp->replace(dataPointsTemp);
    axisXTemp->setRange(currentTime - 60, currentTime);
    axisYTemp->setRange(0, 50);
}

void MainWindow::updateVoltage(double voltage, qint64 timestamp) {
    qint64 currentTime = timestamp - startTime;
    dataPointsVolt.append(QPointF(currentTime, voltage));
    while (!dataPointsVolt.isEmpty() && currentTime - dataPointsVolt.first().x() > 60) {
        dataPointsVolt.removeFirst();
    }
    seriesVolt->replace(dataPointsVolt);
    axisXVolt->setRange(currentTime - 60, currentTime);
    axisYVolt->setRange(0, 9);
}

void MainWindow::updateHumidity(double humidity, qint64 timestamp) {
    qint64 currentTime = timestamp - startTime;
    dataPointsHum.append(QPointF(currentTime, humidity));
    while (!dataPointsHum.isEmpty() && currentTime - dataPointsHum.first().x() > 60) {
        dataPointsHum.removeFirst();
    }
    seriesHum->replace(dataPointsHum);
    axisXHum->setRange(currentTime - 60, currentTime);
    axisYHum->setRange(0, 100);
}

void MainWindow::updateDistancia(double temp, qint64 timestamp) {
    qint64 currentTime = timestamp - startTime;
    dataPointsDis.append(QPointF(currentTime, temp));
    while (!dataPointsDis.isEmpty() && currentTime - dataPointsDis.first().x() > 60) {
        dataPointsDis.removeFirst();
    }
    seriesdistancia->replace(dataPointsDis);
    axisXDis->setRange(currentTime - 60, currentTime);
    axisYDis->setRange(0, 100);
}

void MainWindow::loop(){
    // Verificar si los datos fueron recibidos correctamente
    if (temperatura != -1 && voltaje != -1 && humedad != -1 ) {
        // Insertar los datos en la base de datos
        insertarDatos(temperatura, voltaje, humedad);
    } else {
        qDebug() << "No se han recibido todos los datos necesarios.";
    }
}

bool MainWindow::insertarDatos(double temperatura, double voltaje, double humedad) {
    // Obtener el timestamp en formato epoch (segundos desde 1970)
    qint64 timestamp = QDateTime::currentSecsSinceEpoch();

    // Crear la consulta SQL para insertar datos (temperatura, voltaje y humedad)
    QSqlQuery query;
    query.prepare("INSERT INTO robot_data (timestamp, temperatura, voltaje, humedad, distancia) VALUES (:timestamp, :temperatura, :voltaje, :humedad, :distancia)");

    // Asignar los valores a los placeholders
    query.bindValue(":timestamp", timestamp);
    query.bindValue(":temperatura", temperatura);
    query.bindValue(":humedad", humedad);
    query.bindValue(":voltaje", voltaje);
    query.bindValue(":distancia", distancia_actual);

    // Ejecutar la consulta e imprimir el resultado
    if (!query.exec()) {
        qDebug() << "Error al insertar en la tabla robot_data:" << query.lastError().text();
        return false;  // Si hubo un error, regresa false
    }

    qDebug() << "Datos insertados exitosamente en robot_data:"
             << "Timestamp:" << timestamp
             << ", Temperatura:" << temperatura
             << ", Voltaje:" << voltaje
             << ", Humedad:" << humedad
             << ", Distancia: " << distancia_actual;
    return true;  // Regresa true si la inserción fue exitosa
}

void MainWindow::on_pushButton_8_clicked()
{
    cronos->stop();
}


void MainWindow::on_pushButton_9_clicked()
{
    cronos->start(1000);
}


void MainWindow::on_pushButton_4_clicked()
{
    enviarComando(1);
}


void MainWindow::on_pushButton_5_clicked()
{
    enviarComando(2);
}


void MainWindow::on_pushButton_6_clicked()
{
    enviarComando(3);
}


void MainWindow::on_pushButton_7_clicked()
{
    enviarComando(4);
}

