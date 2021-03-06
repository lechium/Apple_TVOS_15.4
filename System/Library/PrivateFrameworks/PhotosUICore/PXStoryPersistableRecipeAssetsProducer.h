//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryAssetsProducer-Protocol.h>

@protocol OS_dispatch_queue, PFStoryRecipe;

@interface PXStoryPersistableRecipeAssetsProducer : NSObject <PXStoryAssetsProducer>
{
    id <PFStoryRecipe> _persistableRecipe;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000037f8c1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <PFStoryRecipe> persistableRecipe; // @synthesize persistableRecipe=_persistableRecipe;
- (id)requestAssetsWithOptions:(unsigned long long)arg1 storyQueue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000037f705
- (id)initWithPersistableRecipe:(id)arg1;	// IMP=0x000000000037f5f0
- (id)init;	// IMP=0x000000000037f576

@end

