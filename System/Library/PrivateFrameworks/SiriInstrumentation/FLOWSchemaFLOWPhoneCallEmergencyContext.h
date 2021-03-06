//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWPhoneCallEmergencyContext
{
    int _emergencyCallType;	// 8 = 0x8
    struct {
        unsigned int emergencyCallType:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int emergencyCallType; // @synthesize emergencyCallType=_emergencyCallType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000015721b
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000015715d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000157033
- (unsigned long long)hash;	// IMP=0x0000000000157008
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000156f63
- (void)writeTo:(id)arg1;	// IMP=0x0000000000156f38
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000156f2b
- (void)deleteEmergencyCallType;	// IMP=0x0000000000156f01
@property(nonatomic) _Bool hasEmergencyCallType;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000323386

@end

