//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, NSURL, SAFmfGeoFence;

@interface SAFmfGeoFenceSnippet
{
}

+ (id)geoFenceSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001fdd8
+ (id)geoFenceSnippet;	// IMP=0x000000000001fdc6
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSNumber *oneTimeOnly;
@property(copy, nonatomic) NSString *fenceType;
@property(copy, nonatomic) NSNumber *enable;
@property(retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;
- (id)encodedClassName;	// IMP=0x000000000001fdb9
- (id)groupIdentifier;	// IMP=0x000000000001fda5

@end
