//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/WebFrameLoadDelegate-Protocol.h>
#import <UIKitCore/WebPolicyDelegate-Protocol.h>
#import <UIKitCore/WebResourceLoadDelegate-Protocol.h>
#import <UIKitCore/WebUIDelegate-Protocol.h>

@class NSString, UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate>
{
    UIWebView *uiWebView;	// 8 = 0x8
}

- (void)_clearUIWebView;	// IMP=0x00000000010ff539
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;	// IMP=0x00000000010ff523
- (_Bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;	// IMP=0x00000000010ff50d
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000010ff4f7
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000010ff4e1
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000010ff4cb
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;	// IMP=0x00000000010ff4b5
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x00000000010ff49f
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;	// IMP=0x00000000010ff489
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;	// IMP=0x00000000010ff473
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000010ff45d
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;	// IMP=0x00000000010ff447
- (void)webViewClose:(id)arg1;	// IMP=0x00000000010ff431
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;	// IMP=0x00000000010ff41b
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000010ff405
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000010ff3ef
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000010ff3d9
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000010ff3c3
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000010ff3ad
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000010ff397
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;	// IMP=0x00000000010ff381
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000010ff36b
- (void)webViewSupportedOrientationsUpdated:(id)arg1;	// IMP=0x00000000010ff355
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000010ff33f
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000010ff329
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000010ff313
- (void)webView:(id)arg1 printFrameView:(id)arg2;	// IMP=0x00000000010ff2fd
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;	// IMP=0x00000000010ff2e7
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;	// IMP=0x00000000010ff2d1
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;	// IMP=0x00000000010ff2bb
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000010ff2a5
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000010ff28f
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;	// IMP=0x00000000010ff260
- (id)initWithUIWebView:(id)arg1;	// IMP=0x00000000010ff223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

