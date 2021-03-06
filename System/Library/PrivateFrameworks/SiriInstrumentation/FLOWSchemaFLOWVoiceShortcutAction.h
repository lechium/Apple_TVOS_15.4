//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface FLOWSchemaFLOWVoiceShortcutAction
{
    NSString *_appId;	// 8 = 0x8
    NSString *_intentCategory;	// 16 = 0x10
    NSString *_intentName;	// 24 = 0x18
    NSString *_intentNLDomain;	// 32 = 0x20
    _Bool _hasAppId;	// 40 = 0x28
    _Bool _hasIntentCategory;	// 41 = 0x29
    _Bool _hasIntentName;	// 42 = 0x2a
    _Bool _hasIntentNLDomain;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x0000000000166355
@property(nonatomic) _Bool hasIntentNLDomain; // @synthesize hasIntentNLDomain=_hasIntentNLDomain;
@property(nonatomic) _Bool hasIntentName; // @synthesize hasIntentName=_hasIntentName;
@property(nonatomic) _Bool hasIntentCategory; // @synthesize hasIntentCategory=_hasIntentCategory;
@property(nonatomic) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(copy, nonatomic) NSString *intentNLDomain; // @synthesize intentNLDomain=_intentNLDomain;
@property(copy, nonatomic) NSString *intentName; // @synthesize intentName=_intentName;
@property(copy, nonatomic) NSString *intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000166037
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000165f79
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000165d08
- (unsigned long long)hash;	// IMP=0x0000000000165c84
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001657c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000165698
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016545c
- (void)deleteIntentNLDomain;	// IMP=0x0000000000165448
- (void)deleteIntentName;	// IMP=0x000000000016541f
- (void)deleteIntentCategory;	// IMP=0x00000000001653f6
- (void)deleteAppId;	// IMP=0x00000000001653cd
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032430a

@end

