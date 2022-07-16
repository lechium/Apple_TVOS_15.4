//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate;

@interface RTPredictedDate : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_date;	// 8 = 0x8
    double _uncertainty;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000023be3
- (void).cxx_destruct;	// IMP=0x00000000000242b0
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (unsigned long long)hash;	// IMP=0x00000000000241a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023fe3
- (id)description;	// IMP=0x0000000000023e77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023dd8
- (id)initWithDate:(id)arg1 uncertainty:(double)arg2 confidence:(double)arg3;	// IMP=0x0000000000023d47
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000023cb9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023beb

@end

