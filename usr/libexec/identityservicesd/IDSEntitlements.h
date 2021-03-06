//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSEntitlements : NSObject
{
    struct _SpecificEntitlement *_specificEntitlements;	// 8 = 0x8
    char **_shrunkenServiceIdentifiers;	// 16 = 0x10
    unsigned short _serviceIdentifierCount;	// 24 = 0x18
    unsigned char _specificEntitlementCount;	// 26 = 0x1a
}

- (id)dictionaryRepresentation;	// IMP=0x00200000002c3200
- (_Bool)hasAnyEntitlementForService:(id)arg1;	// IMP=0x00100000002c2fd0
- (_Bool)hasAnyEntitlements;	// IMP=0x00100000002c2fa0
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x00100000002c2eb0
- (_Bool)hasService:(id)arg1 forEntitlement:(id)arg2;	// IMP=0x00100000002c2ae0
- (id)debugDescription;	// IMP=0x00100000002c2a70
- (void)dealloc;	// IMP=0x00100000002c2920
- (id)initWithEntitlements:(id)arg1;	// IMP=0x00100000002c1340

@end

