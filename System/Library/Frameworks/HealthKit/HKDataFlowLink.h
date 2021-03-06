//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;
@protocol HKDataFlowLinkProcessor, OS_os_log;

@interface HKDataFlowLink : NSObject
{
    NSHashTable *_sources;	// 8 = 0x8
    NSHashTable *_destinations;	// 16 = 0x10
    NSObject<OS_os_log> *_category;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    id <HKDataFlowLinkProcessor> _processor;	// 40 = 0x28
    Protocol *_sourceProtocol;	// 48 = 0x30
    Protocol *_destinationProtocol;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000122b62
@property(readonly, nonatomic) Protocol *destinationProtocol; // @synthesize destinationProtocol=_destinationProtocol;
@property(readonly, nonatomic) Protocol *sourceProtocol; // @synthesize sourceProtocol=_sourceProtocol;
@property(readonly, nonatomic) __weak id <HKDataFlowLinkProcessor> processor; // @synthesize processor=_processor;
- (id)description;	// IMP=0x0000000000122ad3
- (void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2;	// IMP=0x0000000000122a41
- (void)removeDestination:(id)arg1;	// IMP=0x000000000012296d
- (void)addDestination:(id)arg1;	// IMP=0x0000000000122697
- (void)sendToDestinationProcessors:(CDUnknownBlockType)arg1;	// IMP=0x00000000001224ea
- (id)destinationProcessorsConformingToProtocol:(id)arg1;	// IMP=0x00000000001221e6
- (id)allDestinationProcessors;	// IMP=0x0000000000122156
- (id)allSourceProcessors;	// IMP=0x00000000001220c6
- (void)source:(id)arg1 didAddUpstreamSource:(id)arg2;	// IMP=0x0000000000122034
- (void)removeSource:(id)arg1;	// IMP=0x0000000000121f4d
- (void)addSource:(id)arg1;	// IMP=0x0000000000121bd7
- (id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4;	// IMP=0x0000000000121a9b

@end

