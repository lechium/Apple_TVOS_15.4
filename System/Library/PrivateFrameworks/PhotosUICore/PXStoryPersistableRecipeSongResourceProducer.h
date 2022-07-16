//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStorySongResourceProducer-Protocol.h>

@class PXStoryConfiguration;
@protocol PFStoryRecipe;

@interface PXStoryPersistableRecipeSongResourceProducer : NSObject <PXStorySongResourceProducer>
{
    id <PFStoryRecipe> _persistableRecipe;	// 8 = 0x8
    PXStoryConfiguration *_configuration;	// 16 = 0x10
    unsigned long long logContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024cc5d
@property(nonatomic) unsigned long long logContext; // @synthesize logContext;
- (void)_handlePersistedAudioAsset:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3 options:(unsigned long long)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000024cac3
- (void)_handleAppleMusicPlaybackStatus:(long long)arg1 error:(id)arg2 parentProgress:(id)arg3 options:(unsigned long long)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000024c739
- (id)requestSongResourceWithOptions:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024c4d0
- (id)init;	// IMP=0x000000000024c456
- (id)initWithPersistableRecipe:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000024c3bd

@end
