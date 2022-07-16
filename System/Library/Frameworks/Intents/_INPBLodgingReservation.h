//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBLodgingReservation-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@interface _INPBLodgingReservation : PBCodable <_INPBLodgingReservation, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBLocation *_lodgingBusinessLocation;	// 8 = 0x8
    _INPBInteger *_numberOfAdults;	// 16 = 0x10
    _INPBInteger *_numberOfChildren;	// 24 = 0x18
    _INPBReservation *_reservation;	// 32 = 0x20
    _INPBDateTimeRange *_reservationDuration;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003da9c4
- (void).cxx_destruct;	// IMP=0x00000000003da624
@property(retain, nonatomic) _INPBDateTimeRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
@property(retain, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) _INPBInteger *numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(retain, nonatomic) _INPBInteger *numberOfAdults; // @synthesize numberOfAdults=_numberOfAdults;
@property(retain, nonatomic) _INPBLocation *lodgingBusinessLocation; // @synthesize lodgingBusinessLocation=_lodgingBusinessLocation;
- (id)dictionaryRepresentation;	// IMP=0x00000000003da3c7
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d9d66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003d9c0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d9b78
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d9a79
- (void)writeTo:(id)arg1;	// IMP=0x00000000003d9882
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003d9875
@property(readonly, nonatomic) _Bool hasReservationDuration;
@property(readonly, nonatomic) _Bool hasReservation;
@property(readonly, nonatomic) _Bool hasNumberOfChildren;
@property(readonly, nonatomic) _Bool hasNumberOfAdults;
@property(readonly, nonatomic) _Bool hasLodgingBusinessLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

