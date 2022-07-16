//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDAWDLogEvent-Protocol.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMMLogEvent <HMDAWDLogEvent>
{
    unsigned long long _commandType;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
}

+ (id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;	// IMP=0x00000000003172bb
- (void).cxx_destruct;	// IMP=0x00000000003172aa
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;	// IMP=0x0000000000317207
- (id)metricForAWD;	// IMP=0x000000000078d62b
- (unsigned int)AWDMessageType;	// IMP=0x000000000078d620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

