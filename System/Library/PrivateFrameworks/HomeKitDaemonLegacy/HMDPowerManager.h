//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _networkInterfaceActive;	// 16 = 0x10
    _Bool _networkAccessRequired;	// 17 = 0x11
    unsigned int _powerAssertion;	// 20 = 0x14
    struct __SCDynamicStore *_scStore;	// 24 = 0x18
    void *_scContext;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003defc7
@property(nonatomic, getter=isNetworkAccessRequired) _Bool networkAccessRequired; // @synthesize networkAccessRequired=_networkAccessRequired;
- (void)_ensureNetworkInterfaceMonitorStopped;	// IMP=0x00000000003def0f
- (int)_ensureNetworkInterfaceMonitorStarted;	// IMP=0x00000000003deca1
- (void)_update;	// IMP=0x00000000003deafc
- (void)stop;	// IMP=0x00000000003deaaa
- (void)start;	// IMP=0x00000000003dea58
- (void)dealloc;	// IMP=0x00000000003de9d4
- (id)init;	// IMP=0x00000000003de975

@end

