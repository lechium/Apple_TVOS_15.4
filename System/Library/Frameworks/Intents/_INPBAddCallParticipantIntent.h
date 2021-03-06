//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAddCallParticipantIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBAddCallParticipantIntent : PBCodable <_INPBAddCallParticipantIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    NSArray *_participants;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d9623
+ (Class)participantsType;	// IMP=0x00000000004d9612
- (void).cxx_destruct;	// IMP=0x00000000004d93cb
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000004d9134
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d8e2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d8d6b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d8cd9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d8bda
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d8a4f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d8a42
- (id)participantsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d8a25
@property(readonly, nonatomic) unsigned long long participantsCount;
- (void)addParticipants:(id)arg1;	// IMP=0x00000000004d898e
- (void)clearParticipants;	// IMP=0x00000000004d8971
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

