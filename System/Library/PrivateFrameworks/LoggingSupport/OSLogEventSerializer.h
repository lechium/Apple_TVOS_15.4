//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPredicate, OSLogEventSource, OSLogEventStream, _OSLogEventSerializationMetadata;
@protocol OS_dispatch_queue;

@interface OSLogEventSerializer : NSObject
{
    OSLogEventStream *_stream;	// 8 = 0x8
    unsigned long long _maxLogEventBatchSize;	// 16 = 0x10
    unsigned long long _curBatchSize;	// 24 = 0x18
    NSMutableArray *_curBatchDictionaries;	// 32 = 0x20
    _OSLogEventSerializationMetadata *_metadata;	// 40 = 0x28
    unsigned long long _serializedEventCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003feaf
@property(readonly, nonatomic) unsigned long long serializedEventCount; // @synthesize serializedEventCount=_serializedEventCount;
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSMutableArray *curBatchDictionaries; // @synthesize curBatchDictionaries=_curBatchDictionaries;
@property(nonatomic) unsigned long long curBatchSize; // @synthesize curBatchSize=_curBatchSize;
@property(nonatomic) unsigned long long maxLogEventBatchSize; // @synthesize maxLogEventBatchSize=_maxLogEventBatchSize;
@property(readonly, nonatomic) OSLogEventStream *stream; // @synthesize stream=_stream;
- (void)_completeBatch:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fcb7
- (id)_dictionaryForProxy:(id)arg1;	// IMP=0x000000000003e695
- (id)_dictForDecomposedMessage:(id)arg1;	// IMP=0x000000000003e44a
- (id)_arrayForDecomposedMessage:(id)arg1;	// IMP=0x000000000003e367
- (id)_dictForDecomposedMessage:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000000003e18b
- (id)_dictForArg:(id)arg1;	// IMP=0x000000000003de48
- (id)_dictForPlaceholder:(id)arg1;	// IMP=0x000000000003d8f8
- (_Bool)_isBatchCompleted;	// IMP=0x000000000003d8b9
- (void)_serializeEvent:(id)arg1;	// IMP=0x000000000003d691
- (void)invalidate;	// IMP=0x000000000003d654
- (void)serializeFromPosition:(id)arg1;	// IMP=0x000000000003d5e2
- (void)serializeFromLastBoot;	// IMP=0x000000000003d5a5
- (void)serializeFromDate:(id)arg1;	// IMP=0x000000000003d4fe
@property(readonly, nonatomic) OSLogEventSource *source;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property(copy, nonatomic) NSPredicate *filterPredicate;
@property(nonatomic) unsigned long long flags;
- (id)initWithSource:(id)arg1 dataProcessingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003cfee

@end

