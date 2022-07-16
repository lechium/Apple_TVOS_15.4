//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@interface HMDHMBLogEvent : HMMLogEvent
{
    int _containerType;	// 8 = 0x8
    int _zoneType;	// 12 = 0xc
}

@property(readonly) int zoneType; // @synthesize zoneType=_zoneType;
@property(readonly) int containerType; // @synthesize containerType=_containerType;
- (id)initWithCloudZoneID:(id)arg1;	// IMP=0x0000000000a6e334

@end

