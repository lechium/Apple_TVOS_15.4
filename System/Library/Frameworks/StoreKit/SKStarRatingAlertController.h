//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController
{
    SKStarRatingControl *_ratingControl;	// 8 = 0x8
    UIAlertAction *_submitAction;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

+ (id)starRatingAlertController;	// IMP=0x0000000000033101
- (void).cxx_destruct;	// IMP=0x000000000003399a
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_updateButtonState;	// IMP=0x000000000003391b
- (void)_ratingControlChanged:(id)arg1;	// IMP=0x0000000000033909
@property(nonatomic) float rating;
- (void)dealloc;	// IMP=0x000000000003387b
- (void)setupActionsWithBundle:(id)arg1;	// IMP=0x0000000000033536
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000331ac

@end
