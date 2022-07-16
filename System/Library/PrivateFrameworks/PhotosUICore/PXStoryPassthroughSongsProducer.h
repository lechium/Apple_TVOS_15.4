//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStorySongsProducer-Protocol.h>

@protocol PXAudioAssetFetchResult;

@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer>
{
    unsigned long long logContext;	// 8 = 0x8
    id <PXAudioAssetFetchResult> _songs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011a38a
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> songs; // @synthesize songs=_songs;
@property(nonatomic) unsigned long long logContext; // @synthesize logContext;
- (id)requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011a2d6
- (id)initWithSongs:(id)arg1;	// IMP=0x000000000011a26b
- (id)init;	// IMP=0x000000000011a257

@end
