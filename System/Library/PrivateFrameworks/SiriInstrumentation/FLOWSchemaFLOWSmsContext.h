//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWLanguageConfidenceMatrix, FLOWSchemaFLOWSmsAudioContext, FLOWSchemaFLOWSmsTextContext, FLOWSchemaFLOWTextMessageLength, NSArray, NSData;

@interface FLOWSchemaFLOWSmsContext
{
    int _messageType;	// 8 = 0x8
    _Bool _emojiUsed;	// 12 = 0xc
    _Bool _keyboardUsed;	// 13 = 0xd
    NSArray *_recipientTypes;	// 16 = 0x10
    unsigned int _messageDurationMs;	// 24 = 0x18
    FLOWSchemaFLOWTextMessageLength *_textMessageLength;	// 32 = 0x20
    FLOWSchemaFLOWSmsTextContext *_textContext;	// 40 = 0x28
    FLOWSchemaFLOWSmsAudioContext *_audioContext;	// 48 = 0x30
    NSArray *_personTypes;	// 56 = 0x38
    NSArray *_readMessageTypes;	// 64 = 0x40
    NSArray *_isMultiLinguals;	// 72 = 0x48
    NSArray *_isReadables;	// 80 = 0x50
    NSArray *_isGroupMessages;	// 88 = 0x58
    FLOWSchemaFLOWLanguageConfidenceMatrix *_languageConfidenceMatrix;	// 96 = 0x60
    struct {
        unsigned int messageType:1;
        unsigned int emojiUsed:1;
        unsigned int keyboardUsed:1;
    } _has;	// 104 = 0x68
    _Bool _hasMessageDurationMs;	// 108 = 0x6c
    _Bool _hasTextMessageLength;	// 109 = 0x6d
    _Bool _hasTextContext;	// 110 = 0x6e
    _Bool _hasAudioContext;	// 111 = 0x6f
    _Bool _hasLanguageConfidenceMatrix;	// 112 = 0x70
    unsigned long long _whichMessagesize;	// 120 = 0x78
    unsigned long long _whichMessagecontext;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000015ef4b
@property(nonatomic) _Bool hasLanguageConfidenceMatrix; // @synthesize hasLanguageConfidenceMatrix=_hasLanguageConfidenceMatrix;
@property(nonatomic) _Bool hasAudioContext; // @synthesize hasAudioContext=_hasAudioContext;
@property(nonatomic) _Bool hasTextContext; // @synthesize hasTextContext=_hasTextContext;
@property(nonatomic) _Bool hasTextMessageLength; // @synthesize hasTextMessageLength=_hasTextMessageLength;
@property(nonatomic) _Bool hasMessageDurationMs; // @synthesize hasMessageDurationMs=_hasMessageDurationMs;
@property(retain, nonatomic) FLOWSchemaFLOWLanguageConfidenceMatrix *languageConfidenceMatrix; // @synthesize languageConfidenceMatrix=_languageConfidenceMatrix;
@property(copy, nonatomic) NSArray *isGroupMessages; // @synthesize isGroupMessages=_isGroupMessages;
@property(copy, nonatomic) NSArray *isReadables; // @synthesize isReadables=_isReadables;
@property(copy, nonatomic) NSArray *isMultiLinguals; // @synthesize isMultiLinguals=_isMultiLinguals;
@property(copy, nonatomic) NSArray *readMessageTypes; // @synthesize readMessageTypes=_readMessageTypes;
@property(copy, nonatomic) NSArray *personTypes; // @synthesize personTypes=_personTypes;
@property(copy, nonatomic) NSArray *recipientTypes; // @synthesize recipientTypes=_recipientTypes;
@property(nonatomic) _Bool keyboardUsed; // @synthesize keyboardUsed=_keyboardUsed;
@property(nonatomic) _Bool emojiUsed; // @synthesize emojiUsed=_emojiUsed;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) unsigned long long whichMessagecontext; // @synthesize whichMessagecontext=_whichMessagecontext;
@property(readonly, nonatomic) unsigned long long whichMessagesize; // @synthesize whichMessagesize=_whichMessagesize;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000015dfa6
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000015dee8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000015d6cc
- (unsigned long long)hash;	// IMP=0x000000000015d50c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015c901
- (void)writeTo:(id)arg1;	// IMP=0x000000000015c0ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015bc28
- (void)deleteLanguageConfidenceMatrix;	// IMP=0x000000000015bc14
- (_Bool)isGroupMessageAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015bbb0
- (unsigned long long)isGroupMessageCount;	// IMP=0x000000000015bb93
- (void)addIsGroupMessage:(_Bool)arg1;	// IMP=0x000000000015bafc
- (void)deleteIsGroupMessage;	// IMP=0x000000000015baea
- (void)clearIsGroupMessage;	// IMP=0x000000000015bacd
- (_Bool)isReadableAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015ba7e
- (unsigned long long)isReadableCount;	// IMP=0x000000000015ba61
- (void)addIsReadable:(_Bool)arg1;	// IMP=0x000000000015b9ca
- (void)deleteIsReadable;	// IMP=0x000000000015b9b8
- (void)clearIsReadable;	// IMP=0x000000000015b99b
- (_Bool)isMultiLingualAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b94c
- (unsigned long long)isMultiLingualCount;	// IMP=0x000000000015b92f
- (void)addIsMultiLingual:(_Bool)arg1;	// IMP=0x000000000015b898
- (void)deleteIsMultiLingual;	// IMP=0x000000000015b886
- (void)clearIsMultiLingual;	// IMP=0x000000000015b869
- (int)readMessageTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b81a
- (unsigned long long)readMessageTypeCount;	// IMP=0x000000000015b7fd
- (void)addReadMessageType:(int)arg1;	// IMP=0x000000000015b767
- (void)deleteReadMessageType;	// IMP=0x000000000015b755
- (void)clearReadMessageType;	// IMP=0x000000000015b738
- (int)personTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b6e9
- (unsigned long long)personTypeCount;	// IMP=0x000000000015b6cc
- (void)addPersonType:(int)arg1;	// IMP=0x000000000015b636
- (void)deletePersonType;	// IMP=0x000000000015b624
- (void)clearPersonType;	// IMP=0x000000000015b607
- (void)deleteAudioContext;	// IMP=0x000000000015b5d4
@property(retain, nonatomic) FLOWSchemaFLOWSmsAudioContext *audioContext; // @synthesize audioContext=_audioContext;
- (void)deleteTextContext;	// IMP=0x000000000015b506
@property(retain, nonatomic) FLOWSchemaFLOWSmsTextContext *textContext; // @synthesize textContext=_textContext;
- (void)deleteTextMessageLength;	// IMP=0x000000000015b439
@property(retain, nonatomic) FLOWSchemaFLOWTextMessageLength *textMessageLength; // @synthesize textMessageLength=_textMessageLength;
- (void)deleteMessageDurationMs;	// IMP=0x000000000015b3a6
@property(nonatomic) unsigned int messageDurationMs; // @synthesize messageDurationMs=_messageDurationMs;
- (int)recipientTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b2f2
- (unsigned long long)recipientTypeCount;	// IMP=0x000000000015b2d5
- (void)addRecipientType:(int)arg1;	// IMP=0x000000000015b23f
- (void)deleteRecipientType;	// IMP=0x000000000015b22d
- (void)clearRecipientType;	// IMP=0x000000000015b210
- (void)deleteKeyboardUsed;	// IMP=0x000000000015b1e6
@property(nonatomic) _Bool hasKeyboardUsed;
- (void)deleteEmojiUsed;	// IMP=0x000000000015b171
@property(nonatomic) _Bool hasEmojiUsed;
- (void)deleteMessageType;	// IMP=0x000000000015b0fe
@property(nonatomic) _Bool hasMessageType;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003239e7
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003239af

@end

