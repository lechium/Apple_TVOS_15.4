//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVISAerialServiceConfiguration, TVISAerialStore, TVISIndexSetMuxer;
@protocol OS_dispatch_queue;

@interface TVISAerialOrderingService : NSObject
{
    TVISAerialServiceConfiguration *_configuration;	// 8 = 0x8
    TVISAerialStore *_store;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQ;	// 24 = 0x18
    NSArray *_sortedAssetIDs;	// 32 = 0x20
    TVISIndexSetMuxer *_indexSetMuxer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002c0e0
@property(readonly, nonatomic) TVISIndexSetMuxer *indexSetMuxer; // @synthesize indexSetMuxer=_indexSetMuxer;
@property(readonly, nonatomic) NSArray *sortedAssetIDs; // @synthesize sortedAssetIDs=_sortedAssetIDs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
@property(readonly, nonatomic) TVISAerialStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) TVISAerialServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_synchronouslyFindOptimalPlayOrder;	// IMP=0x000000000002afc0
- (_Bool)_orderNeedsUpdate;	// IMP=0x000000000002acb0
- (void)updatePlayOrderIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a270
- (void)_setUpWithCurrentAssetStore;	// IMP=0x0000000000029820
- (id)initWithConfiguration:(id)arg1 store:(id)arg2;	// IMP=0x0000000000029700
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000029640

@end

