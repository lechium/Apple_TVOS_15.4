//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;	// IMP=0x00000000000ec710
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;	// IMP=0x00000000000ecb00
- (void)webViewDidDrawTiles:(id)arg1;	// IMP=0x00000000000ecaf0
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;	// IMP=0x00000000000ecae0
- (long long)getPasteboardChangeCount;	// IMP=0x00000000000ecad0
- (_Bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(_Bool)arg3;	// IMP=0x00000000000ecac0
- (_Bool)performsTwoStepPaste:(id)arg1;	// IMP=0x00000000000ecab0
- (_Bool)hasRichlyEditableSelection;	// IMP=0x00000000000ecaa0
- (_Bool)shouldSuppressPasswordEcho;	// IMP=0x00000000000eca90
- (int)deviceOrientation;	// IMP=0x00000000000eca80
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;	// IMP=0x00000000000eca70
- (_Bool)shouldRevealCurrentSelectionAfterInsertion;	// IMP=0x00000000000eca60
- (struct CGPoint)interactionLocation;	// IMP=0x00000000000eca40
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000eca30
- (long long)getPasteboardItemsCount;	// IMP=0x00000000000eca20
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000eca10
- (void)writeDataToPasteboard:(id)arg1;	// IMP=0x00000000000eca00
- (id)checkSpellingOfString:(id)arg1;	// IMP=0x00000000000ec9f0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;	// IMP=0x00000000000ec9d0
- (void)webViewDidEndOverflowScroll:(id)arg1;	// IMP=0x00000000000ec9c0
- (void)webViewDidStartOverflowScroll:(id)arg1;	// IMP=0x00000000000ec9b0
- (void)webViewDidLayout:(id)arg1;	// IMP=0x00000000000ec9a0
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;	// IMP=0x00000000000ec990
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;	// IMP=0x00000000000ec980
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;	// IMP=0x00000000000ec970
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;	// IMP=0x00000000000ec960
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;	// IMP=0x00000000000ec950
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000ec940
- (void)deleteFromInput;	// IMP=0x00000000000ec930
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x00000000000ec920
- (_Bool)handleKeyAppCommandForCurrentEvent;	// IMP=0x00000000000ec910
- (_Bool)handleKeyTextCommandForCurrentEvent;	// IMP=0x00000000000ec900
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000000ec8f0
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000ec8e0
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;	// IMP=0x00000000000ec8d0
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;	// IMP=0x00000000000ec8c0
- (void)webViewDidReceiveMobileDocType:(id)arg1;	// IMP=0x00000000000ec8b0
- (void)webViewDidRestoreFromPageCache:(id)arg1;	// IMP=0x00000000000ec8a0
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;	// IMP=0x00000000000ec890
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;	// IMP=0x00000000000ec880
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;	// IMP=0x00000000000ec870
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000000ec860
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000000ec850
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec840
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;	// IMP=0x00000000000ec830
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;	// IMP=0x00000000000ec820
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec810
- (void)webViewDidPreventDefaultForEvent:(id)arg1;	// IMP=0x00000000000ec800
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec7f0
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec7e0
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;	// IMP=0x00000000000ec7d0
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;	// IMP=0x00000000000ec7c0
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000ec7b0
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000ec7a0
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000ec790
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000ec780
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;	// IMP=0x00000000000ec760
- (struct CGPoint)contentsPointForWebView:(id)arg1;	// IMP=0x00000000000ec740

@end

