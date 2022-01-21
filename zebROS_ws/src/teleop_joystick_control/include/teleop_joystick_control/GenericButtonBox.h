#ifndef _GENERIC_BUTTON_BOX_H_
#define _GENERIC_BUTTON_BOX_H_

#include <string>
#include <vector>
#include <iostream>

class GenericButtonBox
{

private:
public:

    /* Constructors */
    GenericButtonBox();
    virtual ~GenericButtonBox();

    /* Functions */
    virtual bool LockingSwitchButton(void);
    virtual bool LockingSwitchPress(void);
    virtual bool LockingSwitchRelease(void);

}; // end Class - GenericButtonBox

#endif
