//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRUserEditExperimentEnded, DODMLASRSchemaDODMLASRUserEditExperimentStarted, NSData;

@interface DODMLASRSchemaDODMLASRUserEditExperimentContext
{
    DODMLASRSchemaDODMLASRUserEditExperimentStarted *_startedOrChanged;	// 8 = 0x8
    DODMLASRSchemaDODMLASRUserEditExperimentEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010be71
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000010bc96
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000010bbd8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000010b9a3
- (unsigned long long)hash;	// IMP=0x000000000010b956
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010b694
- (void)writeTo:(id)arg1;	// IMP=0x000000000010b5b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010af7f
- (void)deleteEnded;	// IMP=0x000000000010af4c
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000010ae80
@property(retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031e32c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031e2f4

@end
