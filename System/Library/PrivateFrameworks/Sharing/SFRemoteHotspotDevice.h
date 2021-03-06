//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>
{
    unsigned char _networkType;	// 8 = 0x8
    _Bool _osSupportsAutoHotspot;	// 9 = 0x9
    _Bool _supportsCompanionLink;	// 10 = 0xa
    _Bool _hasDuplicates;	// 11 = 0xb
    NSString *_deviceName;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
    NSNumber *_batteryLife;	// 32 = 0x20
    NSNumber *_signalStrength;	// 40 = 0x28
    NSString *_model;	// 48 = 0x30
    long long _group;	// 56 = 0x38
    NSData *_advertisementData;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039a25
- (void).cxx_destruct;	// IMP=0x0000000000039c14
@property(readonly, copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property _Bool hasDuplicates; // @synthesize hasDuplicates=_hasDuplicates;
@property(nonatomic) _Bool supportsCompanionLink; // @synthesize supportsCompanionLink=_supportsCompanionLink;
@property long long group; // @synthesize group=_group;
@property _Bool osSupportsAutoHotspot; // @synthesize osSupportsAutoHotspot=_osSupportsAutoHotspot;
@property(retain) NSString *model; // @synthesize model=_model;
@property(retain) NSNumber *signalStrength; // @synthesize signalStrength=_signalStrength;
@property unsigned char networkType; // @synthesize networkType=_networkType;
@property(retain) NSNumber *batteryLife; // @synthesize batteryLife=_batteryLife;
@property(copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;	// IMP=0x0000000000039ae9
- (unsigned char)networkTypeFromInfo:(unsigned int)arg1;	// IMP=0x0000000000039aba
- (id)signalStrengthFromInfo:(unsigned int)arg1;	// IMP=0x0000000000039a78
- (id)batteryLifeFromInfo:(unsigned int)arg1;	// IMP=0x0000000000039a2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039923
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000396f8
- (void)updateWithHotspotInfo:(unsigned int)arg1;	// IMP=0x000000000003967c
- (_Bool)componentsAreEqualTo:(id)arg1;	// IMP=0x00000000000394f3
- (unsigned long long)hash;	// IMP=0x00000000000394dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003944d
- (id)description;	// IMP=0x0000000000039325
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(CDStruct_56cc8428)arg3;	// IMP=0x000000000003917c

@end

