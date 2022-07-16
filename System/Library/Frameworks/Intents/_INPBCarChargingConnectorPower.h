//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCarChargingConnectorPower-Protocol.h>

@class NSString, _INPBPower;

@interface _INPBCarChargingConnectorPower : PBCodable <_INPBCarChargingConnectorPower, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int chargingConnector:1;
    } _has;	// 8 = 0x8
    int _chargingConnector;	// 12 = 0xc
    _INPBPower *_maximumPower;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b625b
- (void).cxx_destruct;	// IMP=0x00000000004b6001
@property(retain, nonatomic) _INPBPower *maximumPower; // @synthesize maximumPower=_maximumPower;
@property(nonatomic) int chargingConnector; // @synthesize chargingConnector=_chargingConnector;
- (id)dictionaryRepresentation;	// IMP=0x00000000004b5e44
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b5bfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b5b58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b5ac6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b59c7
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b5914
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b5907
@property(readonly, nonatomic) _Bool hasMaximumPower;
- (int)StringAsChargingConnector:(id)arg1;	// IMP=0x00000000004b57a0
- (id)chargingConnectorAsString:(int)arg1;	// IMP=0x00000000004b56eb
@property(nonatomic) _Bool hasChargingConnector;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
