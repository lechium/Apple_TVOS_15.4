//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDAccountHandle, NSData, NSString, NSUUID, _HMDDeviceHandle;

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding>
{
    _HMDDeviceHandle *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024bb43
+ (id)deviceHandleForDeviceIdentifier:(id)arg1;	// IMP=0x000000000024bab8
+ (id)deviceHandleForDestination:(id)arg1;	// IMP=0x000000000024b86c
- (void).cxx_destruct;	// IMP=0x000000000024b859
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024b826
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024b799
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024b78e
- (_Bool)matchesPushToken:(id)arg1;	// IMP=0x000000000024b6b8
@property(readonly, copy) NSData *pushToken;
@property(readonly, copy) NSString *destination;
@property(readonly, copy) HMDAccountHandle *accountHandle;
@property(readonly, getter=isGlobal) _Bool global;
@property(readonly, getter=isLocal) _Bool local;
@property(readonly, copy) NSUUID *identifier;
- (id)attributeDescriptions;	// IMP=0x000000000024b352
- (id)shortDescription;	// IMP=0x000000000024b290
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024b1d5
- (unsigned long long)hash;	// IMP=0x000000000024b1af
- (id)initWithInternal:(id)arg1;	// IMP=0x000000000024b059
- (id)init;	// IMP=0x000000000024afb1

@end

