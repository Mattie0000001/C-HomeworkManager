/****************************************************************************
** Meta object code from reading C++ file 'tea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tea_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tea_t qt_meta_stringdata_tea = {
    {
QT_MOC_LITERAL(0, 0, 3), // "tea"
QT_MOC_LITERAL(1, 4, 15), // "mainwindow_show"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "tea_refresh"
QT_MOC_LITERAL(4, 33, 17), // "signal_opendetail"
QT_MOC_LITERAL(5, 51, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 73, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 97, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 121, 12), // "teacher_open"
QT_MOC_LITERAL(9, 134, 16) // "slots_opendetail"

    },
    "tea\0mainwindow_show\0\0tea_refresh\0"
    "signal_opendetail\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "teacher_open\0slots_opendetail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tea *_t = static_cast<tea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainwindow_show(); break;
        case 1: _t->tea_refresh(); break;
        case 2: _t->signal_opendetail(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->teacher_open(); break;
        case 7: _t->slots_opendetail(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (tea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tea::mainwindow_show)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (tea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tea::tea_refresh)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (tea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tea::signal_opendetail)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tea.data,
      qt_meta_data_tea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tea.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void tea::mainwindow_show()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void tea::tea_refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void tea::signal_opendetail()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
