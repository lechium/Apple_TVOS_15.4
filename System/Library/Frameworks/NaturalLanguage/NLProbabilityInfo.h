//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NaturalLanguage/NSCopying-Protocol.h>
#import <NaturalLanguage/NSSecureCoding-Protocol.h>

@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isValid;	// 8 = 0x8
    double _probability;	// 16 = 0x10
    double _log10Probability;	// 24 = 0x18
    unsigned long long _probabilityFlags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013dba
@property(readonly, nonatomic) unsigned long long probabilityFlags; // @synthesize probabilityFlags=_probabilityFlags;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) double log10Probability; // @synthesize log10Probability=_log10Probability;
@property(readonly, nonatomic) double probability; // @synthesize probability=_probability;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013cae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013bba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013ac1
- (unsigned long long)hash;	// IMP=0x0000000000013a4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013a3f
- (id)description;	// IMP=0x0000000000013a04
- (id)initWithInvalidProbability;	// IMP=0x00000000000139cb
- (id)initWithLog10Probability:(double)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000013962
- (id)initWithProbability:(double)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000000138fe

@end

