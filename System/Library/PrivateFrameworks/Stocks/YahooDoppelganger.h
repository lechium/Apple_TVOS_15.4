//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURLSession, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface YahooDoppelganger : NSObject
{
    NSString *_expectedRequestPattern;	// 8 = 0x8
    NSData *_response;	// 16 = 0x10
    unsigned long long _responseChunkSize;	// 24 = 0x18
    unsigned long long _responseChunkDelay;	// 32 = 0x20
    unsigned long long _responseChunkInitialDelay;	// 40 = 0x28
    unsigned long long _responseOffset;	// 48 = 0x30
    _Bool _cancelled;	// 56 = 0x38
    NSURLSession *_session;	// 64 = 0x40
    NSURLSessionDataTask *_dataTask;	// 72 = 0x48
    id <NSURLSessionDataDelegate> _delegate;	// 80 = 0x50
}

+ (_Bool)canHandleRequest:(id)arg1;	// IMP=0x000000000000ab71
+ (_Bool)waitForAllDoppelgangersUpToTimeout:(double)arg1;	// IMP=0x000000000000a7da
+ (void)clearDoppelgangerData;	// IMP=0x000000000000a69d
+ (void)spewDoppelgangerData;	// IMP=0x000000000000a5b3
+ (void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2;	// IMP=0x000000000000a2b4
+ (void)_doppelgangerFinished:(id)arg1;	// IMP=0x000000000000a23b
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2;	// IMP=0x0000000000009ebf
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2;	// IMP=0x0000000000009c42
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(_Bool)arg2;	// IMP=0x000000000000954b
+ (id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2;	// IMP=0x000000000000949d
+ (id)newDoppelgangerMatchingRequestPattern:(id)arg1;	// IMP=0x000000000000940c
+ (void)setTestHarness:(id)arg1;	// IMP=0x00000000000093f8
+ (void)hookIntoYQLRequestIfNeeded;	// IMP=0x0000000000009399
- (void).cxx_destruct;	// IMP=0x000000000000ac14
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long responseChunkInitialDelay; // @synthesize responseChunkInitialDelay=_responseChunkInitialDelay;
@property(nonatomic) unsigned long long responseChunkDelay; // @synthesize responseChunkDelay=_responseChunkDelay;
@property(nonatomic) unsigned long long responseChunkSize; // @synthesize responseChunkSize=_responseChunkSize;
@property(retain, nonatomic) NSData *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *expectedRequestPattern; // @synthesize expectedRequestPattern=_expectedRequestPattern;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000000ab7f
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000000ab79
- (void)cancel;	// IMP=0x000000000000ab67
- (void)resume;	// IMP=0x000000000000ab61
- (void)start;	// IMP=0x000000000000aad3
- (id)description;	// IMP=0x000000000000aaaa
- (void)_relayDataChunk;	// IMP=0x000000000000a8c4
- (id)init;	// IMP=0x000000000000a794
- (_Bool)matchesRequest:(id)arg1;	// IMP=0x000000000000a6e5

@end
