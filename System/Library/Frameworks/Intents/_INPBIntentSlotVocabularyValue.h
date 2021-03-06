//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyValue-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyValue : PBCodable <_INPBIntentSlotVocabularyValue, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_examples;	// 8 = 0x8
    NSString *_phrase;	// 16 = 0x10
    NSString *_pronunciation;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002a1110
- (void).cxx_destruct;	// IMP=0x00000000002a0eea
@property(copy, nonatomic) NSString *pronunciation; // @synthesize pronunciation=_pronunciation;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property(copy, nonatomic) NSArray *examples; // @synthesize examples=_examples;
- (id)dictionaryRepresentation;	// IMP=0x00000000002a0d3c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a08e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a07f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a0764
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a0665
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a049f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a0492
@property(readonly, nonatomic) _Bool hasPronunciation;
@property(readonly, nonatomic) _Bool hasPhrase;
- (id)examplesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a03e3
@property(readonly, nonatomic) unsigned long long examplesCount;
- (void)addExamples:(id)arg1;	// IMP=0x00000000002a034c
- (void)clearExamples;	// IMP=0x00000000002a032f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

