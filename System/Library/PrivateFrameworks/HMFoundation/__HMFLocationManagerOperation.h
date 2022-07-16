//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>

@class CLLocationManager, HMFLocationAuthorization, NSString;

__attribute__((visibility("hidden")))
@interface __HMFLocationManagerOperation <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _ready;	// 12 = 0xc
    CLLocationManager *_manager;	// 16 = 0x10
    HMFLocationAuthorization *_authorization;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000049f97
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000049970
+ (void)initialize;	// IMP=0x00000000000498c9
- (void).cxx_destruct;	// IMP=0x000000000004a014
@property(readonly) HMFLocationAuthorization *authorization; // @synthesize authorization=_authorization;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000049d13
- (void)main;	// IMP=0x0000000000049d01
- (_Bool)isReady;	// IMP=0x0000000000049c8f
@property(readonly) CLLocationManager *manager; // @synthesize manager=_manager;
- (void)dealloc;	// IMP=0x0000000000049bc8
- (id)initWithAuthorization:(id)arg1;	// IMP=0x0000000000049b3e
- (id)initWithTimeout:(double)arg1;	// IMP=0x0000000000049a22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

