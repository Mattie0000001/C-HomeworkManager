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
    QByteArrayData data[12];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Administrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Administrator_t qt_meta_stringdata_Administrator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Administrator"
QT_MOC_LITERAL(1, 14, 14), // "delete_account"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "refresh"
QT_MOC_LITERAL(4, 38, 10), // "table_edit"
QT_MOC_LITERAL(5, 49, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(6, 67, 18), // "on_tea_add_clicked"
QT_MOC_LITERAL(7, 86, 21), // "on_tea_delete_clicked"
QT_MOC_LITERAL(8, 108, 22), // "on_tea_refresh_clicked"
QT_MOC_LITERAL(9, 131, 18), // "on_stu_add_clicked"
QT_MOC_LITERAL(10, 150, 21), // "on_stu_delete_clicked"
QT_MOC_LITERAL(11, 172, 22) // "on_stu_refresh_clicked"

    },
    "Administrator\0delete_account\0\0refresh\0"
    "table_edit\0QTableWidgetItem*\0"
    "on_tea_add_clicked\0on_tea_delete_clicked\0"
    "on_tea_refresh_clicked\0on_stu_add_clicked\0"
    "on_stu_delete_clicked\0on_stu_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Administrator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       3,    0,   62,    2, 0x08 /* Private */,
       4,    1,   63,    2, 0x08 /* Private */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
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
        case 0: _t->delete_account((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->table_edit((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_tea_add_clicked(); break;
        case 4: _t->on_tea_delete_clicked(); break;
        case 5: _t->on_tea_refresh_clicked(); break;
        case 6: _t->on_stu_add_clicked(); break;
        case 7: _t->on_stu_delete_clicked(); break;
        case 8: _t->on_stu_refresh_clicked(); break;
        default: ;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
