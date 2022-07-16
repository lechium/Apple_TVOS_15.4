//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MTSchemaMTLocalePair
{
    int _sourceLocale;	// 8 = 0x8
    int _targetLocale;	// 12 = 0xc
    struct {
        unsigned int sourceLocale:1;
        unsigned int targetLocale:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int targetLocale; // @synthesize targetLocale=_targetLocale;
@property(nonatomic) int sourceLocale; // @synthesize sourceLocale=_sourceLocale;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000022cdee
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000022cd30
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000022c44e
- (unsigned long long)hash;	// IMP=0x000000000022c408
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022c319
- (void)writeTo:(id)arg1;	// IMP=0x000000000022c2a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022c04a
- (void)deleteTargetLocale;	// IMP=0x000000000022c020
@property(nonatomic) _Bool hasTargetLocale;
- (void)deleteSourceLocale;	// IMP=0x000000000022bfad
@property(nonatomic) _Bool hasSourceLocale;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032fd95

@end
