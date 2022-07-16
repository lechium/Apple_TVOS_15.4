//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRideDriver-Protocol.h>

@class NSString, _INPBContactValue, _INPBImageValue;

@interface _INPBRideDriver : PBCodable <_INPBRideDriver, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBImageValue *_image;	// 8 = 0x8
    _INPBContactValue *_person;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_rating;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018bb74
- (void).cxx_destruct;	// IMP=0x000000000018b89b
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) _INPBContactValue *person; // @synthesize person=_person;
@property(retain, nonatomic) _INPBImageValue *image; // @synthesize image=_image;
- (id)dictionaryRepresentation;	// IMP=0x000000000018b692
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018b152
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018b027
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018af95
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018ae96
- (void)writeTo:(id)arg1;	// IMP=0x000000000018ad31
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018ad24
@property(readonly, nonatomic) _Bool hasRating;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(readonly, nonatomic) _Bool hasPerson;
@property(readonly, nonatomic) _Bool hasImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
