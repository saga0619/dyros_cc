#include "custom_controller.h"
#include "tocabi_controller/wholebody_controller.h"

CustomController::CustomController(DataContainer &dc, RobotData &rd) : dc_(dc), rd_(rd)
{
    ControlVal_.setZero();
}

Eigen::VectorQd CustomController::getControl()
{
    return ControlVal_;
}

void CustomController::compute_slow()
{
    //rd_.control_time_; current time
    //rd_.link_[Right_Foot].Jac : current rightfoot jac
    //rd_.q_dot_ : current q velocity

    //rd_.link_[Right_Foot]

    //ControlVal_=

    
}

void CustomController::compute_fast()
{

}