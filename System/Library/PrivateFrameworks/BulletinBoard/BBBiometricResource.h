//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject
{
    _Bool _isPasscodeSet;	// 8 = 0x8
    _Bool _isBiometricUnlockAllowed;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b79b
- (void)_updateIsBiometricUnlockAllowed;	// IMP=0x000000000003b6b7
- (void)_updateIsPasscodeSet;	// IMP=0x000000000003b622
- (void)_registerForPasscodeChange;	// IMP=0x000000000003b58e
- (void)_unregisterForBiometricUnlockAllowedChange;	// IMP=0x000000000003b52e
- (void)_registerForBiometricUnlockAllowedChange;	// IMP=0x000000000003b4c7
- (void)dealloc;	// IMP=0x000000000003b489
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000003b3e3

@end
