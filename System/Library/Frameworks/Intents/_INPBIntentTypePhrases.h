//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentTypePhrases-Protocol.h>

@class NSArray, NSString, _INPBIntentType;

@interface _INPBIntentTypePhrases : PBCodable <_INPBIntentTypePhrases, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentType *_intentType;	// 8 = 0x8
    NSArray *_intentVocabularyExamples;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e8d1c
- (void).cxx_destruct;	// IMP=0x00000000000e8b04
@property(copy, nonatomic) NSArray *intentVocabularyExamples; // @synthesize intentVocabularyExamples=_intentVocabularyExamples;
@property(retain, nonatomic) _INPBIntentType *intentType; // @synthesize intentType=_intentType;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e89db
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e86d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e8612
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e8580
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e8481
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e82f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e82e9
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e82cc
@property(readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
- (void)addIntentVocabularyExamples:(id)arg1;	// IMP=0x00000000000e8235
- (void)clearIntentVocabularyExamples;	// IMP=0x00000000000e8218
@property(readonly, nonatomic) _Bool hasIntentType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

