//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl <NSCopying, NSMutableCopying>
{
    NSMutableSet *_internalAccessories;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x00000000001b46c4
+ (_Bool)isAccessorySupported:(id)arg1;	// IMP=0x00000000001b464c
- (void).cxx_destruct;	// IMP=0x00000000001b427a
- (id)description;	// IMP=0x00000000001b4266
- (id)debugDescription;	// IMP=0x00000000001b424f
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000001b4103
- (id)shortDescription;	// IMP=0x00000000001b40e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b3f59
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b3ecb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b3ec0
@property(readonly, copy) NSArray *accessories;
- (id)initWithUser:(id)arg1;	// IMP=0x00000000001b3d82
- (id)initWithUser:(id)arg1 accessories:(id)arg2;	// IMP=0x00000000001b3cef

@end

