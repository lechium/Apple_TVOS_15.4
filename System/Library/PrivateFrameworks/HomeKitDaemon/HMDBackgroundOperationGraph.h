//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSString;

@interface HMDBackgroundOperationGraph : HMFObject <HMFLogging>
{
    NSMapTable *_opGraph;	// 8 = 0x8
    NSMapTable *_inDegrees;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000056d4d3
- (void).cxx_destruct;	// IMP=0x000000000056d05c
@property(retain, nonatomic) NSMapTable *inDegrees; // @synthesize inDegrees=_inDegrees;
@property(retain, nonatomic) NSMapTable *opGraph; // @synthesize opGraph=_opGraph;
- (_Bool)doesCycleExist;	// IMP=0x000000000056cb64
- (_Bool)canAddEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000056ca93
- (id)getIndepentVertices;	// IMP=0x000000000056c7b0
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000056c6e8
- (void)removeVertex:(id)arg1;	// IMP=0x000000000056c577
- (_Bool)doesVertexAlreadyExistInGraph:(id)arg1;	// IMP=0x000000000056c4ed
- (void)addVertex:(id)arg1;	// IMP=0x000000000056c401
- (id)initWithOperations:(id)arg1;	// IMP=0x000000000056bef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

