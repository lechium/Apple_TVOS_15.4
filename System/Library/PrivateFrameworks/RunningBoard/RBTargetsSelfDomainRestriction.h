//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBTargetsSelfDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000006857c
- (void).cxx_destruct;	// IMP=0x00000000000688d4
- (id)description;	// IMP=0x000000000006885a
- (unsigned long long)hash;	// IMP=0x000000000006883d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000687ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000687e1
- (id)allEntitlements;	// IMP=0x00000000000687c8
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000685e1
- (id)_init;	// IMP=0x000000000006852e

@end

