//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetRelationshipIntentResponse-Protocol.h>

@class NSString, _INPBContactCard;

@interface _INPBSetRelationshipIntentResponse : PBCodable <_INPBSetRelationshipIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBContactCard *_meCard;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042b066
- (void).cxx_destruct;	// IMP=0x000000000042aea6
@property(retain, nonatomic) _INPBContactCard *meCard; // @synthesize meCard=_meCard;
- (id)dictionaryRepresentation;	// IMP=0x000000000042adfa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000042ac5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042abd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042ab47
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042aa48
- (void)writeTo:(id)arg1;	// IMP=0x000000000042a9c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000042a9b4
@property(readonly, nonatomic) _Bool hasMeCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
