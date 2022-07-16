//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKitUI/WKNavigationDelegate-Protocol.h>

@class AKServerRequestConfiguration, AKURLRequestApprover, NSString;
@protocol AKIDPHandlerDelegate;

@interface AKIDPHandler : NSObject <WKNavigationDelegate>
{
    AKURLRequestApprover *_redirectApprover;	// 8 = 0x8
    AKServerRequestConfiguration *_configuration;	// 16 = 0x10
    id <AKIDPHandlerDelegate> _delegate;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000030b2b
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id <AKIDPHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKServerRequestConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_completeFlowWithError:(id)arg1;	// IMP=0x0000000000030a41
- (void)_completeWithACSPostRequestFromWebView:(id)arg1;	// IMP=0x000000000003071b
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030706
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000306f1
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030296
- (id)_samlJavaScriptQuery;	// IMP=0x0000000000030200
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000000030156
- (id)_safeACSDictionaryFromResult:(id)arg1;	// IMP=0x00000000000300fb
- (void)cancel;	// IMP=0x00000000000300a1
- (id)initWithConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ffa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
