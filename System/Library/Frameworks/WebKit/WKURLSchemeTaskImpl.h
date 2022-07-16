//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>
#import <WebKit/WKURLSchemeTaskPrivate-Protocol.h>

@class NSString, NSURLRequest, WKFrameInfo;

__attribute__((visibility("hidden")))
@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate>
{
    struct ObjectStorage<WebKit::WebURLSchemeTask> _urlSchemeTask;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) WKFrameInfo *_frame;
- (void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;	// IMP=0x00000000002331a9
- (void)didFailWithError:(id)arg1;	// IMP=0x00000000002330ef
- (void)didFinish;	// IMP=0x0000000000233060
- (void)didReceiveData:(id)arg1;	// IMP=0x0000000000232fa6
- (void)didReceiveResponse:(id)arg1;	// IMP=0x0000000000232eec
- (void)_willPerformRedirection:(id)arg1 newRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000232ca4
@property(readonly, nonatomic) _Bool _requestOnlyIfCached;
@property(readonly, copy, nonatomic) NSURLRequest *request;
- (void)dealloc;	// IMP=0x0000000000232c1b
- (id)init;	// IMP=0x0000000000232bfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

