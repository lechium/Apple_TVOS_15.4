//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_os_log;

@interface MRLogBuffer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _capacity;	// 16 = 0x10
    NSObject<OS_os_log> *_category;	// 24 = 0x18
    NSString *_prefix;	// 32 = 0x20
    NSArray *_history;	// 40 = 0x28
}

+ (id)bufferWithCapacity:(long long)arg1 category:(id)arg2 loggingPrefix:(id)arg3;	// IMP=0x00000000001b9d8f
- (void).cxx_destruct;	// IMP=0x00000000001bad84
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSArray *history; // @synthesize history=_history;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) NSObject<OS_os_log> *category; // @synthesize category=_category;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void)log:(id)arg1 withType:(unsigned char)arg2 capture:(_Bool)arg3;	// IMP=0x00000000001babaf
- (void)logFaultWithoutCapture:(id)arg1;	// IMP=0x00000000001baa9d
- (void)logErrorWithoutCapture:(id)arg1;	// IMP=0x00000000001ba98b
- (void)logDebugWithoutCapture:(id)arg1;	// IMP=0x00000000001ba879
- (void)logInfoWithoutCapture:(id)arg1;	// IMP=0x00000000001ba767
- (void)logWithoutCapture:(id)arg1;	// IMP=0x00000000001ba658
- (void)logFault:(id)arg1;	// IMP=0x00000000001ba543
- (void)logError:(id)arg1;	// IMP=0x00000000001ba42e
- (void)logDebug:(id)arg1;	// IMP=0x00000000001ba319
- (void)logInfo:(id)arg1;	// IMP=0x00000000001ba204
- (void)log:(id)arg1;	// IMP=0x00000000001ba0f2
- (id)description;	// IMP=0x00000000001b9ef8
- (id)initWithCapacity:(long long)arg1 category:(id)arg2 prefix:(id)arg3;	// IMP=0x00000000001b9e0e

@end

