//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ASRSchemaASRIntermediateUtteranceInfoTier1
{
    NSString *_unrepairedPostItn;	// 8 = 0x8
    NSString *_phoneticMatchInput;	// 16 = 0x10
    NSString *_phoneticMatchOutput;	// 24 = 0x18
    _Bool _hasUnrepairedPostItn;	// 32 = 0x20
    _Bool _hasPhoneticMatchInput;	// 33 = 0x21
    _Bool _hasPhoneticMatchOutput;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x00000000000264ae
@property(nonatomic) _Bool hasPhoneticMatchOutput; // @synthesize hasPhoneticMatchOutput=_hasPhoneticMatchOutput;
@property(nonatomic) _Bool hasPhoneticMatchInput; // @synthesize hasPhoneticMatchInput=_hasPhoneticMatchInput;
@property(nonatomic) _Bool hasUnrepairedPostItn; // @synthesize hasUnrepairedPostItn=_hasUnrepairedPostItn;
@property(copy, nonatomic) NSString *phoneticMatchOutput; // @synthesize phoneticMatchOutput=_phoneticMatchOutput;
@property(copy, nonatomic) NSString *phoneticMatchInput; // @synthesize phoneticMatchInput=_phoneticMatchInput;
@property(copy, nonatomic) NSString *unrepairedPostItn; // @synthesize unrepairedPostItn=_unrepairedPostItn;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002623a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002617c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000025f72
- (unsigned long long)hash;	// IMP=0x0000000000025f05
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025b16
- (void)writeTo:(id)arg1;	// IMP=0x0000000000025a27
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000025a1a
- (void)deletePhoneticMatchOutput;	// IMP=0x0000000000025a06
- (void)deletePhoneticMatchInput;	// IMP=0x00000000000259dd
- (void)deleteUnrepairedPostItn;	// IMP=0x00000000000259b4
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030ec6a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030ec32

@end

