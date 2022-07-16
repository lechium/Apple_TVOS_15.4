//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFNetAddressMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned int _currentNetworkFlags;	// 24 = 0x18
    HMFNetAddress *_netAddress;	// 32 = 0x20
    struct __SCNetworkReachability *_networkReachabilityRef;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004edae
@property(nonatomic) unsigned int currentNetworkFlags; // @synthesize currentNetworkFlags=_currentNetworkFlags;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
- (id)netAddress;	// IMP=0x000000000004ed6c
- (id)logIdentifier;	// IMP=0x000000000004ece0
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;	// IMP=0x000000000004eaef
- (unsigned long long)reachabilityPath;	// IMP=0x000000000004ea95
- (id)attributeDescriptions;	// IMP=0x000000000004e9c9
- (id)shortDescription;	// IMP=0x000000000004e8c7
- (void)dealloc;	// IMP=0x000000000004e85d
- (id)initWithNetAddress:(id)arg1;	// IMP=0x000000000004e1d0
- (id)init;	// IMP=0x000000000004e1bc
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000004e106

@end
