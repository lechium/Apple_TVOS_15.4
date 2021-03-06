//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CPLActiveDownloadQueue : NSObject
{
    NSMutableArray *_transferTasks;	// 8 = 0x8
    NSMutableArray *_transportTasks;	// 16 = 0x10
    _Bool _FIFOQueue;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    unsigned long long _maximumBatchSize;	// 48 = 0x30
    long long _coalescingInterval;	// 56 = 0x38
    CDUnknownBlockType _groupConstructor;	// 64 = 0x40
    unsigned long long _maximumConcurrentTransportTasks;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000ab1f3
@property(readonly, nonatomic) unsigned long long maximumConcurrentTransportTasks; // @synthesize maximumConcurrentTransportTasks=_maximumConcurrentTransportTasks;
@property(readonly, nonatomic) CDUnknownBlockType groupConstructor; // @synthesize groupConstructor=_groupConstructor;
@property(readonly, nonatomic) long long coalescingInterval; // @synthesize coalescingInterval=_coalescingInterval;
@property(readonly, nonatomic) unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic, getter=isFIFOQueue) _Bool FIFOQueue; // @synthesize FIFOQueue=_FIFOQueue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isHighPriority;
- (id)status;	// IMP=0x00000000000ab0d0
- (id)dequeueLastTransportTask;	// IMP=0x00000000000ab088
@property(readonly, nonatomic) unsigned long long countOfTransferTasksInTransportTasks;
@property(readonly, nonatomic) unsigned long long countOfTransportTasks;
- (void)removeTransportTask:(id)arg1;	// IMP=0x00000000000aaed7
- (void)addTransportTask:(id)arg1;	// IMP=0x00000000000aaec1
- (void)removeAllTransferTasks;	// IMP=0x00000000000aaeab
@property(readonly, nonatomic) NSArray *allTransferTasks;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long *)arg1;	// IMP=0x00000000000aab8d
@property(readonly, nonatomic) unsigned long long countOfTransferTasks;
- (void)removeTransferTask:(id)arg1;	// IMP=0x00000000000aab61
- (void)addTransferTask:(id)arg1;	// IMP=0x00000000000aa9ce
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 FIFOQueue:(_Bool)arg3 maximumBatchSize:(unsigned long long)arg4 maximumConcurrentTransportTasks:(unsigned long long)arg5 coalescingInterval:(long long)arg6 groupConstructor:(CDUnknownBlockType)arg7;	// IMP=0x00000000000aa8be

@end

