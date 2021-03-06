//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded, CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted, NSData;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationContext
{
    CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted *_startedOrChanged;	// 8 = 0x8
    CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ab278
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000ab09d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000aafdf
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000aadaa
- (unsigned long long)hash;	// IMP=0x00000000000aad5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aaa9b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000aa9b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000aa366
- (void)deleteEnded;	// IMP=0x00000000000aa333
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000000aa265
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000318bab
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000318b73

@end

