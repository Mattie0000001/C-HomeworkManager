/****************************************************************************
** Meta object code from reading C++ file 'administrator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../administrator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Administrator_t {
    QByteArrayData data[13];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Administrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Administrator_t qt_meta_stringdata_Administrator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Administrator"
QT_MOC_LITERAL(1, 14, 15), // "mainwindow_show"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "delete_account"
QT_MOC_LITERAL(4, 46, 7), // "refresh"
QT_MOC_LITERAL(5, 54, 10), // "table_edit"
QT_MOC_LITERAL(6, 65, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 83, 18), // "on_tea_add_clicked"
QT_MOC_LITERAL(8, 102, 21), // "on_tea_delete_clicked"
QT_MOC_LITERAL(9, 124, 22), // "on_tea_refresh_clicked"
QT_MOC_LITERAL(10, 147, 18), // "on_stu_add_clicked"
QT_MOC_LITERAL(11, 166, 21), // "on_stu_delete_clicked"
QT_MOC_LITERAL(12, 188, 22) // "on_stu_refresh_clicked"

    },
    "Administrator\0mainwindow_show\0\0"
    "delete_account\0refresh\0table_edit\0"
    "QTableWidgetItem*\0on_tea_add_clicked\0"
    "on_tea_delete_clicked\0on_tea_refresh_clicked\0"
    "on_stu_add_clicked\0on_stu_delete_clicked\0"
    "on_stu_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Administrator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Administrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Administrator *_t = static_cast<Administrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainwindow_show(); break;
        case 1: _t->delete_account((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->table_edit((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_tea_add_clicked(); break;
        case 5: _t->on_tea_delete_clicked(); break;
        case 6: _t->on_tea_refresh_clicked(); break;
        case 7: _t->on_stu_add_clicked(); break;
        case 8: _t->on_stu_delete_clicked(); break;
        case 9: _t->on_stu_refresh_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Administrator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Administrator::mainwindow_show)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Administrator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Administrator.data,
      qt_meta_data_Administrator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Administrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Administrator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Administrator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Administrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Administrator::mainwindow_show()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
