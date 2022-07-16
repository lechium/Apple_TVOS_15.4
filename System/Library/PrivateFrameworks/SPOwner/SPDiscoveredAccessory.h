//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSUUID, SPDiscoveredAccessoryMetadata, SPDiscoveredAccessoryProductInformation;

@interface SPDiscoveredAccessory : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isBatteryTooLow;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSData *_macAddress;	// 24 = 0x18
    SPDiscoveredAccessoryMetadata *_discoveredMetadata;	// 32 = 0x20
    SPDiscoveredAccessoryProductInformation *_productInformation;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e90c
- (void).cxx_destruct;	// IMP=0x000000000002ef21
@property(nonatomic) _Bool isBatteryTooLow; // @synthesize isBatteryTooLow=_isBatteryTooLow;
@property(copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation; // @synthesize productInformation=_productInformation;
@property(copy, nonatomic) SPDiscoveredAccessoryMetadata *discoveredMetadata; // @synthesize discoveredMetadata=_discoveredMetadata;
@property(copy, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000002ed8d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ec5d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ebaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ea2b
- (unsigned long long)hash;	// IMP=0x000000000002e9e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e914

@end
