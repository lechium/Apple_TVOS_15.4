//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LCServiceLoggingConfiguration, NSData;

@interface LCServiceConfigurationResponse
{
    LCServiceLoggingConfiguration *_configuration;	// 8 = 0x8
    _Bool _hasConfiguration;	// 16 = 0x10
    unsigned long long _whichResponse;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e571f
@property(nonatomic) _Bool hasConfiguration; // @synthesize hasConfiguration=_hasConfiguration;
@property(readonly, nonatomic) unsigned long long whichResponse; // @synthesize whichResponse=_whichResponse;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e55f1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e5533
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e53ae
- (unsigned long long)hash;	// IMP=0x00000000000e5391
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e51eb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e5164
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e4c08
- (void)deleteConfiguration;	// IMP=0x00000000000e4bd5
@property(retain, nonatomic) LCServiceLoggingConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031c179
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031c141

@end

