//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaCDMSpanMatcherStarted
{
    int _name;	// 8 = 0x8
    CDStruct_39a9b417 _has;	// 12 = 0xc
}

@property(nonatomic) int name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000086c66
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000086ba8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000086a17
- (unsigned long long)hash;	// IMP=0x00000000000869ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086947
- (void)writeTo:(id)arg1;	// IMP=0x000000000008691c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008690f
- (void)deleteName;	// IMP=0x00000000000868e5
@property(nonatomic) _Bool hasName;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000315286

@end
