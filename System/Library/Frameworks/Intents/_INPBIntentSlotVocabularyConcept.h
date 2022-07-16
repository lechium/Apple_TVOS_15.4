//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyConcept-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <_INPBIntentSlotVocabularyConcept, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int requiresUserIdentification:1;
    } _has;	// 8 = 0x8
    _Bool _requiresUserIdentification;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSArray *_synonyms;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000af5e7
+ (Class)synonymsType;	// IMP=0x00000000000af5d6
- (void).cxx_destruct;	// IMP=0x00000000000af307
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(nonatomic) _Bool requiresUserIdentification; // @synthesize requiresUserIdentification=_requiresUserIdentification;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;	// IMP=0x00000000000aefe5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aec35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aeb4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aeabd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae9be
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ae821
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ae814
- (id)synonymsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ae7f7
@property(readonly, nonatomic) unsigned long long synonymsCount;
- (void)addSynonyms:(id)arg1;	// IMP=0x00000000000ae760
- (void)clearSynonyms;	// IMP=0x00000000000ae743
@property(nonatomic) _Bool hasRequiresUserIdentification;
@property(readonly, nonatomic) _Bool hasIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

