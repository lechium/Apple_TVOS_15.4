//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASDeviceState : NSObject
{
}

+ (id)currentOsBuild;	// IMP=0x0000000000046273
+ (void)blockUntilFirstUnlock;	// IMP=0x00000000000461c8
+ (_Bool)isDeviceFormattedForProtection;	// IMP=0x00000000000461b9
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;	// IMP=0x00000000000461a0
+ (id)registerForLockStateChangeNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046134
+ (int)lockState;	// IMP=0x0000000000046125
+ (_Bool)isUnlocked;	// IMP=0x0000000000046108
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045fc7
+ (void)runBlockWhenDeviceIsClassCUnlocked:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045fad
+ (_Bool)isClassCLocked;	// IMP=0x0000000000045e2a
+ (void)setDefaultSystemCallbacks;	// IMP=0x0000000000045e16
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks *)arg1;	// IMP=0x0000000000045e09

@end

