#include "updatehw.h"
#include "ui_updatehw.h"

updatehw::updatehw(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::updatehw)
{
  ui->setupUi(this);
}

updatehw::~updatehw()
{
  delete ui;
}

void updatehw::get_update()
{
// 获得文本框输入信息
    uphw1 = ui->uphw1->toPlainText();
    uphw2 = ui->uphw2->toPlainText();
    uphw3 = ui->uphw3->toPlainText();
    QString s_week = ui->upweek->toPlainText();
    c_week = s_week.toInt();

}

void updatehw::updateinfo(QString id_course)
{
 this->show();
 courseID=id_course;
}


//返回hwdetail
void updatehw::on_pushButton_clicked()
{
  this->hide();
  hwdetail_show();
}

//保存更新
void updatehw::on_pushButton_2_clicked()
{
    get_update();
    QString update_hw = QString("UPDATE detail_hw SET homework1 = %1 ,homework2 = %2, homework3 = %3 WHERE week = %4 AND courseID = %5")
        .arg(uphw1).arg(uphw2).arg(uphw3).arg(c_week).arg(courseID);
  QSqlQuery query_up;
  query_up.prepare(update_hw);
  // 查询插入、打印失败原因、提示
  bool ok = query_up.exec();
  if (!ok)
  {
      qDebug() << "detail_hw" << query_up.lastError().text();
      QMessageBox::information(this, "提示:更新失败", query_up.lastError().text(), QMessageBox::Ok);
  }
  if(ok)
  {
      qDebug() << "detail_hw" <<"更新成功";
      QMessageBox::information(this, "提示:", "更新成功", QMessageBox::Ok);
    }
  //关闭窗口，返回hwdetail
  this->hide();
  hwdetail_show();
}
