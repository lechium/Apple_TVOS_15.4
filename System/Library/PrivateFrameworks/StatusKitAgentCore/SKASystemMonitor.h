//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SKASystemMonitor : NSObject
{
    _Bool _underFirstLock;	// 8 = 0x8
    struct os_unfair_lock_s _ivarLock;	// 12 = 0xc
    NSHashTable *_listeners;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x000000000003ecb2
+ (id)sharedInstance;	// IMP=0x000000000003e878
- (void).cxx_destruct;	// IMP=0x000000000003ed4d
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) _Bool underFirstLock; // @synthesize underFirstLock=_underFirstLock;
@property(nonatomic) struct os_unfair_lock_s ivarLock; // @synthesize ivarLock=_ivarLock;
- (void)_deliverNotificationSelectorToListeners:(SEL)arg1;	// IMP=0x000000000003ea45
- (void)_updateLockState;	// IMP=0x000000000003e9c3
- (_Bool)_deviceStillUnderFirstLock;	// IMP=0x000000000003e9bb
- (void)_listenForKeyBagChangeNotifications;	// IMP=0x000000000003e9b5
@property(readonly, nonatomic) _Bool isUnderFirstDataProtectionLock;
- (void)removeListener:(id)arg1;	// IMP=0x000000000003e939
- (void)addListener:(id)arg1;	// IMP=0x000000000003e8cd
- (id)init;	// IMP=0x000000000003e7de

@end

