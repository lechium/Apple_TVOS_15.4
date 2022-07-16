//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSCountedSet;

@interface SBSLockScreenServiceConnection : NSObject
{
    BSServiceConnection *_connection;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSCountedSet *_lock_preventPasscodeLockReasons;	// 24 = 0x18
    NSCountedSet *_lock_preventSpuriousScreenUndimReasons;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000671b
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;	// IMP=0x0000000000006244
- (id)preventPasscodeLockWithReason:(id)arg1;	// IMP=0x0000000000005d6d
- (void)requestPasscodeCheckUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ab9
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000057da
- (void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005612
- (void)dealloc;	// IMP=0x00000000000055d0
- (id)init;	// IMP=0x00000000000050d5

@end

