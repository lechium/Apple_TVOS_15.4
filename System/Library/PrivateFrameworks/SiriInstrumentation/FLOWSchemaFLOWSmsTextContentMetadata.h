//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWKeyboardUsageMetadata, NSData;

@interface FLOWSchemaFLOWSmsTextContentMetadata
{
    unsigned int _messageCharLength;	// 8 = 0x8
    unsigned int _messageWordLength;	// 12 = 0xc
    FLOWSchemaFLOWKeyboardUsageMetadata *_flowKeyboardUsageMetadata;	// 16 = 0x10
    _Bool _isPunctuationUsed;	// 24 = 0x18
    _Bool _isPayloadMultilingual;	// 25 = 0x19
    struct {
        unsigned int messageCharLength:1;
        unsigned int messageWordLength:1;
        unsigned int isPunctuationUsed:1;
        unsigned int isPayloadMultilingual:1;
    } _has;	// 28 = 0x1c
    _Bool _hasFlowKeyboardUsageMetadata;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016015f
@property(nonatomic) _Bool hasFlowKeyboardUsageMetadata; // @synthesize hasFlowKeyboardUsageMetadata=_hasFlowKeyboardUsageMetadata;
@property(nonatomic) _Bool isPayloadMultilingual; // @synthesize isPayloadMultilingual=_isPayloadMultilingual;
@property(nonatomic) _Bool isPunctuationUsed; // @synthesize isPunctuationUsed=_isPunctuationUsed;
@property(retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata; // @synthesize flowKeyboardUsageMetadata=_flowKeyboardUsageMetadata;
@property(nonatomic) unsigned int messageWordLength; // @synthesize messageWordLength=_messageWordLength;
@property(nonatomic) unsigned int messageCharLength; // @synthesize messageCharLength=_messageCharLength;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000015fe43
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000015fd85
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000015fa83
- (unsigned long long)hash;	// IMP=0x000000000015f9c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015f739
- (void)writeTo:(id)arg1;	// IMP=0x000000000015f620
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015f1f9
- (void)deleteIsPayloadMultilingual;	// IMP=0x000000000015f1cf
@property(nonatomic) _Bool hasIsPayloadMultilingual;
- (void)deleteIsPunctuationUsed;	// IMP=0x000000000015f15a
@property(nonatomic) _Bool hasIsPunctuationUsed;
- (void)deleteFlowKeyboardUsageMetadata;	// IMP=0x000000000015f0fb
- (void)deleteMessageWordLength;	// IMP=0x000000000015f0bc
@property(nonatomic) _Bool hasMessageWordLength;
- (void)deleteMessageCharLength;	// IMP=0x000000000015f049
@property(nonatomic) _Bool hasMessageCharLength;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000323c5e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000323c26

@end

