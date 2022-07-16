//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController
{
    id <PSSplitViewControllerNavigationDelegate> _navigationDelegate;	// 8 = 0x8
    PSRootController *_containerNavigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000626c2
@property(retain, nonatomic) PSRootController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(nonatomic) __weak id <PSSplitViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (id)categoryController;	// IMP=0x0000000000062607
- (void)setViewControllers:(id)arg1;	// IMP=0x00000000000625a3
- (void)setupControllerForToolbar:(id)arg1;	// IMP=0x00000000000624d0
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0000000000062480
- (void)showInitialViewController:(id)arg1;	// IMP=0x0000000000061f81
- (void)popRecursivelyToRootController;	// IMP=0x0000000000061f1e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000061f14

@end
