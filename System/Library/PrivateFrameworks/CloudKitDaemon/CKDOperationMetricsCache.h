//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationMetricsCache
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
}

+ (id)dbFileName;	// IMP=0x00000000000ca1b8
+ (id)cacheDatabaseSchema;	// IMP=0x00000000000ca1ab
- (void).cxx_destruct;	// IMP=0x00000000000cb08b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8;	// IMP=0x00000000000caacb
- (void)flushMetricsToPowerLog;	// IMP=0x00000000000ca38c
@property(readonly) _Bool hasMetrics;
- (id)initWithCacheDir:(id)arg1;	// IMP=0x00000000000ca1c5

@end
