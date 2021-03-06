//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableResourcesDataSourceManager-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>

@class NSObject, NSString, PXStoryConfiguration, PXStoryRecipe, PXStoryRecipeManager, PXStoryResourcesDataSource, PXUpdater;
@protocol OS_dispatch_queue;

@interface PXStoryResourcesDataSourceManager <PXStoryMutableResourcesDataSourceManager, PXChangeObserver, PXStoryQueueParticipant>
{
    _Bool _isDataSourceFinal;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_storyQueue;	// 16 = 0x10
    PXStoryResourcesDataSource *_dataSource;	// 24 = 0x18
    PXStoryRecipeManager *_recipeManager;	// 32 = 0x20
    PXUpdater *_updater;	// 40 = 0x28
    PXStoryConfiguration *_configuration;	// 48 = 0x30
    PXStoryRecipe *_recipe;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003d35b0
@property(retain, nonatomic) PXStoryRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, nonatomic) PXStoryConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) _Bool isDataSourceFinal; // @synthesize isDataSourceFinal=_isDataSourceFinal;
@property(readonly, nonatomic) PXStoryRecipeManager *recipeManager; // @synthesize recipeManager=_recipeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003d34f3
- (void)_updateIsDataSourceFinal;	// IMP=0x00000000003d3496
- (void)_invalidateIsDataSourceFinal;	// IMP=0x00000000003d3452
- (void)_updateDataSource;	// IMP=0x00000000003d3279
- (void)_invalidateDataSource;	// IMP=0x00000000003d3235
- (void)_updateRecipe;	// IMP=0x00000000003d31c6
- (void)_invalidateRecipe;	// IMP=0x00000000003d3182
- (void)_setNeedsUpdate;	// IMP=0x00000000003d316e
- (void)reloadDataSource;	// IMP=0x00000000003d315c
- (void)didPerformChanges;	// IMP=0x00000000003d30f2
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d306d
- (void)setIsDataSourceFinal:(_Bool)arg1;	// IMP=0x00000000003d2ee7
- (void)setDataSource:(id)arg1;	// IMP=0x00000000003d2e72
@property(readonly, nonatomic) PXStoryResourcesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithRecipeManager:(id)arg1;	// IMP=0x00000000003d2681
- (id)init;	// IMP=0x00000000003d2607

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

