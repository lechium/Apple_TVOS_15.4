//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface RRSchemaRRGroupIdentifier
{
    NSString *_groupId;	// 8 = 0x8
    unsigned int _seq;	// 16 = 0x10
    struct {
        unsigned int seq:1;
    } _has;	// 20 = 0x14
    _Bool _hasGroupId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b931a
@property(nonatomic) _Bool hasGroupId; // @synthesize hasGroupId=_hasGroupId;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002b9177
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002b90b9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b8f1a
- (unsigned long long)hash;	// IMP=0x00000000002b8ec8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b8cf7
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b8c64
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b8c57
- (void)deleteSeq;	// IMP=0x00000000002b8c2d
@property(nonatomic) _Bool hasSeq;
- (void)deleteGroupId;	// IMP=0x00000000002b8bd4
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000338df1

@end

