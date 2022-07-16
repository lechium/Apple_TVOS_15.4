//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaSiriResponseContext
{
    NSString *_dialogPhase;	// 8 = 0x8
    int _presentationType;	// 16 = 0x10
    int _siriResponseMode;	// 20 = 0x14
    struct {
        unsigned int presentationType:1;
        unsigned int siriResponseMode:1;
    } _has;	// 24 = 0x18
    _Bool _hasDialogPhase;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000002c8dae
@property(nonatomic) _Bool hasDialogPhase; // @synthesize hasDialogPhase=_hasDialogPhase;
@property(nonatomic) int siriResponseMode; // @synthesize siriResponseMode=_siriResponseMode;
@property(nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property(copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002c8b9a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002c8adc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002c889d
- (unsigned long long)hash;	// IMP=0x00000000002c882d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c8611
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c855d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c82a9
- (void)deleteSiriResponseMode;	// IMP=0x00000000002c827f
@property(nonatomic) _Bool hasSiriResponseMode;
- (void)deletePresentationType;	// IMP=0x00000000002c820c
@property(nonatomic) _Bool hasPresentationType;
- (void)deleteDialogPhase;	// IMP=0x00000000002c81b3
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000339dfe

@end

