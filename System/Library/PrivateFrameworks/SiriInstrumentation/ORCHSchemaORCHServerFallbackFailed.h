//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHServerFallbackFailed
{
    int _errorCode;	// 8 = 0x8
    CDStruct_70a7dc3e _has;	// 12 = 0xc
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027e0bf
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000027e001
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000027ded2
- (unsigned long long)hash;	// IMP=0x000000000027dea7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027de02
- (void)writeTo:(id)arg1;	// IMP=0x000000000027ddd7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027ddca
- (void)deleteErrorCode;	// IMP=0x000000000027dda0
@property(nonatomic) _Bool hasErrorCode;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033493b

@end

