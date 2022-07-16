//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LTSchemaLocaleConfidence
{
    NSString *_locale;	// 8 = 0x8
    unsigned int _confidence;	// 16 = 0x10
    CDStruct_81d693a7 _has;	// 20 = 0x14
    _Bool _hasLocale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a7454
@property(nonatomic) _Bool hasLocale; // @synthesize hasLocale=_hasLocale;
@property(nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a72b1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001a71f3
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a7057
- (unsigned long long)hash;	// IMP=0x00000000001a7005
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a6e34
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a6da1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a6d94
- (void)deleteConfidence;	// IMP=0x00000000001a6d6a
@property(nonatomic) _Bool hasConfidence;
- (void)deleteLocale;	// IMP=0x00000000001a6d11
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000327efc

@end
