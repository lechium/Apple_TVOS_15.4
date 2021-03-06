//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSDictionary, NSMutableDictionary, NSString, NSUUID, _DKEventStream;

@interface _DKHistogram : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_histogram;	// 8 = 0x8
    unsigned long long _countOverAllValues;	// 16 = 0x10
    NSDateInterval *_interval;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    NSString *_customIdentifier;	// 40 = 0x28
    _DKEventStream *_stream;	// 48 = 0x30
    NSArray *_deviceIdentifiers;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ad093
+ (id)entityName;	// IMP=0x000000000013e8f9
- (void).cxx_destruct;	// IMP=0x00000000000ad51c
@property(retain, nonatomic) NSArray *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
@property(retain, nonatomic) _DKEventStream *stream; // @synthesize stream=_stream;
@property(nonatomic) unsigned long long countOverAllValues; // @synthesize countOverAllValues=_countOverAllValues;
@property(retain, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ad3a9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad09b
- (id)description;	// IMP=0x00000000000acf03
- (void)subtractHistogram:(id)arg1;	// IMP=0x00000000000acbee
- (void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2;	// IMP=0x00000000000ac887
- (void)addHistogram:(id)arg1;	// IMP=0x00000000000ac566
- (void)_addPropertiesFrom:(id)arg1;	// IMP=0x00000000000ac279
- (void)subtractValue:(id)arg1;	// IMP=0x00000000000ac166
- (void)addValue:(id)arg1 withCount:(double)arg2;	// IMP=0x00000000000ac090
- (void)addValue:(id)arg1;	// IMP=0x00000000000abfc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000abdf2
- (id)countDictionary;	// IMP=0x00000000000abdd2
- (double)relativeFrequencyForValue:(id)arg1;	// IMP=0x00000000000abd5e
- (double)countForValueDouble:(id)arg1;	// IMP=0x00000000000abd0a
- (unsigned long long)countForValue:(id)arg1;	// IMP=0x00000000000abcc2
- (id)initWithHistogram:(id)arg1;	// IMP=0x00000000000abacf
- (id)initWithValues:(id)arg1;	// IMP=0x00000000000ab880
- (id)init;	// IMP=0x00000000000ab7de
- (id)insertInManagedObjectContext:(id)arg1;	// IMP=0x000000000013e906
- (id)initWithManagedObject:(id)arg1;	// IMP=0x000000000013e1c1

@end

