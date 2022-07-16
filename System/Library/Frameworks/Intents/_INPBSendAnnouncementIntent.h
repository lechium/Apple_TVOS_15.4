//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendAnnouncementIntent-Protocol.h>

@class NSArray, NSString, _INPBAnnouncement, _INPBIntentMetadata;

@interface _INPBSendAnnouncementIntent : PBCodable <_INPBSendAnnouncementIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isReply:1;
    } _has;	// 8 = 0x8
    _Bool _isReply;	// 12 = 0xc
    _INPBAnnouncement *_announcement;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000454155
+ (Class)recipientsType;	// IMP=0x0000000000454144
- (void).cxx_destruct;	// IMP=0x0000000000453deb
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBAnnouncement *announcement; // @synthesize announcement=_announcement;
- (id)dictionaryRepresentation;	// IMP=0x0000000000453a6b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004535a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045347c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004533ea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004532eb
- (void)writeTo:(id)arg1;	// IMP=0x00000000004530d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004530ca
- (id)recipientsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004530ad
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;	// IMP=0x0000000000453016
- (void)clearRecipients;	// IMP=0x0000000000452ff9
@property(nonatomic) _Bool hasIsReply;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasAnnouncement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

