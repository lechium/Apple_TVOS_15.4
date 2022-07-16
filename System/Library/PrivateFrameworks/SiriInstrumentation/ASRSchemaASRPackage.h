//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRRecognitionResult, NSData;

@interface ASRSchemaASRPackage
{
    ASRSchemaASRRecognitionResult *_rawRecognition;	// 8 = 0x8
    ASRSchemaASRRecognitionResult *_postItn;	// 16 = 0x10
    _Bool _hasRawRecognition;	// 24 = 0x18
    _Bool _hasPostItn;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000002b779
@property(nonatomic) _Bool hasPostItn; // @synthesize hasPostItn=_hasPostItn;
@property(nonatomic) _Bool hasRawRecognition; // @synthesize hasRawRecognition=_hasRawRecognition;
@property(retain, nonatomic) ASRSchemaASRRecognitionResult *postItn; // @synthesize postItn=_postItn;
@property(retain, nonatomic) ASRSchemaASRRecognitionResult *rawRecognition; // @synthesize rawRecognition=_rawRecognition;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002b585
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002b4c7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002b292
- (unsigned long long)hash;	// IMP=0x000000000002b245
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002af88
- (void)writeTo:(id)arg1;	// IMP=0x000000000002aea5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a9dc
- (void)deletePostItn;	// IMP=0x000000000002a9c8
- (void)deleteRawRecognition;	// IMP=0x000000000002a99f
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000030f2c4
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030f28c

@end

