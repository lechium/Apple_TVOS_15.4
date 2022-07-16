//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebUIDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>
{
}

+ (id)sharedUIDelegate;	// IMP=0x00000000000ec3e0
- (void)webViewSupportedOrientationsUpdated:(id)arg1;	// IMP=0x00000000000ec700
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;	// IMP=0x00000000000ec6f0
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;	// IMP=0x00000000000ec6e0
- (void)webView:(id)arg1 didDrawRect:(struct CGRect)arg2;	// IMP=0x00000000000ec6d0
- (void)webView:(id)arg1 printFrameView:(id)arg2;	// IMP=0x00000000000ec6c0
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;	// IMP=0x00000000000ec6b0
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;	// IMP=0x00000000000ec6a0
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000000ec690
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000000ec680
- (struct CGRect)webViewFrame:(id)arg1;	// IMP=0x00000000000ec620
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;	// IMP=0x00000000000ec610
- (void)webView:(id)arg1 setResizable:(_Bool)arg2;	// IMP=0x00000000000ec600
- (_Bool)webViewIsResizable:(id)arg1;	// IMP=0x00000000000ec5f0
- (void)webView:(id)arg1 setStatusBarVisible:(_Bool)arg2;	// IMP=0x00000000000ec5e0
- (_Bool)webViewIsStatusBarVisible:(id)arg1;	// IMP=0x00000000000ec5d0
- (void)webView:(id)arg1 setToolbarsVisible:(_Bool)arg2;	// IMP=0x00000000000ec5c0
- (_Bool)webViewAreToolbarsVisible:(id)arg1;	// IMP=0x00000000000ec5b0
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;	// IMP=0x00000000000ec5a0
- (id)webViewStatusText:(id)arg1;	// IMP=0x00000000000ec590
- (void)webView:(id)arg1 setStatusText:(id)arg2;	// IMP=0x00000000000ec580
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;	// IMP=0x00000000000ec540
- (id)webViewFirstResponder:(id)arg1;	// IMP=0x00000000000ec510
- (void)webViewUnfocus:(id)arg1;	// IMP=0x00000000000ec500
- (void)webViewFocus:(id)arg1;	// IMP=0x00000000000ec4f0
- (void)webViewClose:(id)arg1;	// IMP=0x00000000000ec4e0
- (void)webViewShow:(id)arg1;	// IMP=0x00000000000ec4d0
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(_Bool)arg3;	// IMP=0x00000000000ec4c0
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;	// IMP=0x00000000000ec420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

