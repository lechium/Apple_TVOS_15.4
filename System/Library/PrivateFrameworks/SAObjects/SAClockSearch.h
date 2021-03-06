//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL;

@interface SAClockSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000101af
+ (id)search;	// IMP=0x000000000001019d
- (_Bool)requiresResponse;	// IMP=0x0000000000010263
@property(copy, nonatomic) NSString *unlocalizedCountryName;
@property(copy, nonatomic) NSString *unlocalizedCityName;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSString *countryCode;
@property(copy, nonatomic) NSNumber *alCityId;
- (id)encodedClassName;	// IMP=0x0000000000010190
- (id)groupIdentifier;	// IMP=0x000000000001017c

@end

