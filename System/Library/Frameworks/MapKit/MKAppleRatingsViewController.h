//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKOverallRatingHeaderView, MKPlaceSectionRowView, NSArray, NSString, UIStackView;

__attribute__((visibility("hidden")))
@interface MKAppleRatingsViewController <MKModuleViewControllerProtocol>
{
    NSArray *_ratingCategories;	// 8 = 0x8
    MKPlaceSectionRowView *_containerView;	// 16 = 0x10
    MKOverallRatingHeaderView *_overallHeaderView;	// 24 = 0x18
    UIStackView *_ratingCategoryStackView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b6c98
- (void)viewDidLoad;	// IMP=0x00000000000b611a
- (id)initWithAppleRatings:(id)arg1;	// IMP=0x00000000000b60a8
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000b60a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
