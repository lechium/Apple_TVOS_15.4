//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentVocabulary-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentVocabulary : PBCodable <_INPBIntentVocabulary, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_intentSlotVocabularyPolicies;	// 8 = 0x8
    NSArray *_intentTypePhrases;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005fec1
+ (Class)intentTypePhrasesType;	// IMP=0x000000000005feb0
+ (Class)intentSlotVocabularyPoliciesType;	// IMP=0x000000000005fe9f
- (void).cxx_destruct;	// IMP=0x000000000005fc4c
@property(copy, nonatomic) NSArray *intentTypePhrases; // @synthesize intentTypePhrases=_intentTypePhrases;
@property(copy, nonatomic) NSArray *intentSlotVocabularyPolicies; // @synthesize intentSlotVocabularyPolicies=_intentSlotVocabularyPolicies;
- (id)dictionaryRepresentation;	// IMP=0x000000000005f857
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f54d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f48e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005f3fc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f2fd
- (void)writeTo:(id)arg1;	// IMP=0x000000000005f0ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005f0df
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005f0c2
@property(readonly, nonatomic) unsigned long long intentTypePhrasesCount;
- (void)addIntentTypePhrases:(id)arg1;	// IMP=0x000000000005f02b
- (void)clearIntentTypePhrases;	// IMP=0x000000000005f00e
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005efbd
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyPoliciesCount;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;	// IMP=0x000000000005ef26
- (void)clearIntentSlotVocabularyPolicies;	// IMP=0x000000000005ef09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

