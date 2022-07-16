//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURL, RUIParser, RUIStyle, _RUILoaderSessionDelegateAdapter;
@protocol RUIParserDelegate;

@interface RUILoader <NSURLSessionTaskDelegate>
{
    RUIParser *_parser;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;	// 24 = 0x18
    _Bool _allowNonSecureHTTP;	// 32 = 0x20
    id <RUIParserDelegate> _parserDelegate;	// 40 = 0x28
    RUIStyle *_style;	// 48 = 0x30
    long long _userInterfaceStyle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002222f
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak id <RUIParserDelegate> parserDelegate; // @synthesize parserDelegate=_parserDelegate;
@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000220b4
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021d39
- (_Bool)receivedValidResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000021bc7
- (void)failWithError:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000000000219b1
- (void)webViewFinishedLoading;	// IMP=0x0000000000021926
- (void)didParseData;	// IMP=0x0000000000021894
- (_Bool)anyWebViewLoading;	// IMP=0x000000000002188c
- (void)allWebViewsFinishedLoading;	// IMP=0x00000000000216c1
- (void)_finishLoadWithObjectModel:(id)arg1 actionSignal:(id)arg2 error:(id)arg3;	// IMP=0x00000000000212bf
- (void)_loadResources;	// IMP=0x0000000000021089
- (void)parseData:(id)arg1;	// IMP=0x0000000000020fd9
- (id)URL;	// IMP=0x0000000000020fc4
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000020f3b
- (void)loadXMLUIWithRequest:(id)arg1;	// IMP=0x0000000000020eba
- (void)loadXMLUIWithURL:(id)arg1;	// IMP=0x0000000000020e1f
- (id)urlSessionDelegate;	// IMP=0x0000000000020dca
- (id)sessionConfiguration;	// IMP=0x0000000000020d27
- (void)shouldLoadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020b08
- (void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020901
- (void)loadRequest:(id)arg1;	// IMP=0x0000000000020652
- (void)cancel;	// IMP=0x0000000000020608
- (void)dealloc;	// IMP=0x0000000000020593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
