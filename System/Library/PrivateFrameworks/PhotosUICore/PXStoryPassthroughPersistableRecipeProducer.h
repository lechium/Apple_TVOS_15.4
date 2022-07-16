//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryPersistableRecipeProducer-Protocol.h>

@protocol PFStoryRecipe;

@interface PXStoryPassthroughPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer>
{
    id <PFStoryRecipe> _persistableRecipe;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c44be
@property(readonly, nonatomic) id <PFStoryRecipe> persistableRecipe; // @synthesize persistableRecipe=_persistableRecipe;
- (id)requestPersistableRecipeWithOptions:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c43fa
- (id)initWithPersistableRecipe:(id)arg1;	// IMP=0x00000000001c4385
- (id)init;	// IMP=0x00000000001c4371

@end

