//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet
{
}

+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001365e
+ (id)mapItemSnippet;	// IMP=0x000000000001364c
@property(copy, nonatomic) NSNumber *userCurrentLocation;
@property(retain, nonatomic) SALocation *searchRegionCenter;
@property(nonatomic) _Bool searchAlongRoute;
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property(copy, nonatomic) NSArray *providerCommand;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic) _Bool chainResultSet;
- (id)encodedClassName;	// IMP=0x000000000001363f
- (id)groupIdentifier;	// IMP=0x000000000001362b

@end

