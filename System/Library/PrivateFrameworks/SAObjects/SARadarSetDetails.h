//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SARadarSetDetails
{
}

+ (id)setDetailsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002f661
+ (id)setDetails;	// IMP=0x000000000002f64f
- (_Bool)requiresResponse;	// IMP=0x000000000002f6d1
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *description;
@property(copy, nonatomic) NSString *classification;
- (id)encodedClassName;	// IMP=0x000000000002f642
- (id)groupIdentifier;	// IMP=0x000000000002f62e

@end
