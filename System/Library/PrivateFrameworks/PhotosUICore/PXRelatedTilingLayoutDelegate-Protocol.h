//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXRelatedTilingLayout;

@protocol PXRelatedTilingLayoutDelegate <NSObject>

@optional
- (struct CGRect)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (NSString *)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
@end

