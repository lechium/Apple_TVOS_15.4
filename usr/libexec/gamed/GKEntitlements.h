//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKEntitlements : NSObject
{
    unsigned long long _entitlements;	// 8 = 0x8
}

- (_Bool)_shouldBypasAuthenticationForConnection:(id)arg1;	// IMP=0x00200000000f8b7f
- (_Bool)hasAnyPrivateEntitlement;	// IMP=0x00100000000f8b6d
- (_Bool)hasAnyEntitlement;	// IMP=0x00100000000f8b65
- (_Bool)hasEntitlements:(unsigned long long)arg1;	// IMP=0x00100000000f8b52
- (id)fullEntitlements;	// IMP=0x00100000000f8b41
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000f8b05
- (unsigned long long)_valuesForEntitlement:(id)arg1 forConnection:(id)arg2;	// IMP=0x00100000000f892a
- (id)description;	// IMP=0x00100000000f8706
- (unsigned long long)_entitlementForName:(id)arg1;	// IMP=0x00100000000f85bb

@end

