//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INImage, NSDate, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport>
{
    unsigned long long _defaultPartySize;	// 8 = 0x8
    NSDate *_defaultBookingDate;	// 16 = 0x10
    NSNumber *_maximumPartySize;	// 24 = 0x18
    NSNumber *_minimumPartySize;	// 32 = 0x20
    INImage *_providerImage;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000032fe2d
- (void).cxx_destruct;	// IMP=0x000000000032fdda
@property(copy, nonatomic) INImage *providerImage; // @synthesize providerImage=_providerImage;
@property(copy, nonatomic) NSNumber *minimumPartySize; // @synthesize minimumPartySize=_minimumPartySize;
@property(copy, nonatomic) NSNumber *maximumPartySize; // @synthesize maximumPartySize=_maximumPartySize;
@property(readonly, copy, nonatomic) NSDate *defaultBookingDate; // @synthesize defaultBookingDate=_defaultBookingDate;
@property(readonly, nonatomic) unsigned long long defaultPartySize; // @synthesize defaultPartySize=_defaultPartySize;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032fcec
- (id)_dictionaryRepresentation;	// IMP=0x000000000032fa4b
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032f651
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032f533
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032f43f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032f29c
- (id)initWithDefaultPartySize:(unsigned long long)arg1 defaultBookingDate:(id)arg2 code:(long long)arg3 userActivity:(id)arg4;	// IMP=0x000000000032f207
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000032f17c
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000032f14d
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000032f11e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
