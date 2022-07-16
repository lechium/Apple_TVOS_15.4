//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo *_info;	// 8 = 0x8
    NSArray *_attributionURLs;	// 16 = 0x10
    NSString *_yelpID;	// 24 = 0x18
    NSString *_poiID;	// 32 = 0x20
}

+ (id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3;	// IMP=0x000000000112318e
- (void).cxx_destruct;	// IMP=0x0000000001123d43
@property(readonly, nonatomic) NSArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(_Bool)arg3;	// IMP=0x00000000011235cf
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(double)arg1;	// IMP=0x0000000001123588
- (id)providerLogoPathForScale:(double)arg1;	// IMP=0x0000000001123572
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSString *captionDisplayName;
@property(readonly, nonatomic) NSString *providerID;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;	// IMP=0x0000000001123413
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;	// IMP=0x000000000112338f
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;	// IMP=0x00000000011232d5

@end

