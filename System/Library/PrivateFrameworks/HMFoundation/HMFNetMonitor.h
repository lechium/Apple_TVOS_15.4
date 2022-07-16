//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress, NSString;
@protocol HMFNetMonitorDelegate;

@interface HMFNetMonitor <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _reachable;	// 12 = 0xc
    id <HMFNetMonitorDelegate> _delegate;	// 16 = 0x10
    HMFNetAddress *_netAddress;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000000b46a
- (void).cxx_destruct;	// IMP=0x000000000000b50f
@property(readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property __weak id <HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long reachabilityPath;
@property(getter=isReachable) _Bool reachable;
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000000b0c2
- (id)initWithNetAddress:(id)arg1;	// IMP=0x000000000000b01a
- (id)init;	// IMP=0x000000000000b006

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
