//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaRedactableString;

@interface SISchemaDialogOutput
{
    NSString *_viewID;	// 8 = 0x8
    SISchemaRedactableString *_spokenDialogOutput;	// 16 = 0x10
    SISchemaRedactableString *_displayedDialogOutput;	// 24 = 0x18
    _Bool _hasViewID;	// 32 = 0x20
    _Bool _hasSpokenDialogOutput;	// 33 = 0x21
    _Bool _hasDisplayedDialogOutput;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x00000000001233d5
@property(nonatomic) _Bool hasDisplayedDialogOutput; // @synthesize hasDisplayedDialogOutput=_hasDisplayedDialogOutput;
@property(nonatomic) _Bool hasSpokenDialogOutput; // @synthesize hasSpokenDialogOutput=_hasSpokenDialogOutput;
@property(nonatomic) _Bool hasViewID; // @synthesize hasViewID=_hasViewID;
@property(retain, nonatomic) SISchemaRedactableString *displayedDialogOutput; // @synthesize displayedDialogOutput=_displayedDialogOutput;
@property(retain, nonatomic) SISchemaRedactableString *spokenDialogOutput; // @synthesize spokenDialogOutput=_spokenDialogOutput;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012313e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000123080
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000122de4
- (unsigned long long)hash;	// IMP=0x0000000000122d77
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000122988
- (void)writeTo:(id)arg1;	// IMP=0x0000000000122864
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000122645
- (void)deleteDisplayedDialogOutput;	// IMP=0x0000000000122631
- (void)deleteSpokenDialogOutput;	// IMP=0x0000000000122608
- (void)deleteViewID;	// IMP=0x00000000001225df
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031fdb7
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031fd7f

@end
