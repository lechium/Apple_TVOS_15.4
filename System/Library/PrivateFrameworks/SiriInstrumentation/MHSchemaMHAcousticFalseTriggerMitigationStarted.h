//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MHSchemaMHAcousticFalseTriggerMitigationStarted
{
    NSString *_modelVersion;	// 8 = 0x8
    int _mitigationType;	// 16 = 0x10
    struct {
        unsigned int mitigationType:1;
    } _has;	// 20 = 0x14
    _Bool _hasModelVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bc0e2
@property(nonatomic) _Bool hasModelVersion; // @synthesize hasModelVersion=_hasModelVersion;
@property(nonatomic) int mitigationType; // @synthesize mitigationType=_mitigationType;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bbf3f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bbe81
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bbced
- (unsigned long long)hash;	// IMP=0x00000000001bbc9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bbac9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bba36
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bba29
- (void)deleteMitigationType;	// IMP=0x00000000001bb9ff
@property(nonatomic) _Bool hasMitigationType;
- (void)deleteModelVersion;	// IMP=0x00000000001bb9a6
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003294c6

@end

