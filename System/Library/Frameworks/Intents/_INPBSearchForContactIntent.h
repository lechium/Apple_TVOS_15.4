//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForContactIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSearchForContactIntent : PBCodable <_INPBSearchForContactIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_contactIdentifiers;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042d3be
+ (Class)contactIdentifiersType;	// IMP=0x000000000042d3ad
- (void).cxx_destruct;	// IMP=0x000000000042d169
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
- (id)dictionaryRepresentation;	// IMP=0x000000000042cec0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000042cbb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042caf7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042ca65
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042c966
- (void)writeTo:(id)arg1;	// IMP=0x000000000042c7c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000042c7b9
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000042c773
@property(readonly, nonatomic) unsigned long long contactIdentifiersCount;
- (void)addContactIdentifiers:(id)arg1;	// IMP=0x000000000042c6dc
- (void)clearContactIdentifiers;	// IMP=0x000000000042c6bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

