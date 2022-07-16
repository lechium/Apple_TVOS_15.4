//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel;

@interface _TVCKErrorViewController : UIViewController
{
    UILabel *_headerLabel;	// 8 = 0x8
    UILabel *_errorMessageLabel;	// 16 = 0x10
    NSString *_headerTitle;	// 24 = 0x18
    NSString *_errorMessage;	// 32 = 0x20
}

+ (id)_darkModeListTitleTextColor;	// IMP=0x000000000001c976
+ (id)_lightModeListTitleTextColor;	// IMP=0x000000000001c906
+ (id)listTitleTextColor;	// IMP=0x000000000001c845
- (void).cxx_destruct;	// IMP=0x000000000001cabb
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)_updateColors;	// IMP=0x000000000001c9eb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001c625
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001c355
- (void)loadView;	// IMP=0x000000000001c0be

@end

