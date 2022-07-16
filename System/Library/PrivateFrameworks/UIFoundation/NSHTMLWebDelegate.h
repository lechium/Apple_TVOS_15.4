//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface NSHTMLWebDelegate : NSObject
{
    _Bool _loadDidFinish;	// 8 = 0x8
    _Bool _loadDidSucceed;	// 9 = 0x9
    NSURL *_baseURL;	// 16 = 0x10
}

- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000d9c20
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000d9b46
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000d9b2d
- (void)decidePolicyForRequest:(id)arg1 decisionListener:(id)arg2;	// IMP=0x00000000000d9a0a
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000000d9a04
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;	// IMP=0x00000000000d99fe
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;	// IMP=0x00000000000d99ca
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;	// IMP=0x00000000000d99c1
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x00000000000d99b8
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000d9980
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000d9946
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000d990e
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000000d9908
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000d9902
- (_Bool)loadDidSucceed;	// IMP=0x00000000000d98f9
- (_Bool)loadDidFinish;	// IMP=0x00000000000d98f0
- (void)dealloc;	// IMP=0x00000000000d98b5
- (id)initWithBaseURL:(id)arg1;	// IMP=0x00000000000d9886
- (id)init;	// IMP=0x00000000000d9851

@end

