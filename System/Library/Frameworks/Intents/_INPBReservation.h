//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReservation-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBTimestamp, _INPBURLValue;

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int reservationStatus:1;
    } _has;	// 8 = 0x8
    int _reservationStatus;	// 12 = 0xc
    _INPBURLValue *_url;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
    _INPBTimestamp *_bookingTime;	// 32 = 0x20
    _INPBDataString *_itemReference;	// 40 = 0x28
    NSString *_reservationHolderName;	// 48 = 0x30
    NSString *_reservationNumber;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003cd861
+ (Class)actionsType;	// IMP=0x00000000003cd850
- (void).cxx_destruct;	// IMP=0x00000000003cd3e6
@property(nonatomic) int reservationStatus; // @synthesize reservationStatus=_reservationStatus;
@property(copy, nonatomic) NSString *reservationNumber; // @synthesize reservationNumber=_reservationNumber;
@property(copy, nonatomic) NSString *reservationHolderName; // @synthesize reservationHolderName=_reservationHolderName;
@property(retain, nonatomic) _INPBDataString *itemReference; // @synthesize itemReference=_itemReference;
@property(retain, nonatomic) _INPBTimestamp *bookingTime; // @synthesize bookingTime=_bookingTime;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) _INPBURLValue *url; // @synthesize url=_url;
- (id)dictionaryRepresentation;	// IMP=0x00000000003cceac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003cc6b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003cc4f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003cc466
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cc367
- (void)writeTo:(id)arg1;	// IMP=0x00000000003cc05f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003cc052
- (int)StringAsReservationStatus:(id)arg1;	// IMP=0x00000000003cbf80
- (id)reservationStatusAsString:(int)arg1;	// IMP=0x00000000003cbef5
@property(nonatomic) _Bool hasReservationStatus;
@property(readonly, nonatomic) _Bool hasReservationNumber;
@property(readonly, nonatomic) _Bool hasReservationHolderName;
@property(readonly, nonatomic) _Bool hasItemReference;
@property(readonly, nonatomic) _Bool hasBookingTime;
- (id)actionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003cbd9a
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActions:(id)arg1;	// IMP=0x00000000003cbd03
- (void)clearActions;	// IMP=0x00000000003cbce6
@property(readonly, nonatomic) _Bool hasUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
