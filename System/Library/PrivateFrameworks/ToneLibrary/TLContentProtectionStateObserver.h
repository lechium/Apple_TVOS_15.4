//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_accessQueueLabel;	// 16 = 0x10
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;	// 24 = 0x18
    long long _contentProtectionStatus;	// 32 = 0x20
    long long _unlockedSinceBootStatus;	// 40 = 0x28
}

+ (id)sharedContentProtectionStateObserver;	// IMP=0x000000000002a998
- (void).cxx_destruct;	// IMP=0x000000000002b4bb
- (long long)_queryCurrentUnlockedSinceBootStatus;	// IMP=0x000000000002b4ae
- (void)_loadContentProtectionStatusIfNeeded;	// IMP=0x000000000002b482
- (void)_loadUnlockedSinceBootStatusIfNeeded;	// IMP=0x000000000002b470
- (void)_assertNotRunningOnAccessQueue;	// IMP=0x000000000002b238
- (void)_assertRunningOnAccessQueue;	// IMP=0x000000000002b000
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;	// IMP=0x000000000002afad
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;	// IMP=0x000000000002af03
- (id)_performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;	// IMP=0x000000000002add3
- (id)performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;	// IMP=0x000000000002abff
- (void)dealloc;	// IMP=0x000000000002ab89
- (id)init;	// IMP=0x000000000002a9ed

@end
