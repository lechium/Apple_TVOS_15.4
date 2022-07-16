//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPeer : NSObject
{
    NSString *_deviceID;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
}

+ (id)stringFromState:(unsigned long long)arg1;	// IMP=0x00400000000950b5
- (void).cxx_destruct;	// IMP=0x0020000000095141
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)handleConfirmationFailed;	// IMP=0x00100000000950a1
- (void)handleRemoteRegistrationRequested;	// IMP=0x001000000009508a
- (void)handleBioLockout;	// IMP=0x0010000000095076
- (void)handleDeviceUnlocked;	// IMP=0x0010000000094ea6
- (void);	// IMP=0x0010000000094e8f
- (void)handleRegistrationCompletedSuccessfully:(_Bool)arg1;	// IMP=0x0010000000094e78
- (void)handleRegistrationBegan;	// IMP=0x0010000000094dad
- (void)handlePairedSuccessfully;	// IMP=0x0010000000094ce2
@property(readonly, nonatomic, getter=isKeyBagLocked) _Bool keyBagLocked;
@property(readonly, nonatomic) _Bool canPerformUnlocks;
@property(readonly, nonatomic) _Bool shouldRegister;
- (id)description;	// IMP=0x0010000000094bb9
- (id)initWithDeviceID:(id)arg1;	// IMP=0x0010000000094b34

@end
