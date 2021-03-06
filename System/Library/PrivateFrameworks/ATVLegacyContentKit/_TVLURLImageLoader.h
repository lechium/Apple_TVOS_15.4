//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/ISURLOperationDelegate-Protocol.h>
#import <ATVLegacyContentKit/TVImageLoader-Protocol.h>

@class ISOperationQueue, NSNumber, NSString;

@interface _TVLURLImageLoader : NSObject <ISURLOperationDelegate, TVImageLoader>
{
    ISOperationQueue *imageLoadQueue;	// 8 = 0x8
    _Bool _imageRotationEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000001df93
- (void).cxx_destruct;	// IMP=0x000000000001ea32
@property(nonatomic, getter=isImageRotationEnabled) _Bool imageRotationEnabled; // @synthesize imageRotationEnabled=_imageRotationEnabled;
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x000000000001e7e0
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x000000000001e319
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000001e2c8
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001e10c
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000001e054
- (id)init;	// IMP=0x000000000001dfe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

