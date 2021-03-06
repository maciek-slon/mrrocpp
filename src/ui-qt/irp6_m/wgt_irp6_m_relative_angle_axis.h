#ifndef WGT_IRP6_M_RELATIVE_ANGLE_AXIS_H
#define WGT_IRP6_M_RELATIVE_ANGLE_AXIS_H

#include <QtGui/QWidget>
#include <QVBoxLayout>
#include <QDockWidget>
#include <QVector>
#include "ui_wgt_irp6_m_relative_angle_axis.h"
#include "../base/wgt_base.h"

#include "robot/irp6ot_m/const_irp6ot_m.h"
#include "robot/irp6p_m/const_irp6p_m.h"

namespace mrrocpp {
namespace ui {
namespace common {
class Interface;
}
namespace irp6_m {
class UiRobot;

}
}
}

class wgt_irp6_m_relative_angle_axis : public wgt_base
{
Q_OBJECT

public:
			wgt_irp6_m_relative_angle_axis(QString _widget_label, mrrocpp::ui::common::Interface& _interface, mrrocpp::ui::irp6_m::UiRobot& _robot, QWidget *parent =
					0);
	~wgt_irp6_m_relative_angle_axis();
	void synchro_depended_init();
	void init_and_copy();
	void my_open();
	QString robot_label;

	QVector <QDoubleSpinBox*> doubleSpinBox_des_Vector;

private:
	Ui::wgt_irp6_m_relative_angle_axisClass ui;
	mrrocpp::ui::irp6_m::UiRobot& robot;

	const static int aa_number;

	int init();
	int copy();

	int synchro_depended_widgets_disable(bool _set_disabled);

	int get_desired_position();
	int move_it();
	//int motion(/* TR PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo*/);
	//int set_single_axis(int axis, QDoubleSpinBox* qdsb_mcur, QDoubleSpinBox* qdsb_cur_p, QAbstractButton* qab_mip);
	void zero_desired_position();

signals:
	void synchro_depended_init_signal();
	void init_and_copy_signal();

private slots:

	void synchro_depended_init_slot();
	void init_and_copy_slot();

	void on_pushButton_l_clicked();
	void on_pushButton_1l_clicked();
	void on_pushButton_2l_clicked();
	void on_pushButton_3l_clicked();
	void on_pushButton_4l_clicked();
	void on_pushButton_5l_clicked();
	void on_pushButton_6l_clicked();
	//void on_pushButton_7l_clicked();
	void on_pushButton_r_clicked();
	void on_pushButton_1r_clicked();
	void on_pushButton_2r_clicked();
	void on_pushButton_3r_clicked();
	void on_pushButton_4r_clicked();
	void on_pushButton_5r_clicked();
	void on_pushButton_6r_clicked();
	//void on_pushButton_7r_clicked();
};

#endif // WGT_SPKM_INC_H
