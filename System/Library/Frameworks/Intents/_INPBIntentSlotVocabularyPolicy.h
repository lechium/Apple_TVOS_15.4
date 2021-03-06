//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyPolicy-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_intentSlotNames;	// 8 = 0x8
    NSArray *_intentSlotVocabularyConcepts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d4330
+ (Class)intentSlotVocabularyConceptsType;	// IMP=0x00000000001d431f
- (void).cxx_destruct;	// IMP=0x00000000001d4102
@property(copy, nonatomic) NSArray *intentSlotVocabularyConcepts; // @synthesize intentSlotVocabularyConcepts=_intentSlotVocabularyConcepts;
@property(copy, nonatomic) NSArray *intentSlotNames; // @synthesize intentSlotNames=_intentSlotNames;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d3e5a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d3b50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d3a91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d39ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d3900
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d36ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d36e2
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d36c5
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyConceptsCount;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;	// IMP=0x00000000001d362e
- (void)clearIntentSlotVocabularyConcepts;	// IMP=0x00000000001d3611
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d35c0
@property(readonly, nonatomic) unsigned long long intentSlotNamesCount;
- (void)addIntentSlotNames:(id)arg1;	// IMP=0x00000000001d3529
- (void)clearIntentSlotNames;	// IMP=0x00000000001d350c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

