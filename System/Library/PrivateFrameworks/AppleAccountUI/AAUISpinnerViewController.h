//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;

@interface AAUISpinnerViewController : UIViewController
{
    UIActivityIndicatorView *_spinnerView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000034a85
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic, getter=isSpinning) _Bool spinning;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000349a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000034927
- (void)viewDidLoad;	// IMP=0x0000000000034452
- (void)_commonInit;	// IMP=0x0000000000034371
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034325
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000342d9

@end

