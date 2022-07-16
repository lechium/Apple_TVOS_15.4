//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, RadioRequestContext;
@protocol OS_dispatch_queue;

@interface RadioRequest : NSObject
{
    _Bool _cachedResponse;	// 8 = 0x8
    long long _errorCode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    RadioRequestContext *_requestContext;	// 32 = 0x20
    double _retryInterval;	// 40 = 0x28
    long long _status;	// 48 = 0x30
    NSDictionary *_unparsedResponseDictionary;	// 56 = 0x38
    _Bool _asynchronousBackgroundRequest;	// 64 = 0x40
}

+ (id)defaultURLCache;	// IMP=0x000000000001a8f0
+ (void)loadServiceConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a845
- (void).cxx_destruct;	// IMP=0x000000000001a543
@property(nonatomic, getter=isAsynchronousBackgroundRequest) _Bool asynchronousBackgroundRequest; // @synthesize asynchronousBackgroundRequest=_asynchronousBackgroundRequest;
- (void)_loadRadioStoreBagAndAllowRetry:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a46d
- (void)_loadRadioStoreBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a453
@property(readonly, copy, nonatomic) NSDictionary *unparsedResponseDictionary;
- (void)setUnparsedResponseDictionary:(id)arg1;	// IMP=0x000000000001a30f
@property(readonly, nonatomic) long long status;
- (void)setStatus:(long long)arg1;	// IMP=0x000000000001a236
- (void)setRetryInterval:(double)arg1;	// IMP=0x000000000001a1e6
@property(copy, nonatomic) RadioRequestContext *requestContext;
- (void)setErrorCode:(long long)arg1;	// IMP=0x000000000001a10c
- (void)setCachedResponse:(_Bool)arg1;	// IMP=0x000000000001a0be
@property(readonly, nonatomic) double retryInterval;
@property(readonly, nonatomic, getter=isCachedResponse) _Bool cachedResponse;
@property(readonly, nonatomic) long long errorCode;
- (void)cancel;	// IMP=0x0000000000019e57
- (void)dealloc;	// IMP=0x0000000000019e19
- (id)init;	// IMP=0x0000000000019dc1

@end

