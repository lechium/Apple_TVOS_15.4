//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface NETSchemaNETNetworkInterface
{
    NSString *_name;	// 8 = 0x8
    int _connectionType;	// 16 = 0x10
    struct {
        unsigned int connectionType:1;
    } _has;	// 20 = 0x14
    _Bool _hasName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002502c1
@property(nonatomic) _Bool hasName; // @synthesize hasName=_hasName;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000025011e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000250060
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000024fd96
- (unsigned long long)hash;	// IMP=0x000000000024fd43
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024fb72
- (void)writeTo:(id)arg1;	// IMP=0x000000000024fadf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024f8c0
- (void)deleteConnectionType;	// IMP=0x000000000024f896
@property(nonatomic) _Bool hasConnectionType;
- (void)deleteName;	// IMP=0x000000000024f83d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331496

@end
