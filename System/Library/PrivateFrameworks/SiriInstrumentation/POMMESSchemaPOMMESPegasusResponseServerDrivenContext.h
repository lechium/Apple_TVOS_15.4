//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext
{
    NSArray *_catIds;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002add18
@property(copy, nonatomic) NSArray *catIds; // @synthesize catIds=_catIds;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ada9d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ad9df
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ad8a3
- (unsigned long long)hash;	// IMP=0x00000000002ad886
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ad704
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ad5d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ad5c7
- (id)catIdAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002ad5aa
- (unsigned long long)catIdCount;	// IMP=0x00000000002ad58d
- (void)addCatId:(id)arg1;	// IMP=0x00000000002ad513
- (void)deleteCatId;	// IMP=0x00000000002ad501
- (void)clearCatId;	// IMP=0x00000000002ad4e4
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000337efc

@end

