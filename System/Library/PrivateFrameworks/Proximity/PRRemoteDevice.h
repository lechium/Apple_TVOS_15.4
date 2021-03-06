//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface PRRemoteDevice : NSObject <NSSecureCoding, NSCopying>
{
    long long _deviceType;	// 8 = 0x8
    NSData *_btAdvAddress;	// 16 = 0x10
    NSData *_roseMACAddress;	// 24 = 0x18
    NSUUID *_UUID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001c6f8
- (void).cxx_destruct;	// IMP=0x000000000001cd88
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(copy, nonatomic) NSData *roseMACAddress; // @synthesize roseMACAddress=_roseMACAddress;
@property(copy, nonatomic) NSData *btAdvAddress; // @synthesize btAdvAddress=_btAdvAddress;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cae8
- (_Bool)compareField:(id)arg1 to:(id)arg2;	// IMP=0x000000000001ca58
- (id)description;	// IMP=0x000000000001c99f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c908
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c861
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c700
- (id)initWithRoseMACAddress:(id)arg1;	// IMP=0x000000000001c5da
- (id)initWithBeaconUUID:(id)arg1;	// IMP=0x000000000001c4c1
- (id)initWithCompanionUUID:(id)arg1;	// IMP=0x000000000001c3a8
- (id)initWithTestCompanionBtAdvAddress:(id)arg1;	// IMP=0x000000000001c28a
- (id)initWithBTAdvAddress:(id)arg1;	// IMP=0x000000000001c16c

@end

