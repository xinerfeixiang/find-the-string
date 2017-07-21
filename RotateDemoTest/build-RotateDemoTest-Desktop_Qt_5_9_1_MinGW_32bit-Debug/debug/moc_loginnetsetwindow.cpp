/****************************************************************************
** Meta object code from reading C++ file 'loginnetsetwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RotateDemoTest/loginnetsetwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginnetsetwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginNetSetWindow_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginNetSetWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginNetSetWindow_t qt_meta_stringdata_LoginNetSetWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LoginNetSetWindow"
QT_MOC_LITERAL(1, 18, 12), // "rotateWindow"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "closeWindow"
QT_MOC_LITERAL(4, 44, 21) // "on_pushButton_clicked"

    },
    "LoginNetSetWindow\0rotateWindow\0\0"
    "closeWindow\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginNetSetWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LoginNetSetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginNetSetWindow *_t = static_cast<LoginNetSetWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotateWindow(); break;
        case 1: _t->closeWindow(); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginNetSetWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginNetSetWindow::rotateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoginNetSetWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginNetSetWindow::closeWindow)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LoginNetSetWindow::staticMetaObject = {
    { &BaseWindow::staticMetaObject, qt_meta_stringdata_LoginNetSetWindow.data,
      qt_meta_data_LoginNetSetWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginNetSetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginNetSetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginNetSetWindow.stringdata0))
        return static_cast<void*>(const_cast< LoginNetSetWindow*>(this));
    return BaseWindow::qt_metacast(_clname);
}

int LoginNetSetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LoginNetSetWindow::rotateWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginNetSetWindow::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
