//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, VSOptional;
@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController
{
    VSOptional *_identityProvider;	// 8 = 0x8
    NSArray *_supportedApps;	// 16 = 0x10
    id <VSSupportedAppsViewControllerDelegate> _delegate;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    NSArray *_apps;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007c886
@property(copy, nonatomic) NSArray *apps; // @synthesize apps=_apps;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) __weak id <VSSupportedAppsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *supportedApps; // @synthesize supportedApps=_supportedApps;
@property(retain, nonatomic) VSOptional *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void)viewDidLoad;	// IMP=0x000000000007c218
- (void)beginLoadingImages;	// IMP=0x000000000007bc11
- (void)_displayApps;	// IMP=0x000000000007b987
- (void)_presentError:(id)arg1;	// IMP=0x000000000007b89c
- (void)_doneButtonPresed:(id)arg1;	// IMP=0x000000000007b88a
- (void)_didFinish;	// IMP=0x000000000007b83e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007b73e

@end

