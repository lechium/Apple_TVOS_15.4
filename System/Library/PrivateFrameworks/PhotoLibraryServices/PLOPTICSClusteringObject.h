//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLOPTICSClusteringObject : NSObject
{
    _Bool _processed;	// 8 = 0x8
    id _object;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    unsigned long long _order;	// 32 = 0x20
    NSMutableArray *_neighbors;	// 40 = 0x28
    double _coreDistance;	// 48 = 0x30
    double _reachabilityDistance;	// 56 = 0x38
}

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;	// IMP=0x000000000020c45b
- (void).cxx_destruct;	// IMP=0x000000000020c36b
@property(nonatomic) _Bool processed; // @synthesize processed=_processed;
@property(nonatomic) double reachabilityDistance; // @synthesize reachabilityDistance=_reachabilityDistance;
@property(nonatomic) double coreDistance; // @synthesize coreDistance=_coreDistance;
@property(readonly, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void)updateCoreDistanceForNeighbor:(unsigned long long)arg1;	// IMP=0x000000000020c271
- (id)neighborAtIndex:(unsigned long long)arg1;	// IMP=0x000000000020c1b9
- (void)sortNeighborsByDistance;	// IMP=0x000000000020c15d
- (void)registerNeighbors:(id)arg1 deleteExisting:(_Bool)arg2;	// IMP=0x000000000020c104
- (id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;	// IMP=0x000000000020c048

@end

