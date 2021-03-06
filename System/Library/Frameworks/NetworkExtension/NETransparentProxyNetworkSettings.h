//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NETransparentProxyNetworkSettings
{
    _Bool _isFullyTransparent;	// 8 = 0x8
    NSArray *_includedNetworkRules;	// 16 = 0x10
    NSArray *_excludedNetworkRules;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008752c
- (void).cxx_destruct;	// IMP=0x0000000000088125
@property _Bool isFullyTransparent; // @synthesize isFullyTransparent=_isFullyTransparent;
@property(copy) NSArray *excludedNetworkRules; // @synthesize excludedNetworkRules=_excludedNetworkRules;
@property(copy) NSArray *includedNetworkRules; // @synthesize includedNetworkRules=_includedNetworkRules;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000087f4d
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x0000000000087c81
- (_Bool)validateNetworkRule:(id)arg1 collectErrors:(id)arg2;	// IMP=0x0000000000087893
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000877c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000876cd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087534

@end

