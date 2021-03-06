//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier, GEOPDPlaceCollectionItem, GEOQuickLink, NSArray, NSString, NSURL;

@interface GEOPlaceCollectionItem : NSObject
{
    GEOPDPlaceCollectionItem *_placeCollectionItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f7c420
@property(readonly, nonatomic) _Bool disableAppClipFallback;
@property(readonly, nonatomic) GEOQuickLink *appClip;
@property(readonly, nonatomic) NSString *reviewText;
@property(readonly, nonatomic) NSURL *reviewUrl;
@property(readonly, nonatomic) _Bool supportsPhotoFallback;
@property(readonly, nonatomic) NSArray *photos;
@property(readonly, nonatomic) GEOMapItemIdentifier *itemIdentifier;
@property(readonly, nonatomic) NSString *itemHTMLDescription;
@property(readonly, nonatomic) NSString *itemDescription;
- (id)description;	// IMP=0x0000000000f7bef4
- (id)initWithPlaceCollectionItem:(id)arg1;	// IMP=0x0000000000f7bda7

@end

