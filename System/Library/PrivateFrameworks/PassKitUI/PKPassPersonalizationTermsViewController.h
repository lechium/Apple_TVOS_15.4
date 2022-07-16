//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;
@protocol PKPassPersonalizationTermsViewControllerDelegate;

@interface PKPassPersonalizationTermsViewController : UIViewController
{
    UITextView *_textView;	// 8 = 0x8
    NSString *_termsAndConditions;	// 16 = 0x10
    id <PKPassPersonalizationTermsViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021b9a2
@property(nonatomic) __weak id <PKPassPersonalizationTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
- (void)_acceptButtonPressed:(id)arg1;	// IMP=0x000000000021b766
- (void)_declineButtonPressed:(id)arg1;	// IMP=0x000000000021b72a
- (void)_applyTermsAndConditions;	// IMP=0x000000000021b630
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000021b5b5
- (void)viewDidLoad;	// IMP=0x000000000021b3d0
- (void)loadView;	// IMP=0x000000000021b38d
- (void)dealloc;	// IMP=0x000000000021b35e
- (id)initWithTermsAndConditions:(id)arg1;	// IMP=0x000000000021b2e0

@end

