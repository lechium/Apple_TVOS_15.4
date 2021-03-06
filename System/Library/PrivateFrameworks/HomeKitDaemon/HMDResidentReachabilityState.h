//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>
{
    _Bool _isReachable;	// 8 = 0x8
    NSUUID *_residentDeviceIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006857ca
- (void).cxx_destruct;	// IMP=0x00000000006857b7
@property(readonly) _Bool isReachable; // @synthesize isReachable=_isReachable;
@property(readonly, copy) NSUUID *residentDeviceIdentifier; // @synthesize residentDeviceIdentifier=_residentDeviceIdentifier;
- (id)attributeDescriptions;	// IMP=0x0000000000685661
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006855a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000685505
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006854fa
- (unsigned long long)hash;	// IMP=0x0000000000685497
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000685396
- (id)initWithResidentDeviceIdentifier:(id)arg1 isReachable:(_Bool)arg2;	// IMP=0x000000000068530a

@end

