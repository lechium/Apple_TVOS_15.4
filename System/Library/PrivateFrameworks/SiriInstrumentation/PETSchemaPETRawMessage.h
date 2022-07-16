//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PETSchemaPETRawMessage
{
    unsigned int _type_id;	// 8 = 0x8
    NSData *_raw_bytes;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    struct {
        unsigned int type_id:1;
    } _has;	// 32 = 0x20
    _Bool _hasRaw_bytes;	// 36 = 0x24
    _Bool _hasName;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x000000000028a6c9
@property(nonatomic) _Bool hasName; // @synthesize hasName=_hasName;
@property(nonatomic) _Bool hasRaw_bytes; // @synthesize hasRaw_bytes=_hasRaw_bytes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSData *raw_bytes; // @synthesize raw_bytes=_raw_bytes;
@property(nonatomic) unsigned int type_id; // @synthesize type_id=_type_id;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000028a46b
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000028a3ad
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000028a15c
- (unsigned long long)hash;	// IMP=0x000000000028a0dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000289dfa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000289d26
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000289d19
- (void)deleteName;	// IMP=0x0000000000289d05
- (void)deleteRaw_bytes;	// IMP=0x0000000000289cdc
- (void)deleteType_id;	// IMP=0x0000000000289c9d
@property(nonatomic) _Bool hasType_id;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033534a

@end

