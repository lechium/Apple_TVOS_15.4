//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBCompoundAnyDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000656a6
- (void).cxx_destruct;	// IMP=0x0000000000066284
- (id)description;	// IMP=0x0000000000066200
- (unsigned long long)hash;	// IMP=0x00000000000661e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006615e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066153
- (id)allEntitlements;	// IMP=0x0000000000065f87
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000065a31
- (id)_initWithRestrictions:(id)arg1;	// IMP=0x0000000000065615

@end
