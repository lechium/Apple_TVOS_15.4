//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventReceived : HMMLogEvent <HMDAWDLogEvent>
{
    _Bool _hasExpectedGSN;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
}

+ (id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(_Bool)arg2;	// IMP=0x000000000050d135
- (void).cxx_destruct;	// IMP=0x000000000050d122
@property(readonly, nonatomic) _Bool hasExpectedGSN; // @synthesize hasExpectedGSN=_hasExpectedGSN;
@property(readonly, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(_Bool)arg2;	// IMP=0x000000000050d081
- (id)metricForAWD;	// IMP=0x000000000079778a
- (unsigned int)AWDMessageType;	// IMP=0x000000000079777f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

