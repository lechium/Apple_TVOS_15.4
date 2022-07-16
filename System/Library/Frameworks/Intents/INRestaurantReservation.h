//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INRestaurantReservation <NSCopying, NSSecureCoding>
{
    INDateComponentsRange *_reservationDuration;	// 8 = 0x8
    NSNumber *_partySize;	// 16 = 0x10
    CLPlacemark *_restaurantLocation;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000243be2
- (void).cxx_destruct;	// IMP=0x0000000000243ba0
@property(readonly, copy, nonatomic) CLPlacemark *restaurantLocation; // @synthesize restaurantLocation=_restaurantLocation;
@property(readonly, copy, nonatomic) NSNumber *partySize; // @synthesize partySize=_partySize;
@property(readonly, copy, nonatomic) INDateComponentsRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000243990
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000243873
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002436e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002436dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002435cc
- (unsigned long long)hash;	// IMP=0x000000000024353c
- (id)_duration;	// IMP=0x0000000000243527
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9;	// IMP=0x00000000002434e9
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservationDuration:(id)arg8 partySize:(id)arg9 restaurantLocation:(id)arg10;	// IMP=0x00000000002433c9

@end
