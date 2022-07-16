//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemAttribution, NSArray, NSString;

@interface _MKMapItemAttribution : NSObject
{
    GEOMapItemAttribution *_geoAttribution;	// 8 = 0x8
}

+ (id)attributionFromEncyclopedicInfo:(id)arg1;	// IMP=0x0000000000047992
- (void).cxx_destruct;	// IMP=0x000000000005dc89
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool requiresAttributionInCallout;
- (id)providerSnippetLogoImageForScale:(double)arg1;	// IMP=0x000000000005dbbc
- (id)providerLogoImageForScale:(double)arg1;	// IMP=0x000000000005db1e
- (id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(_Bool)arg3;	// IMP=0x000000000005d990
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSArray *attributionURLs;
@property(readonly, nonatomic) NSString *captionDisplayName;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *providerID;
- (id)initWithGEOMapItemAttribution:(id)arg1;	// IMP=0x000000000005d87f

@end
