/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "onConnected",
    "",
    "onTextMessageReceived",
    "message",
    "onDisconnected",
    "onError",
    "QAbstractSocket::SocketError",
    "error",
    "activarConexion",
    "sendHeartbeat",
    "connectWebSocket",
    "url",
    "enviarComando",
    "comando",
    "keyPressEvent",
    "QKeyEvent*",
    "event",
    "maquina_estados",
    "updateDistancia",
    "temp",
    "timestamp",
    "updateHumidity",
    "humidity",
    "updateVoltage",
    "voltage",
    "updateTemperature",
    "loop",
    "insertarDatos",
    "temperatura",
    "voltaje",
    "humedad",
    "on_pushButton_8_clicked",
    "on_pushButton_9_clicked",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_6_clicked",
    "on_pushButton_7_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    1,  147,    2, 0x08,    2 /* Private */,
       5,    0,  150,    2, 0x08,    4 /* Private */,
       6,    1,  151,    2, 0x08,    5 /* Private */,
       9,    0,  154,    2, 0x08,    7 /* Private */,
      10,    0,  155,    2, 0x08,    8 /* Private */,
      11,    1,  156,    2, 0x08,    9 /* Private */,
      13,    1,  159,    2, 0x08,   11 /* Private */,
      15,    1,  162,    2, 0x08,   13 /* Private */,
      18,    0,  165,    2, 0x08,   15 /* Private */,
      19,    2,  166,    2, 0x08,   16 /* Private */,
      22,    2,  171,    2, 0x08,   19 /* Private */,
      24,    2,  176,    2, 0x08,   22 /* Private */,
      26,    2,  181,    2, 0x08,   25 /* Private */,
      27,    0,  186,    2, 0x08,   28 /* Private */,
      28,    3,  187,    2, 0x08,   29 /* Private */,
      32,    0,  194,    2, 0x08,   33 /* Private */,
      33,    0,  195,    2, 0x08,   34 /* Private */,
      34,    0,  196,    2, 0x08,   35 /* Private */,
      35,    0,  197,    2, 0x08,   36 /* Private */,
      36,    0,  198,    2, 0x08,   37 /* Private */,
      37,    0,  199,    2, 0x08,   38 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::LongLong,   20,   21,
    QMetaType::Void, QMetaType::Double, QMetaType::LongLong,   23,   21,
    QMetaType::Void, QMetaType::Double, QMetaType::LongLong,   25,   21,
    QMetaType::Void, QMetaType::Double, QMetaType::LongLong,   20,   21,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTextMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'activarConexion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectWebSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'enviarComando'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'maquina_estados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDistancia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'updateHumidity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'updateVoltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'updateTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'loop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertarDatos'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pushButton_8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onConnected(); break;
        case 1: _t->onTextMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onDisconnected(); break;
        case 3: _t->onError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->activarConexion(); break;
        case 5: _t->sendHeartbeat(); break;
        case 6: _t->connectWebSocket((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 7: _t->enviarComando((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 9: _t->maquina_estados(); break;
        case 10: _t->updateDistancia((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 11: _t->updateHumidity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 12: _t->updateVoltage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 13: _t->updateTemperature((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 14: _t->loop(); break;
        case 15: { bool _r = _t->insertarDatos((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->on_pushButton_8_clicked(); break;
        case 17: _t->on_pushButton_9_clicked(); break;
        case 18: _t->on_pushButton_4_clicked(); break;
        case 19: _t->on_pushButton_5_clicked(); break;
        case 20: _t->on_pushButton_6_clicked(); break;
        case 21: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
