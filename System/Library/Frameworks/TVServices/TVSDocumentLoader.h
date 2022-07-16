//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/ISURLOperationDelegate-Protocol.h>

@class ISURLOperation, NSError, NSMutableDictionary, NSNumber, NSString, NSURL, SSURLRequestProperties;
@protocol TVSDocumentPostprocessor;

@interface TVSDocumentLoader : NSObject <ISURLOperationDelegate>
{
    ISURLOperation *_operation;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSURL *_requestURL;	// 24 = 0x18
    _Bool _shouldLoadInDaemon;	// 32 = 0x20
    _Bool _isLoaded;	// 33 = 0x21
    NSObject<TVSDocumentPostprocessor> *_postprocessor;	// 40 = 0x28
    unsigned long long _authenticationType;	// 48 = 0x30
    SSURLRequestProperties *_properties;	// 56 = 0x38
    NSMutableDictionary *_metadata;	// 64 = 0x40
    id _content;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

+ (id)documentLoaderWithRequestProperties:(id)arg1;	// IMP=0x0000000000072652
+ (void)initialize;	// IMP=0x00000000000725c6
- (void).cxx_destruct;	// IMP=0x0000000000073eab
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) SSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) _Bool shouldLoadInDaemon; // @synthesize shouldLoadInDaemon=_shouldLoadInDaemon;
@property(nonatomic) unsigned long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain, nonatomic) NSObject<TVSDocumentPostprocessor> *postprocessor; // @synthesize postprocessor=_postprocessor;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x0000000000073d23
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x0000000000073bfb
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0000000000073b49
- (void)operation:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0000000000073a74
- (id)_applyPostprocessingWithContent:(id)arg1 response:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000737ff
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000007329b
- (id)_acceptLanguageHeaderValue;	// IMP=0x00000000000731f8
- (id)_newLoadOperation;	// IMP=0x0000000000072dd7
- (id)_effectiveURL;	// IMP=0x0000000000072d72
- (void)cancel;	// IMP=0x0000000000072c6a
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000072908
@property(readonly, copy, nonatomic) SSURLRequestProperties *requestProperties;
@property(readonly, copy) NSString *description;
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00000000000726c6
- (id)init;	// IMP=0x000000000007269b
- (id)metadataForKey:(id)arg1;	// IMP=0x0000000000073f2b
- (void)setMetadata:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000073f15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
