#include "custom_controller.h"

CustomController::CustomController(DataContainer &dc, RobotData &rd) : dc_(dc), rd_(rd), wbc_(dc.wbc_)
{
    ControlVal_.setZero();
}

Eigen::VectorQd CustomController::getControl()
{
    return ControlVal_;
}
void CustomController::taskCommandToCC(TaskCommand tc_)
{
    tc = tc_;
}

void CustomController::computeSlow()
{
    //rd_.control_time_; current time
    //rd_.link_[Right_Foot].Jac : current rightfoot jac
    //rd_.q_dot_ : current q velocity

    //rd_.link_[Right_Foot]

    //ControlVal_=
}

void CustomController::computeFast()
{   
    if (tc.mode == 10)
    {

    }
}