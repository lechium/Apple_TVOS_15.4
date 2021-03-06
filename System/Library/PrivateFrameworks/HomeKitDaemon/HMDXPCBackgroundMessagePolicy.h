//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy
{
    _Bool _requiresEntitlement;	// 8 = 0x8
}

+ (id)defaultPolicy;	// IMP=0x0000000000b3a88d
+ (id)policyWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0000000000b3a832
@property(readonly) _Bool requiresEntitlement; // @synthesize requiresEntitlement=_requiresEntitlement;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3a815
- (unsigned long long)hash;	// IMP=0x0000000000b3a7ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3a75d
- (id)__initWithEntitlementRequirement:(_Bool)arg1;	// IMP=0x0000000000b3a71b
- (id)init;	// IMP=0x0000000000b3a673

@end

