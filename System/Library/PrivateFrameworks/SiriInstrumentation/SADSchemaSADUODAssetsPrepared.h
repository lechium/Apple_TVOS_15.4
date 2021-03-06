//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SADSchemaSADUODAssetsPrepared
{
    int _locale;	// 8 = 0x8
    unsigned int _elapsedSeconds;	// 12 = 0xc
    struct {
        unsigned int locale:1;
        unsigned int elapsedSeconds:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elapsedSeconds; // @synthesize elapsedSeconds=_elapsedSeconds;
@property(nonatomic) int locale; // @synthesize locale=_locale;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002c19b2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002c18f4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002c13b3
- (unsigned long long)hash;	// IMP=0x00000000002c136e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c127f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c120e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c1201
- (void)deleteElapsedSeconds;	// IMP=0x00000000002c11d7
@property(nonatomic) _Bool hasElapsedSeconds;
- (void)deleteLocale;	// IMP=0x00000000002c1164
@property(nonatomic) _Bool hasLocale;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003397c6

@end

