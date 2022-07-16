//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPSystemStateObserver-Protocol.h>

@class MISSING_TYPE;

@interface CPSystemStateObserver : NSObject <CPSystemStateObserver>
{
    MISSING_TYPE *carplayObserver;	// 8 = 0x8
    MISSING_TYPE *managedConfigObserver;	// 24 = 0x18
    MISSING_TYPE *lock;	// 40 = 0x28
    MISSING_TYPE *observers;	// 48 = 0x30
    MISSING_TYPE *audioRoutePolicyManager;	// 56 = 0x38
    MISSING_TYPE *carPlayConnected;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_screenTimeAllowed;	// 65 = 0x41
    MISSING_TYPE *$__lazy_storage_$__allowSharePlay;	// 66 = 0x42
    MISSING_TYPE *$__lazy_storage_$__allowScreenSharing;	// 67 = 0x43
}

- (void).cxx_destruct;	// IMP=0x000000000012e610
- (id)init;	// IMP=0x000000000012e5b0
- (void)addObserver:(id)arg1 withQueue:(id)arg2;	// IMP=0x000000000012e4d0
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000012e350
@property(nonatomic, readonly) _Bool allowScreenSharing;
@property(nonatomic, readonly) _Bool allowSharePlay;

@end

