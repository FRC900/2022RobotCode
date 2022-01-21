#include "GenericButtonBox.h"

GenericButtonBox::GenericButtonBox()
{

}

GenericButtonBox::~GenericButtonBox()
{

}

bool GenericButtonBox::LockingSwitchButton(void)
{
    ROS_DEBUG("Locking Switch Button");
    return true;
}

bool GenericButtonBox::LockingSwitchPress(void)
{
    ROS_DEBUG("Locking Switch Press");
    return true;
}

bool GenericButtonBox::LockingSwitchRelease(void)
{
    ROS_DEBUG("Locking Switch Release");
    return true;
}
