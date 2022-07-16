//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, NSURL, SACalendar, SAUIAppPunchOut;

@interface SARestaurantOpening <SAAceSerializable>
{
}

+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000024c71
+ (id)opening;	// IMP=0x0000000000024c5f
@property(retain, nonatomic) SACalendar *timeSlot;
@property(copy, nonatomic) NSNumber *partySize;
@property(retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;
@property(copy, nonatomic) NSURL *bookingId;
- (id)encodedClassName;	// IMP=0x0000000000024c52
- (id)groupIdentifier;	// IMP=0x0000000000024c3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
