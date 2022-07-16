//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPPoiTriggerEvent : PBCodable <NSCopying>
{
    unsigned long long _muid;	// 8 = 0x8
    double _triggerTimestamp;	// 16 = 0x10
    int _providerIdentifier;	// 24 = 0x18
    int _triggerSubType;	// 28 = 0x1c
    int _triggerType;	// 32 = 0x20
    struct {
        unsigned int triggerTimestamp:1;
        unsigned int providerIdentifier:1;
        unsigned int triggerSubType:1;
        unsigned int triggerType:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) int triggerSubType; // @synthesize triggerSubType=_triggerSubType;
@property(nonatomic) double triggerTimestamp; // @synthesize triggerTimestamp=_triggerTimestamp;
@property(nonatomic) int providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004b999
- (unsigned long long)hash;	// IMP=0x000000000004b7fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b6eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b629
- (void)copyTo:(id)arg1;	// IMP=0x000000000004b58a
- (void)writeTo:(id)arg1;	// IMP=0x000000000004b4c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004b4b4
- (id)dictionaryRepresentation;	// IMP=0x000000000004b25c
- (id)description;	// IMP=0x000000000004b1ad
@property(nonatomic) _Bool hasTriggerSubType;
@property(nonatomic) _Bool hasTriggerTimestamp;
- (int)StringAsTriggerType:(id)arg1;	// IMP=0x000000000004b050
- (id)triggerTypeAsString:(int)arg1;	// IMP=0x000000000004afc6
@property(nonatomic) _Bool hasTriggerType;
@property(nonatomic) int triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool hasProviderIdentifier;

@end

