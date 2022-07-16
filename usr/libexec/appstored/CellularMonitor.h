//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, NetworkEmulation;
@protocol OS_dispatch_queue;

@interface CellularMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 16 = 0x10
    NetworkEmulation *_emulation;	// 24 = 0x18
    int _emulationToken;	// 32 = 0x20
    _Bool _roaming;	// 36 = 0x24
}

+ (id)defaultMonitor;	// IMP=0x004000000017e2a9
- (void).cxx_destruct;	// IMP=0x002000000017e8cd
- (void)_postStateChangeNotification;	// IMP=0x001000000017e802
- (void)_applyNetworkEmulation:(id)arg1;	// IMP=0x001000000017e635
- (id)copyCellularNetworkIdentityWithError:(id *)arg1;	// IMP=0x001000000017e613
@property(readonly, getter=isRoaming) _Bool roaming; // @synthesize roaming=_roaming;
- (void)dealloc;	// IMP=0x001000000017e4f9
- (id)init;	// IMP=0x001000000017e2fe

@end

