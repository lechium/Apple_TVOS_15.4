//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHAssistantDaemonAudioFanInfo
{
    unsigned int _fanId;	// 8 = 0x8
    int _currentSpeed;	// 12 = 0xc
    int _targetSpeed;	// 16 = 0x10
    struct {
        unsigned int fanId:1;
        unsigned int currentSpeed:1;
        unsigned int targetSpeed:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int targetSpeed; // @synthesize targetSpeed=_targetSpeed;
@property(nonatomic) int currentSpeed; // @synthesize currentSpeed=_currentSpeed;
@property(nonatomic) unsigned int fanId; // @synthesize fanId=_fanId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c0f9e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001c0ee0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001c0ced
- (unsigned long long)hash;	// IMP=0x00000000001c0c8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c0b6f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c0adf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c07be
- (void)deleteTargetSpeed;	// IMP=0x00000000001c0794
@property(nonatomic) _Bool hasTargetSpeed;
- (void)deleteCurrentSpeed;	// IMP=0x00000000001c071f
@property(nonatomic) _Bool hasCurrentSpeed;
- (void)deleteFanId;	// IMP=0x00000000001c06ac
@property(nonatomic) _Bool hasFanId;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003298b3

@end
