//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/TVStarRatingView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLStarRatingElement;

@interface TVLStarRatingView : TVStarRatingView <ATVUpdatable>
{
    TVLStarRatingElement *_starRatingElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001be33
@property(retain, nonatomic) TVLStarRatingElement *starRatingElement; // @synthesize starRatingElement=_starRatingElement;
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x000000000001bc48
- (id)currentFeedElement;	// IMP=0x000000000001bc33
- (id)initWithStarRatingElement:(id)arg1;	// IMP=0x000000000001ba8c

@end
