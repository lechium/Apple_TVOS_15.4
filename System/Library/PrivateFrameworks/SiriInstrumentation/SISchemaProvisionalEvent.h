//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaAnyEvent;

@interface SISchemaProvisionalEvent
{
    SISchemaAnyEvent *_anyEvent;	// 8 = 0x8
    NSString *_typeId;	// 16 = 0x10
    long long _version;	// 24 = 0x18
    struct {
        unsigned int version:1;
    } _has;	// 32 = 0x20
    _Bool _hasAnyEvent;	// 36 = 0x24
    _Bool _hasTypeId;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000002af94a
@property(nonatomic) _Bool hasTypeId; // @synthesize hasTypeId=_hasTypeId;
@property(nonatomic) _Bool hasAnyEvent; // @synthesize hasAnyEvent=_hasAnyEvent;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(retain, nonatomic) SISchemaAnyEvent *anyEvent; // @synthesize anyEvent=_anyEvent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002af6fa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002af63c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002af3ec
- (unsigned long long)hash;	// IMP=0x00000000002af37a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002af07c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002aef8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002aecda
- (void)deleteVersion;	// IMP=0x00000000002aecb0
@property(nonatomic) _Bool hasVersion;
- (void)deleteTypeId;	// IMP=0x00000000002aec56
- (void)deleteAnyEvent;	// IMP=0x00000000002aec2d
- (id)qualifiedMessageName;	// IMP=0x00000000002aec0b
- (int)getAnyEventType;	// IMP=0x00000000002aec00
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003380bf
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000338087

@end
