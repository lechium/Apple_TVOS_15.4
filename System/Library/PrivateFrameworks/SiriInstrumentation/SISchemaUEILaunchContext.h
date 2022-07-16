//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUEILaunchEnded, SISchemaUEILaunchStarted;

@interface SISchemaUEILaunchContext
{
    SISchemaUEILaunchStarted *_startedOrChanged;	// 8 = 0x8
    SISchemaUEILaunchEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002e4b12
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e4937
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e4879
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e4644
- (unsigned long long)hash;	// IMP=0x00000000002e45f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e4335
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e4252
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e3ea3
- (void)deleteEnded;	// IMP=0x00000000002e3e70
@property(retain, nonatomic) SISchemaUEILaunchEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002e3da4
@property(retain, nonatomic) SISchemaUEILaunchStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033bd07
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033bccf

@end

