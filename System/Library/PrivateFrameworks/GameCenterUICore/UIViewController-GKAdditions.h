//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUICore/GKContentRefresh-Protocol.h>
#import <GameCenterUICore/GKURLHandling-Protocol.h>

@class NSString;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
+ (id)_gkKeyWindowRootViewController;	// IMP=0x0000000000021ee9
- (void)_gkConfigureFocusGuidesForNavigationBar:(id)arg1;	// IMP=0x000000000000bb19
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000000000ba9f
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000000000b9dd
- (id)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b786
- (void)_gkPresentActivityViewController:(id)arg1 fromView:(id)arg2;	// IMP=0x000000000000b615
- (void)_gkDismissActivityViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000b5c7
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;	// IMP=0x000000000000b431
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a922
- (void)_gkForceNextContentUpdate;	// IMP=0x000000000000a741
- (void)_gkResetContents;	// IMP=0x000000000000a6f4
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a6de
- (id)_gkAlertControllerForBarButtonItem:(id)arg1;	// IMP=0x000000000002257a
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;	// IMP=0x0000000000022263
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022113
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4 presentationCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021fa2
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021f7f
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;	// IMP=0x0000000000021f6a
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022739

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

