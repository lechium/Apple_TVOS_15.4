//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MHSchemaMHAdMatchingStarted
{
    NSString *_modelVersion;	// 8 = 0x8
    _Bool _hasModelVersion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bdd0e
@property(nonatomic) _Bool hasModelVersion; // @synthesize hasModelVersion=_hasModelVersion;
@property(copy, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bdbf2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bdb34
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bd9f8
- (unsigned long long)hash;	// IMP=0x00000000001bd9db
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bd859
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bd7ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bd656
- (void)deleteModelVersion;	// IMP=0x00000000001bd642
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032956e

@end

