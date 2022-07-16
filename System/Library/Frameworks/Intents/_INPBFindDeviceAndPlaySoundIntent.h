//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFindDeviceAndPlaySoundIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBFindDeviceAndPlaySoundIntent : PBCodable <_INPBFindDeviceAndPlaySoundIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isStopRequest:1;
    } _has;	// 8 = 0x8
    _Bool _isStopRequest;	// 12 = 0xc
    NSArray *_devices;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041b5b8
+ (Class)deviceType;	// IMP=0x000000000041b5a7
- (void).cxx_destruct;	// IMP=0x000000000041b2c3
@property(nonatomic) _Bool isStopRequest; // @synthesize isStopRequest=_isStopRequest;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)dictionaryRepresentation;	// IMP=0x000000000041af84
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041abf1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041aaff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041aa6d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041a96e
- (void)writeTo:(id)arg1;	// IMP=0x000000000041a7a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041a793
@property(nonatomic) _Bool hasIsStopRequest;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)deviceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000041a708
@property(readonly, nonatomic) unsigned long long devicesCount;
- (void)addDevice:(id)arg1;	// IMP=0x000000000041a671
- (void)clearDevices;	// IMP=0x000000000041a654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

