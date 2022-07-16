//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/PRProximityDeviceProtocol-Protocol.h>

@class NSString, NSUUID, PRProximityDeviceParameters;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSString *_model;	// 16 = 0x10
    PRProximityDeviceParameters *_proximityParameters;	// 24 = 0x18
    struct deque<BtProxData, std::allocator<BtProxData>> _samples;	// 32 = 0x20
    long long _proximity;	// 80 = 0x50
    NSUUID *_peer;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x0000000000024833
- (void).cxx_destruct;	// IMP=0x00000000000247ec
@property(readonly) NSUUID *peer; // @synthesize peer=_peer;
- (void)estimateProximity;	// IMP=0x00000000000243a6
- (long long)deviceProximity;	// IMP=0x000000000002439c
- (_Bool)proxReady;	// IMP=0x0000000000024371
- (void)addSample:(struct BtProxData)arg1;	// IMP=0x000000000002422f
- (id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000240d6
- (id)init;	// IMP=0x0000000000024098

@end
