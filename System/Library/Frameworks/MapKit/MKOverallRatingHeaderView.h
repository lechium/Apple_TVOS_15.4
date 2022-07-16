//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOAppleRating, NSAttributedString, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MKOverallRatingHeaderView
{
    UILabel *_overallPercentageLabel;	// 8 = 0x8
    UILabel *_thumbsRecommendedLabel;	// 16 = 0x10
    UILabel *_numberOfPeopleLabel;	// 24 = 0x18
    GEOAppleRating *_overallRating;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000196007
@property(retain, nonatomic) GEOAppleRating *overallRating; // @synthesize overallRating=_overallRating;
- (void)_contentSizeDidChange;	// IMP=0x0000000000195ee4
- (id)recommendedString;	// IMP=0x0000000000195ed3
@property(readonly, nonatomic) NSString *numberOfPeopleString;
@property(readonly, nonatomic) NSAttributedString *overallPercentageString;
- (void)_updateContent;	// IMP=0x0000000000195a85
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019511d

@end
