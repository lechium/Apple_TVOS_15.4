//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallGroupConversation-Protocol.h>

@class NSArray, NSString, _INPBCallGroup, _INPBContactValue;

@interface _INPBCallGroupConversation : PBCodable <_INPBCallGroupConversation, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBCallGroup *_callGroup;	// 8 = 0x8
    _INPBContactValue *_caller;	// 16 = 0x10
    NSString *_conversationId;	// 24 = 0x18
    NSArray *_otherParticipants;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d2089
+ (Class)otherParticipantsType;	// IMP=0x00000000004d2078
- (void).cxx_destruct;	// IMP=0x00000000004d1d6c
@property(copy, nonatomic) NSArray *otherParticipants; // @synthesize otherParticipants=_otherParticipants;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) _INPBContactValue *caller; // @synthesize caller=_caller;
@property(retain, nonatomic) _INPBCallGroup *callGroup; // @synthesize callGroup=_callGroup;
- (id)dictionaryRepresentation;	// IMP=0x00000000004d19e9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d14a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d137e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d12ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d11ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d0fc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d0fb8
- (id)otherParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004d0f9b
@property(readonly, nonatomic) unsigned long long otherParticipantsCount;
- (void)addOtherParticipants:(id)arg1;	// IMP=0x00000000004d0f04
- (void)clearOtherParticipants;	// IMP=0x00000000004d0ee7
@property(readonly, nonatomic) _Bool hasConversationId;
@property(readonly, nonatomic) _Bool hasCaller;
@property(readonly, nonatomic) _Bool hasCallGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

