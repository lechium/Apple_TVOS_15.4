//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, TVLMediaBadgesView, TVLStarRatingView;

@interface _TVLArtworkMetadataView : UIView
{
    NSArray *_metadataArray;	// 8 = 0x8
    NSMutableArray *_metadataLabels;	// 16 = 0x10
    TVLMediaBadgesView *_mediaBadgesView;	// 24 = 0x18
    TVLStarRatingView *_starRatingView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000024cfc
@property(retain, nonatomic) TVLStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain, nonatomic) TVLMediaBadgesView *mediaBadgesView; // @synthesize mediaBadgesView=_mediaBadgesView;
@property(retain, nonatomic) NSMutableArray *metadataLabels; // @synthesize metadataLabels=_metadataLabels;
@property(copy, nonatomic) NSArray *metadataArray; // @synthesize metadataArray=_metadataArray;
- (id)defaultMetadataValueLabel;	// IMP=0x0000000000024bd8
- (void)layoutSubviews;	// IMP=0x000000000002436e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000242f0

@end

