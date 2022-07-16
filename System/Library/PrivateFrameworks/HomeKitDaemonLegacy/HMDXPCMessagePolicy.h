//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCMessagePolicy : HMFMessagePolicy
{
    unsigned long long _entitlements;	// 8 = 0x8
}

+ (id)defaultPolicy;	// IMP=0x0000000000518ca4
+ (id)policyWithEntitlements:(unsigned long long)arg1;	// IMP=0x0000000000518c47
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
- (unsigned long long)hash;	// IMP=0x0000000000518c24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000518b82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000518b77
- (id)__initWithEntitlements:(unsigned long long)arg1;	// IMP=0x0000000000518a64
- (id)init;	// IMP=0x00000000005189bc

@end
