//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSArray, NSString;

@interface HMDCameraConfigurationsLogEvent : HMMLogEvent <HMDAWDLogEvent>
{
    NSArray *_homeSettingsConfigurations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004a209c
@property(readonly, nonatomic) NSArray *homeSettingsConfigurations; // @synthesize homeSettingsConfigurations=_homeSettingsConfigurations;
- (id)initWithHomes:(id)arg1;	// IMP=0x00000000004a1e41
- (id)metricForAWD;	// IMP=0x000000000083fcd6
- (unsigned int)AWDMessageType;	// IMP=0x000000000083fccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

