//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSURL, NSURLSessionDataTask, UIActivityIndicatorView, UIStackView, UITextView;

__attribute__((visibility("hidden")))
@interface _MKLegalAttributionViewController : UIViewController
{
    NSURL *_url;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    UITextView *_textView;	// 24 = 0x18
    NSURLSessionDataTask *_loadTask;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001976da
- (id)preferredFocusedView;	// IMP=0x000000000019768f
- (id)preferredFocusEnvironments;	// IMP=0x00000000001975c9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000197560
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001972c7
- (void)viewDidLoad;	// IMP=0x0000000000196a50
- (id)_textView;	// IMP=0x00000000001967ab
- (id)_titleLabel;	// IMP=0x0000000000196627
- (id)initWithURL:(id)arg1;	// IMP=0x000000000019656a

@end

