//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBOriginatorEntitlementDomainRestriction
{
    NSString *_entitlement;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000064c60
- (void).cxx_destruct;	// IMP=0x00000000000650df
- (id)description;	// IMP=0x000000000006505b
- (unsigned long long)hash;	// IMP=0x000000000006503e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064fb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064fae
- (id)allEntitlements;	// IMP=0x0000000000064f87
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000064e20
- (id)_initWithEntitlement:(id)arg1;	// IMP=0x0000000000064bcf

@end

