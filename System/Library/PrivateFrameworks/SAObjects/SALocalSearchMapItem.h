//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDate, NSNumber, NSString, SADistance, SALocation;
@protocol SAAceSerializable;

@interface SALocalSearchMapItem
{
}

+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000012e82
+ (id)mapItem;	// IMP=0x0000000000012e70
@property(copy, nonatomic) NSString *suggestionsEntryType;
@property(copy, nonatomic) NSString *spokenName;
@property(copy, nonatomic) NSString *spokenAddress;
@property(copy, nonatomic) NSData *resultDetourInfoData;
@property(copy, nonatomic) NSNumber *placeId;
@property(copy, nonatomic) NSData *placeData2;
@property(copy, nonatomic) NSData *placeData;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSNumber *localSearchProviderId;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property(copy, nonatomic) NSString *extSessionGuid;
@property(copy, nonatomic) NSNumber *distanceInMiles;
@property(retain, nonatomic) SADistance *distance;
@property(copy, nonatomic) NSString *directionRole;
@property(copy, nonatomic) NSString *detailType;
@property(retain, nonatomic) id <SAAceSerializable> detail;
@property(copy, nonatomic) NSArray *attributions;
- (id)encodedClassName;	// IMP=0x0000000000012e63
- (id)groupIdentifier;	// IMP=0x0000000000012e4f

@end

