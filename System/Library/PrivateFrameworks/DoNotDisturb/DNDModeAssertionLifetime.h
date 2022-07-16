//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)_secureCodingLifetimeClasses;	// IMP=0x0000000000010594
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010546
+ (id)lifetimeForUserRequest;	// IMP=0x00000000000104db
+ (id)lifetimeWithExplicitRegion:(id)arg1;	// IMP=0x000000000001048e
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1;	// IMP=0x000000000001043c
+ (id)lifetimeMatchingScheduleWithIdentifier:(id)arg1;	// IMP=0x00000000000103ed
+ (id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2;	// IMP=0x0000000000010377
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2;	// IMP=0x0000000000010304
+ (id)lifetimeWithDateInterval:(id)arg1;	// IMP=0x00000000000102b7
+ (id)lifetimeWithCurrentLocation;	// IMP=0x000000000001029e
+ (id)lifetimeWithDuration:(double)arg1;	// IMP=0x00000000000101f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001057f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001054e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001053b
@property(readonly, nonatomic) unsigned long long lifetimeType; // @dynamic lifetimeType;
- (id)_init;	// IMP=0x0000000000010504

@end

