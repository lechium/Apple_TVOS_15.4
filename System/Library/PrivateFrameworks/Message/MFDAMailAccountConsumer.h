//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/DAActionConsumer-Protocol.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer>
{
    NSConditionLock *_doneCondition;	// 8 = 0x8
    _Bool _shouldRetryRequest;	// 16 = 0x10
    _Bool _alwaysReportFailures;	// 17 = 0x11
}

- (void)dealloc;	// IMP=0x000000000007bdd4
- (_Bool)shouldRetryRequest;	// IMP=0x000000000007bd92
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;	// IMP=0x000000000007bd8c
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;	// IMP=0x000000000007bce0
- (void)waitUntilDone;	// IMP=0x000000000007bca3
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;	// IMP=0x000000000007bc5a
- (void)setDone:(_Bool)arg1;	// IMP=0x000000000007bc18
- (id)initWithAlwaysReportFailures:(_Bool)arg1;	// IMP=0x000000000007bba5
- (id)init;	// IMP=0x000000000007bb91

@end

