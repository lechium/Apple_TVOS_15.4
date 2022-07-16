//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent <HMDAWDLogEvent>
{
    _Bool _enabled;	// 8 = 0x8
}

+ (id)eventWithAutomaticUpdateEnabled:(_Bool)arg1;	// IMP=0x00000000007baeca
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)metricForAWD;	// IMP=0x0000000000836e0c
- (unsigned int)AWDMessageType;	// IMP=0x0000000000836e01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

