//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SAWeatherLocationSearch
{
}

+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000019a34
+ (id)locationSearch;	// IMP=0x0000000000019a22
- (_Bool)requiresResponse;	// IMP=0x0000000000019a82
@property(copy, nonatomic) NSString *locationId;
@property(copy, nonatomic) NSURL *identifier;
- (id)encodedClassName;	// IMP=0x0000000000019a15
- (id)groupIdentifier;	// IMP=0x0000000000019a01

@end
