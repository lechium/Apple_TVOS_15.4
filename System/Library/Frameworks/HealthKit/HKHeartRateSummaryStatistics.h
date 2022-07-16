//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSMutableArray, NSUUID;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding>
{
    NSMutableArray *_sortedBuckets;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    long long _numberOfBuckets;	// 24 = 0x18
    long long _numberOfReadings;	// 32 = 0x20
    NSUUID *_sessionUUID;	// 40 = 0x28
    NSArray *_highlightedReadings;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000204718
- (void).cxx_destruct;	// IMP=0x000000000001e59e
@property(retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings; // @synthesize highlightedReadings=_highlightedReadings;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) long long numberOfReadings; // @synthesize numberOfReadings=_numberOfReadings;
@property(readonly, nonatomic) long long numberOfBuckets; // @synthesize numberOfBuckets=_numberOfBuckets;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (unsigned long long)hash;	// IMP=0x0000000000204add
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001df9a
- (id)description;	// IMP=0x00000000002049ed
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002047e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000204720
- (id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(_Bool)arg2;	// IMP=0x00000000000116fe
- (void)enumerateBucketsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000204581
- (id)bucketAtIndex:(long long)arg1;	// IMP=0x000000000020456d
- (void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2;	// IMP=0x0000000000204330
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3;	// IMP=0x0000000000204253
- (id)_bucketsDescription;	// IMP=0x0000000000206206
- (id)_dictionaryRepresentation;	// IMP=0x0000000000205f7b

@end

