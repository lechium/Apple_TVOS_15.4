//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPSecureKeyLoader.h>

@class TVLJavaScriptContext;

@interface TVLSecureKeyJavascriptLoader : TVPSecureKeyLoader
{
    TVLJavaScriptContext *_javaScriptContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001df80
@property(retain, nonatomic) TVLJavaScriptContext *javaScriptContext; // @synthesize javaScriptContext=_javaScriptContext;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;	// IMP=0x000000000001d45f
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;	// IMP=0x000000000001ce0f
- (void)startLoadingCertificateDataForRequest:(id)arg1;	// IMP=0x000000000001c9c8
- (void)_callFunctionWithName:(id)arg1 withData:(id)arg2 request:(id)arg3 successHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c45c
- (long long)_errorCodeForFailureOfFunctionWithName:(id)arg1;	// IMP=0x000000000001c34b
- (unsigned long long)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(id)arg1;	// IMP=0x000000000001c240
- (id)initWithJavaScriptContext:(id)arg1;	// IMP=0x000000000001c1d2

@end

