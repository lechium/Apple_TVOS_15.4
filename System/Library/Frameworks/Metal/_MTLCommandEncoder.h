//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice, MTLFence;

@interface _MTLCommandEncoder
{
    id <MTLDevice> _device;	// 24 = 0x18
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;	// 32 = 0x20
    unsigned long long _numThisEncoder;	// 40 = 0x28
    unsigned long long _globalTraceObjectID;	// 48 = 0x30
    unsigned long long _labelTraceID;	// 56 = 0x38
    id <MTLFence> _progressFence;	// 64 = 0x40
    _Bool _needsFrameworkAssistedErrorTracking;	// 72 = 0x48
    _Bool _isProgressTrackingEncoder;	// 73 = 0x49
    NSMutableArray *_debugSignposts;	// 80 = 0x50
}

@property(nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property(readonly, nonatomic) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) unsigned long long dispatchType; // @dynamic dispatchType;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007b4dc
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;	// IMP=0x000000000007b4b4
@property(readonly, nonatomic, getter=getType) unsigned long long type;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;	// IMP=0x000000000007b4a6
- (void)popDebugGroup;	// IMP=0x000000000007b4a0
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000007b439
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000007b36a
- (void)endEncoding;	// IMP=0x000000000007af6a
- (void)preEndEncoding;	// IMP=0x000000000007ae90
- (unsigned long long)getDriverUniqueID;	// IMP=0x000000000007ae7e
- (id)commandBuffer;	// IMP=0x000000000007ae6d
@property(readonly) id <MTLDevice> device;
- (id)description;	// IMP=0x000000000007ae48
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000007acdd
- (void)dealloc;	// IMP=0x000000000007ac37
- (id)initWithCommandBuffer:(id)arg1;	// IMP=0x000000000007a811

// Remaining properties
@property(copy) NSString *label; // @dynamic label;

@end

