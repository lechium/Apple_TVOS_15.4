//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFindDeviceAndPlaySoundIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <_INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_devicesFounds;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041a618
+ (Class)devicesFoundType;	// IMP=0x000000000041a607
- (void).cxx_destruct;	// IMP=0x000000000041a445
@property(copy, nonatomic) NSArray *devicesFounds; // @synthesize devicesFounds=_devicesFounds;
- (id)dictionaryRepresentation;	// IMP=0x000000000041a218
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041a079
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000419ff7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000419f65
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000419e66
- (void)writeTo:(id)arg1;	// IMP=0x0000000000419d36
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000419d29
- (id)devicesFoundAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000419d0c
@property(readonly, nonatomic) unsigned long long devicesFoundsCount;
- (void)addDevicesFound:(id)arg1;	// IMP=0x0000000000419c75
- (void)clearDevicesFounds;	// IMP=0x0000000000419c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
