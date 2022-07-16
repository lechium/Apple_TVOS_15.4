//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>
{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;	// 8 = 0x8
    NSArray *_observedLocations;	// 16 = 0x10
    NSDate *_observedAt;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010c46
- (void).cxx_destruct;	// IMP=0x00000000000110a6
@property(copy, nonatomic) NSDate *observedAt; // @synthesize observedAt=_observedAt;
@property(copy, nonatomic) NSArray *observedLocations; // @synthesize observedLocations=_observedLocations;
@property(retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
- (id)description;	// IMP=0x0000000000010fa5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010ec2
- (unsigned long long)hash;	// IMP=0x0000000000010e03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010c4e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010ad7
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;	// IMP=0x00000000000109d7

@end

