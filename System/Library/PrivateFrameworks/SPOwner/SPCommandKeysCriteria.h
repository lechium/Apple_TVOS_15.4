//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSNumber;

@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sequence;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
    NSArray *_indices;	// 24 = 0x18
    NSNumber *_index;	// 32 = 0x20
    NSNumber *_hint;	// 40 = 0x28
}

+ (id)driftModeledCriteria;	// IMP=0x000000000002f6b6
+ (id)matchSecondaryIndex:(unsigned long long)arg1 hint:(unsigned char)arg2;	// IMP=0x000000000002f602
+ (id)matchPrimaryIndices:(id)arg1;	// IMP=0x000000000002f599
+ (id)matchDateInterval:(id)arg1;	// IMP=0x000000000002f533
+ (id)matchSequence:(unsigned char)arg1 index:(unsigned int)arg2 hint:(unsigned char)arg3;	// IMP=0x000000000002f458
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ef5f
- (void).cxx_destruct;	// IMP=0x000000000002f776
@property(copy, nonatomic) NSNumber *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(copy, nonatomic) NSNumber *sequence; // @synthesize sequence=_sequence;
- (id)initWithDateInterval:(id)arg1 sequence:(id)arg2 indices:(id)arg3 index:(id)arg4 hint:(id)arg5;	// IMP=0x000000000002f344
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f154
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f0ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ef67

@end

