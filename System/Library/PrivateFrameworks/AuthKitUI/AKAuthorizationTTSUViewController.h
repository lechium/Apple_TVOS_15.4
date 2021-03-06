//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKAuthorizationTTSUContentView, LSApplicationProxy, NSString, NSTimer, UIImage;
@protocol AKAuthorizationTTSUViewControllerDelegate;

@interface AKAuthorizationTTSUViewController : UIViewController
{
    id <AKAuthorizationTTSUViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    UIImage *_appIconImage;	// 24 = 0x18
    AKAuthorizationTTSUContentView *_contentView;	// 32 = 0x20
    NSTimer *_footerTimer;	// 40 = 0x28
    LSApplicationProxy *_applicationProxy;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000027c9d
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(retain, nonatomic) NSTimer *footerTimer; // @synthesize footerTimer=_footerTimer;
@property(retain, nonatomic) AKAuthorizationTTSUContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) __weak id <AKAuthorizationTTSUViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startAuthorizationInProgressAnimation;	// IMP=0x0000000000027aa9
- (void)authorizationInProgress;	// IMP=0x00000000000279be
- (void)userInteractedWithEndorsingDevice;	// IMP=0x0000000000027958
- (void)_menuPressed:(id)arg1;	// IMP=0x000000000002791c
@property(readonly, nonatomic) double appIconCornerRadius;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002768b
- (void)viewDidLoad;	// IMP=0x00000000000270e5
- (id)initWithAppBundleID:(id)arg1;	// IMP=0x0000000000027021

@end

