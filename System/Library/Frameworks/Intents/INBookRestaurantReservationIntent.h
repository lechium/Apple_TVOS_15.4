//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INBookRestaurantReservationIntentExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDate, NSDateComponents, NSString;

@interface INBookRestaurantReservationIntent <INBookRestaurantReservationIntentExport, NSCopying>
{
    INRestaurant *_restaurant;	// 8 = 0x8
    NSDateComponents *_bookingDateComponents;	// 16 = 0x10
    unsigned long long _partySize;	// 24 = 0x18
    NSString *_bookingIdentifier;	// 32 = 0x20
    INRestaurantGuest *_guest;	// 40 = 0x28
    INRestaurantOffer *_selectedOffer;	// 48 = 0x30
    NSString *_guestProvidedSpecialRequestText;	// 56 = 0x38
    NSDate *_bookingDate;	// 64 = 0x40
}

+ (id)intentDescription;	// IMP=0x0000000000207a10
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000207a08
- (void).cxx_destruct;	// IMP=0x0000000000207982
@property(copy, nonatomic) NSDate *bookingDate; // @synthesize bookingDate=_bookingDate;
@property(copy, nonatomic) NSString *guestProvidedSpecialRequestText; // @synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText;
@property(copy, nonatomic) INRestaurantOffer *selectedOffer; // @synthesize selectedOffer=_selectedOffer;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
@property(copy, nonatomic) NSString *bookingIdentifier; // @synthesize bookingIdentifier=_bookingIdentifier;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy, nonatomic) NSDateComponents *bookingDateComponents; // @synthesize bookingDateComponents=_bookingDateComponents;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000207576
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002073c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000206e97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000206d52
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000206a1d
- (id)initWithRestaurant:(id)arg1 bookingDateComponents:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 selectedOffer:(id)arg6 guestProvidedSpecialRequestText:(id)arg7;	// IMP=0x00000000002068db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

