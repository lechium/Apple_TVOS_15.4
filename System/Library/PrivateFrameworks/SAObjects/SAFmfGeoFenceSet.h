//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SALocation, SAPerson;

@interface SAFmfGeoFenceSet
{
}

+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001fcc7
+ (id)geoFenceSet;	// IMP=0x000000000001fcb5
- (_Bool)requiresResponse;	// IMP=0x000000000001fd9d
@property(retain, nonatomic) SALocation *requestedLocation;
@property(copy, nonatomic) NSNumber *oneTimeOnly;
@property(copy, nonatomic) NSString *geoFenceTrigger;
@property(retain, nonatomic) SAPerson *friend;
@property(copy, nonatomic) NSString *fenceType;
@property(copy, nonatomic) NSNumber *enable;
- (id)encodedClassName;	// IMP=0x000000000001fca8
- (id)groupIdentifier;	// IMP=0x000000000001fc94

@end
