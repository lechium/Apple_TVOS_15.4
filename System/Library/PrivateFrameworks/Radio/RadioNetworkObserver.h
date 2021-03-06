//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RadioNetworkObserver : NSObject
{
    long long _networkUsageCount;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_networkUsageQueue;	// 16 = 0x10
}

+ (id)sharedNetworkObserver;	// IMP=0x000000000002858f
- (void).cxx_destruct;	// IMP=0x0000000000028341
@property(readonly, nonatomic) _Bool isUsingNetwork;
@property(readonly, nonatomic) _Bool isCellularNetworkingAllowed;
- (void)endUsingNetwork;	// IMP=0x0000000000028248
- (void)beginUsingNetwork;	// IMP=0x00000000000281fd
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;	// IMP=0x0000000000028190
- (void)dealloc;	// IMP=0x00000000000280dd
- (id)_init;	// IMP=0x0000000000027ff8
- (id)init;	// IMP=0x0000000000027fb9

@end

