//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@interface CKVPriorInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _ordinality;	// 8 = 0x8
    float _score;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009bb49
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) unsigned int ordinality; // @synthesize ordinality=_ordinality;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009ba71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b9d1
- (unsigned long long)hash;	// IMP=0x000000000009b931
- (_Bool)isEqualToPriorInfo:(id)arg1;	// IMP=0x000000000009b8be
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009b856
- (id)description;	// IMP=0x000000000009b7da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b7a0
- (id)init;	// IMP=0x000000000009b758
- (id)initWithOrdinality:(unsigned int)arg1 score:(float)arg2;	// IMP=0x000000000009b66c

@end

