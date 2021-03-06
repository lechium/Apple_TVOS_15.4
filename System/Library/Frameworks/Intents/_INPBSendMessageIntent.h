//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendMessageIntent-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBString;

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int effect:1;
        unsigned int outgoingMessageType:1;
    } _has;	// 8 = 0x8
    int _effect;	// 12 = 0xc
    int _outgoingMessageType;	// 16 = 0x10
    NSArray *_attachments;	// 24 = 0x18
    _INPBString *_content;	// 32 = 0x20
    NSString *_conversationIdentifier;	// 40 = 0x28
    _INPBString *_groupName;	// 48 = 0x30
    _INPBIntentMetadata *_intentMetadata;	// 56 = 0x38
    NSString *_notificationThreadIdentifier;	// 64 = 0x40
    NSArray *_recipients;	// 72 = 0x48
    _INPBContact *_sender;	// 80 = 0x50
    NSString *_serviceName;	// 88 = 0x58
    _INPBDataString *_speakableGroupName;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001daa06
+ (Class)recipientType;	// IMP=0x00000000001da9f5
+ (Class)attachmentsType;	// IMP=0x00000000001da9e4
- (void).cxx_destruct;	// IMP=0x00000000001da336
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) int outgoingMessageType; // @synthesize outgoingMessageType=_outgoingMessageType;
@property(copy, nonatomic) NSString *notificationThreadIdentifier; // @synthesize notificationThreadIdentifier=_notificationThreadIdentifier;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) int effect; // @synthesize effect=_effect;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) _INPBString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d99c8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d8c9d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d89dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d894b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d884c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d834a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d833d
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(readonly, nonatomic) _Bool hasSender;
- (id)recipientAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d8285
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipient:(id)arg1;	// IMP=0x00000000001d81ee
- (void)clearRecipients;	// IMP=0x00000000001d81d1
- (int)StringAsOutgoingMessageType:(id)arg1;	// IMP=0x00000000001d8136
- (id)outgoingMessageTypeAsString:(int)arg1;	// IMP=0x00000000001d80e0
@property(nonatomic) _Bool hasOutgoingMessageType;
@property(readonly, nonatomic) _Bool hasNotificationThreadIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasGroupName;
- (int)StringAsEffect:(id)arg1;	// IMP=0x00000000001d7e04
- (id)effectAsString:(int)arg1;	// IMP=0x00000000001d7d0d
@property(nonatomic) _Bool hasEffect;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
- (id)attachmentsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d7c24
@property(readonly, nonatomic) unsigned long long attachmentsCount;
- (void)addAttachments:(id)arg1;	// IMP=0x00000000001d7b8d
- (void)clearAttachments;	// IMP=0x00000000001d7b70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

