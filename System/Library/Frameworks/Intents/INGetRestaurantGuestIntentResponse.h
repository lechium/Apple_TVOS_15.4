//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetRestaurantGuestIntentResponseExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences, NSString;

@interface INGetRestaurantGuestIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport>
{
    INRestaurantGuest *_guest;	// 8 = 0x8
    INRestaurantGuestDisplayPreferences *_guestDisplayPreferences;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bab8
- (void).cxx_destruct;	// IMP=0x000000000000ba87
@property(copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // @synthesize guestDisplayPreferences=_guestDisplayPreferences;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b9dd
- (id)_dictionaryRepresentation;	// IMP=0x000000000000b842
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b5e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b537
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b498
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b3a9
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000b37a
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000b34b
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000000b31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

