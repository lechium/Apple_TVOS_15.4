//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NEOnDemandRuleEvaluateConnection
{
    NSArray *_connectionRules;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014932a
- (void).cxx_destruct;	// IMP=0x0000000000149ec1
@property(copy) NSArray *connectionRules; // @synthesize connectionRules=_connectionRules;
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x0000000000149bcb
- (id)copyLegacyDictionary;	// IMP=0x00000000001499b8
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001498e1
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001496c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001495e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014954d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149458
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000149366
- (id)init;	// IMP=0x0000000000149332

@end

