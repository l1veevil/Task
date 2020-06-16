#ifndef _TEST_CC
#define _TEST_CC

#include <gmock/gmock.h>
#include <../Test9lab/IKeypad.h>
#include <../Test9lab/ILatch.h>

class MockIKeypad : public IKeypad {
public:
    MOCK_METHOD(bool, isActive, ());
    MOCK_METHOD(void, wait, ());
    MOCK_METHOD(PasswordResponse, requestPassword, ());
};

class MockILatch : public ILatch {
public:
    MOCK_METHOD(bool, isActive, ());
    MOCK_METHOD(DoorStatus, open, ());
    MOCK_METHOD(DoorStatus, close, ());
    MOCK_METHOD(DoorStatus, getDoorStatus, ());
};



#endif // _TEST_CC
