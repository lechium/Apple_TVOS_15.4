//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockLocalDeviceController : NSObject
{
    _Bool _lastUnlockUsedMask;	// 8 = 0x8
    CDUnknownBlockType _deviceEnteredBioLockoutHandler;	// 16 = 0x10
    NSArray *_wakeGestureDates;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000ac87
@property(nonatomic) _Bool lastUnlockUsedMask; // @synthesize lastUnlockUsedMask=_lastUnlockUsedMask;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSArray *wakeGestureDates; // @synthesize wakeGestureDates=_wakeGestureDates;
@property(copy, nonatomic) CDUnknownBlockType deviceEnteredBioLockoutHandler; // @synthesize deviceEnteredBioLockoutHandler=_deviceEnteredBioLockoutHandler;
- (void)handleBioLockoutStateChanged:(unsigned long long)arg1;	// IMP=0x001000000000ac33
- (_Bool)shouldPrewarmAttempt;	// IMP=0x001000000000ac21
- (void)deviceUnlockedWithMask:(_Bool)arg1;	// IMP=0x001000000000ab75
- (void)lockDevice;	// IMP=0x001000000000ab6f
- (void)lockWithBioLockOut;	// IMP=0x001000000000ab5d
- (_Bool)supportsPeriocular;	// IMP=0x001000000000ab55
- (_Bool)faceIDEnabled;	// IMP=0x001000000000ab4d
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000000aaf8
- (id)init;	// IMP=0x001000000000aac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

