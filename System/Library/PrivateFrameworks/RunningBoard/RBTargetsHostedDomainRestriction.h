//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBTargetsHostedDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000068935
- (void).cxx_destruct;	// IMP=0x0000000000068ca4
- (id)description;	// IMP=0x0000000000068c2a
- (unsigned long long)hash;	// IMP=0x0000000000068c0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068bbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000068bb1
- (id)allEntitlements;	// IMP=0x0000000000068b98
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000006899a
- (id)_init;	// IMP=0x00000000000688e7

@end
