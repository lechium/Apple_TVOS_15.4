//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaSiriResponseContext;

@interface SISchemaUUFRSaid
{
    NSString *_dialogIdentifier;	// 8 = 0x8
    SISchemaSiriResponseContext *_siriResponseContext;	// 16 = 0x10
    NSString *_aceViewID;	// 24 = 0x18
    NSString *_aceViewClass;	// 32 = 0x20
    _Bool _hasDialogIdentifier;	// 40 = 0x28
    _Bool _hasSiriResponseContext;	// 41 = 0x29
    _Bool _hasAceViewID;	// 42 = 0x2a
    _Bool _hasAceViewClass;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x0000000000304571
@property(nonatomic) _Bool hasAceViewClass; // @synthesize hasAceViewClass=_hasAceViewClass;
@property(nonatomic) _Bool hasAceViewID; // @synthesize hasAceViewID=_hasAceViewID;
@property(nonatomic) _Bool hasSiriResponseContext; // @synthesize hasSiriResponseContext=_hasSiriResponseContext;
@property(nonatomic) _Bool hasDialogIdentifier; // @synthesize hasDialogIdentifier=_hasDialogIdentifier;
@property(copy, nonatomic) NSString *aceViewClass; // @synthesize aceViewClass=_aceViewClass;
@property(copy, nonatomic) NSString *aceViewID; // @synthesize aceViewID=_aceViewID;
@property(retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // @synthesize siriResponseContext=_siriResponseContext;
@property(copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000304241
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000304183
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000303ec9
- (unsigned long long)hash;	// IMP=0x0000000000303e45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000303989
- (void)writeTo:(id)arg1;	// IMP=0x000000000030383f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000303832
- (void)deleteAceViewClass;	// IMP=0x000000000030381e
- (void)deleteAceViewID;	// IMP=0x00000000003037f5
- (void)deleteSiriResponseContext;	// IMP=0x00000000003037cc
- (void)deleteDialogIdentifier;	// IMP=0x00000000003037a3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033df6a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033df32

@end
