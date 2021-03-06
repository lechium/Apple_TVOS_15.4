//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SUTSchemaTestSessionInfoItem
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    _Bool _hasName;	// 24 = 0x18
    _Bool _hasValue;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000002e210e
@property(nonatomic) _Bool hasValue; // @synthesize hasValue=_hasValue;
@property(nonatomic) _Bool hasName; // @synthesize hasName=_hasName;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e1f3e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e1e80
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e1cdd
- (unsigned long long)hash;	// IMP=0x00000000002e1c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e19d3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e1925
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e1918
- (void)deleteValue;	// IMP=0x00000000002e1904
- (void)deleteName;	// IMP=0x00000000002e18db
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033b9f1

@end

