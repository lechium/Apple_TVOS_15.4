//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ORCHSchemaORCHExecutionFailed
{
    NSString *_errorString;	// 8 = 0x8
    _Bool _hasErrorString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000274d42
@property(nonatomic) _Bool hasErrorString; // @synthesize hasErrorString=_hasErrorString;
@property(copy, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000274c26
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000274b68
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000274a2c
- (unsigned long long)hash;	// IMP=0x0000000000274a0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027488d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000274820
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000274813
- (void)deleteErrorString;	// IMP=0x00000000002747ff
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333d72

@end

