/****************************************************************************
** Meta object code from reading C++ file 'auditserveurmultiwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AuditServeurMulti/auditserveurmultiwidget.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auditserveurmultiwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuditServeurMultiWidget_t {
    const uint offsetsAndSize[40];
    char stringdata0[452];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AuditServeurMultiWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AuditServeurMultiWidget_t qt_meta_stringdata_AuditServeurMultiWidget = {
    {
QT_MOC_LITERAL(0, 23), // "AuditServeurMultiWidget"
QT_MOC_LITERAL(24, 31), // "on_pushButton_lancement_clicked"
QT_MOC_LITERAL(56, 0), // ""
QT_MOC_LITERAL(57, 23), // "onQTcpServeracceptError"
QT_MOC_LITERAL(81, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(110, 11), // "socketError"
QT_MOC_LITERAL(122, 25), // "onQTcpServernewConnection"
QT_MOC_LITERAL(148, 21), // "onQTcpSocketConnected"
QT_MOC_LITERAL(170, 24), // "onQTcpSocketDisconnected"
QT_MOC_LITERAL(195, 21), // "onQTcpSocketreadyRead"
QT_MOC_LITERAL(217, 25), // "onQTcpSocketErrorOccurred"
QT_MOC_LITERAL(243, 21), // "onQTcpSockethostFound"
QT_MOC_LITERAL(265, 24), // "onQTcpSocketStateChanged"
QT_MOC_LITERAL(290, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(319, 11), // "socketState"
QT_MOC_LITERAL(331, 24), // "onQTcpSocketAboutToClose"
QT_MOC_LITERAL(356, 24), // "onQTcpSocketbytesWritten"
QT_MOC_LITERAL(381, 5), // "bytes"
QT_MOC_LITERAL(387, 34), // "onQProcess_readyReadStandardO..."
QT_MOC_LITERAL(422, 29) // "on_pushButton_Quitter_clicked"

    },
    "AuditServeurMultiWidget\0"
    "on_pushButton_lancement_clicked\0\0"
    "onQTcpServeracceptError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "onQTcpServernewConnection\0"
    "onQTcpSocketConnected\0onQTcpSocketDisconnected\0"
    "onQTcpSocketreadyRead\0onQTcpSocketErrorOccurred\0"
    "onQTcpSockethostFound\0onQTcpSocketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "onQTcpSocketAboutToClose\0"
    "onQTcpSocketbytesWritten\0bytes\0"
    "onQProcess_readyReadStandardOutput\0"
    "on_pushButton_Quitter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuditServeurMultiWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    1,   93,    2, 0x08,    2 /* Private */,
       6,    0,   96,    2, 0x08,    4 /* Private */,
       7,    0,   97,    2, 0x08,    5 /* Private */,
       8,    0,   98,    2, 0x08,    6 /* Private */,
       9,    0,   99,    2, 0x08,    7 /* Private */,
      10,    1,  100,    2, 0x08,    8 /* Private */,
      11,    0,  103,    2, 0x08,   10 /* Private */,
      12,    1,  104,    2, 0x08,   11 /* Private */,
      15,    0,  107,    2, 0x08,   13 /* Private */,
      16,    1,  108,    2, 0x08,   14 /* Private */,
      18,    0,  111,    2, 0x08,   16 /* Private */,
      19,    0,  112,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AuditServeurMultiWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuditServeurMultiWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_lancement_clicked(); break;
        case 1: _t->onQTcpServeracceptError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 2: _t->onQTcpServernewConnection(); break;
        case 3: _t->onQTcpSocketConnected(); break;
        case 4: _t->onQTcpSocketDisconnected(); break;
        case 5: _t->onQTcpSocketreadyRead(); break;
        case 6: _t->onQTcpSocketErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 7: _t->onQTcpSockethostFound(); break;
        case 8: _t->onQTcpSocketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 9: _t->onQTcpSocketAboutToClose(); break;
        case 10: _t->onQTcpSocketbytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 11: _t->onQProcess_readyReadStandardOutput(); break;
        case 12: _t->on_pushButton_Quitter_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject AuditServeurMultiWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AuditServeurMultiWidget.offsetsAndSize,
    qt_meta_data_AuditServeurMultiWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AuditServeurMultiWidget_t
, QtPrivate::TypeAndForceComplete<AuditServeurMultiWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AuditServeurMultiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuditServeurMultiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuditServeurMultiWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AuditServeurMultiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
