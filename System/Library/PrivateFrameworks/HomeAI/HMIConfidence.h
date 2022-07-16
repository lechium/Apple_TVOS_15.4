//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>
{
    double _value;	// 8 = 0x8
    NSArray *_levelThresholds;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000062502
- (void).cxx_destruct;	// IMP=0x000000000006279b
@property(readonly) NSArray *levelThresholds; // @synthesize levelThresholds=_levelThresholds;
@property(readonly) double value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000062697
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006250a
- (unsigned long long)hash;	// IMP=0x0000000000062402
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000622f9
- (id)shortDescription;	// IMP=0x0000000000062269
- (id)description;	// IMP=0x0000000000062238
@property(readonly) long long level;
- (id)initWithValue:(double)arg1 levelThresholds:(id)arg2;	// IMP=0x000000000006209f

@end

