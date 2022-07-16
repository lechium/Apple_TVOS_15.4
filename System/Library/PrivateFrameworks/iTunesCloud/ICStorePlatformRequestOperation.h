//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStorePlatformRequest, ICStoreURLRequest, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    ICStoreURLRequest *_activeURLRequest;	// 16 = 0x10
    ICStorePlatformRequestOperation *_strongSelf;	// 24 = 0x18
    ICURLSession *_urlSession;	// 32 = 0x20
    ICStorePlatformRequest *_platformRequest;	// 40 = 0x28
    CDUnknownBlockType _responseHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001bf0e
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest; // @synthesize platformRequest=_platformRequest;
- (id)_URLRequestWithBaseURL:(id)arg1;	// IMP=0x000000000001bd0a
- (id)_requestContext;	// IMP=0x000000000001bbdc
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000001bb70
- (void)_executeUnpersonalized;	// IMP=0x000000000001bac1
- (void)_executePersonalized;	// IMP=0x000000000001ba12
- (void)_enqueueDataRequest:(id)arg1;	// IMP=0x000000000001b8df
- (void)finishWithError:(id)arg1;	// IMP=0x000000000001b895
- (void)execute;	// IMP=0x000000000001b7b7
- (void)cancel;	// IMP=0x000000000001b745
- (id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2;	// IMP=0x000000000001b646
- (id)initWithPlatformRequest:(id)arg1;	// IMP=0x000000000001b5c5

@end
