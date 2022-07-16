//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetNicknameIntentResponse-Protocol.h>

@class NSString, _INPBContactCard;

@interface _INPBSetNicknameIntentResponse : PBCodable <_INPBSetNicknameIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBContactCard *_meCard;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042daa1
- (void).cxx_destruct;	// IMP=0x000000000042d8e1
@property(retain, nonatomic) _INPBContactCard *meCard; // @synthesize meCard=_meCard;
- (id)dictionaryRepresentation;	// IMP=0x000000000042d835
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000042d696
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042d614
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042d582
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042d483
- (void)writeTo:(id)arg1;	// IMP=0x000000000042d3fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000042d3ef
@property(readonly, nonatomic) _Bool hasMeCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
