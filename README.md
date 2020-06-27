[TOC]

# Homework Manager 开发文档

## 项目说明

### 开发环境

- 开发环境：Qt 5.9.9

- 编译器：Qt Creator 4.11.0 （community)

- 数据库：MySql Server 5.5

### 下载版本链接

1. git： https://github.com/Mattie0000001/C-HomeworkManager.git

2. 百度网盘： 

------

## 文件说明

### 文件结构

|—HomeworkManager.pro          // 项目配置文件
|—Headers                                      // 头文件
|   |—mainwindow.h                               登录
|   |—createDB.h                                     数据库初始化
|   |—administrator.h                             管理员
|   |—addstu.h                                         管理员----添加学生账号
|   |—addtea.h                                         管理员----添加教师账号
|   |—stu.h                                                学生
|   |—tea.h                                                教师
|—Source                                         //源文件
|   |—main.cpp                                       主程序
|   |—mainwindow.cpp
|   |—createDB.cpp
|   |—administrator.cpp
|   |—addstu.cpp
|   |—addtea.cpp
|   |—stu.cpp
|   |—tea.cpp
|—Forms                                          //ui文件
|   |—mainwindow.ui
|   |—createDB.ui
|   |—administrator.ui
|   |—addstu.ui
|   |—addtea.ui
|   |—stu.ui
|   |—tea.ui

### 界面结构

| — 登录界面（mainwindow ）选择管理员/学生/老师身份并登录，成功后调转界面
|     |— 管理员 （administrator）：删除和创建学生/老师账号
|     |     |———学生信息添加（addstu）：创建学生账号（输入学生必要信息）
|     |     |———教师信息添加（addtea）：创建教师账号（输入教师必要信息）
|     |— 学生（student）：查看、修改每科作业的状态
|     |— 老师 （teacher）：// 待添加