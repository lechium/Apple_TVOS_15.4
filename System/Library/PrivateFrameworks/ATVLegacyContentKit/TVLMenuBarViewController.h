//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>
#import <ATVLegacyContentKit/TVLFeedControllerJSMessaging-Protocol.h>

@class NSString, TVLJSCallback, UIViewController;

@interface TVLMenuBarViewController : UITabBarController <ATVUpdatable, TVLFeedControllerJSMessaging>
{
    TVLJSCallback *_lastEvent;	// 8 = 0x8
}

+ (id)menuBarControllerForViewController:(id)arg1;	// IMP=0x0000000000028660
- (void).cxx_destruct;	// IMP=0x00000000000286fa
- (_Bool)swapController:(id)arg1 forController:(id)arg2;	// IMP=0x0000000000028120
- (void)callJavaScriptFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x0000000000027fef
- (void)_setSelectedViewController:(id)arg1;	// IMP=0x0000000000027725
- (void)_loadViewControllerForXMLDocument:(id)arg1 sourceURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027492
- (void)_loadViewControllerForURLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000270b9
- (void)_loadViewControllerForNavigationItemElement:(id)arg1 navigationScript:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000262ef
- (id)_proxyViewControllerForNavigationItemElement:(id)arg1 loadCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025ba0
- (void)_buildProxyViewControllers;	// IMP=0x000000000002573a
- (void)_clearLastEventInContext:(struct OpaqueJSContext *)arg1;	// IMP=0x00000000000256bc
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000255c9
- (void)setWasEverActivated:(_Bool)arg1;	// IMP=0x0000000000025552
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x000000000002554c
- (void)tvl_saveStateWithCoder:(id)arg1;	// IMP=0x00000000000254a3
- (void)tvl_restoreStateWithCoder:(id)arg1;	// IMP=0x00000000000253e0
- (id)initWithElement:(id)arg1;	// IMP=0x000000000002530d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
