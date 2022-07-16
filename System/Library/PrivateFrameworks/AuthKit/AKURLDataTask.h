//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData, NSURLRequest, NSURLSessionDataTask;

@interface AKURLDataTask : NSObject
{
    _Bool _canceledOrCompleted;	// 8 = 0x8
    NSURLRequest *_request;	// 16 = 0x10
    unsigned long long _retryCount;	// 24 = 0x18
    NSURLSessionDataTask *_underlyingTask;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    NSMutableData *_receivedData;	// 48 = 0x30
    NSError *_lastRetryError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000010367
@property(nonatomic) _Bool canceledOrCompleted; // @synthesize canceledOrCompleted=_canceledOrCompleted;
@property(retain, nonatomic) NSError *lastRetryError; // @synthesize lastRetryError=_lastRetryError;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLSessionDataTask *underlyingTask; // @synthesize underlyingTask=_underlyingTask;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)description;	// IMP=0x0000000000010247
- (void)_completeWithError:(id)arg1;	// IMP=0x000000000001005a

@end
