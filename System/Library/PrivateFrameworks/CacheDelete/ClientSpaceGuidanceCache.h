//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ClientSpaceGuidanceCache : NSObject
{
    double _validity_interval;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_thresholds;	// 24 = 0x18
    NSMutableDictionary *_purgeable;	// 32 = 0x20
    NSMutableDictionary *_lastUpdateTimestamps;	// 40 = 0x28
}

+ (id)sharedCache;	// IMP=0x0000000000021ac3
- (void).cxx_destruct;	// IMP=0x0000000000022f47
@property(retain, nonatomic) NSMutableDictionary *lastUpdateTimestamps; // @synthesize lastUpdateTimestamps=_lastUpdateTimestamps;
@property(retain, nonatomic) NSMutableDictionary *purgeable; // @synthesize purgeable=_purgeable;
@property(retain, nonatomic) NSMutableDictionary *thresholds; // @synthesize thresholds=_thresholds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)unserializedIsValidForVolume:(id)arg1 urgency:(int)arg2 desiredSpace:(id)arg3;	// IMP=0x0000000000022d47
- (double)unserializedGetValidityInterval;	// IMP=0x0000000000022d3c
- (void)unserializedSetValidityInterval:(double)arg1;	// IMP=0x0000000000022d31
- (id)unserializedThresholdForVolume:(id)arg1 urgency:(int)arg2;	// IMP=0x0000000000022bd0
- (id)init;	// IMP=0x0000000000022b13
- (void)invalidate;	// IMP=0x00000000000229f4
@property(nonatomic) double validity_interval; // @synthesize validity_interval=_validity_interval;
- (void)updatePurgeableForService:(id)arg1 volume:(id)arg2 urgency:(int)arg3 newPurgeable:(id)arg4;	// IMP=0x0000000000022622
- (void)updateThresholdsForVolume:(id)arg1 thresholdDictionary:(id)arg2;	// IMP=0x000000000002249f
- (_Bool)isValidForVolume:(id)arg1 urgency:(int)arg2 desiredSpace:(id)arg3;	// IMP=0x00000000000221a7
- (id)valueForVolume:(id)arg1 urgency:(int)arg2 serviceName:(id)arg3 desiredSpace:(id)arg4;	// IMP=0x0000000000021b18

@end
