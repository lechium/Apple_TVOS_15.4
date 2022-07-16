//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HIDElement : NSObject
{
    struct {
        struct IOHIDDeviceDeviceInterface **deviceInterface;
        struct __IOHIDDevice *device;
        struct __IOHIDValue *value;
        struct IOHIDElementStruct *elementStructPtr;
        unsigned int index;
        struct __CFData *data;
        struct __CFArray *attachedElements;
        struct __CFArray *childElements;
        struct __IOHIDElement *parentElement;
        struct __IOHIDElement *originalElement;
        struct _IOHIDCalibrationStruct *calibrationPtr;
        struct __CFDictionary *properties;
        struct __CFString *rootKey;
        unsigned char isDirty;
    } _element;	// 8 = 0x8
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002876
- (unsigned long long)hash;	// IMP=0x0000000000002869
- (void)dealloc;	// IMP=0x0000000000002833
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000002829

@end
