//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetUserCurrentRestaurantReservationBookingsIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport>
{
    NSArray *_userCurrentBookings;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001eb783
- (void).cxx_destruct;	// IMP=0x00000000001eb770
@property(copy, nonatomic) NSArray *userCurrentBookings; // @synthesize userCurrentBookings=_userCurrentBookings;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001eb6e8
- (id)_dictionaryRepresentation;	// IMP=0x00000000001eb583
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb444
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb36c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001eb2ef
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001eb2c0
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001eb291
- (id)initWithUserCurrentBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;	// IMP=0x00000000001eb203
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001eb1e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eb0e5
- (id)init;	// IMP=0x00000000001eb0cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

