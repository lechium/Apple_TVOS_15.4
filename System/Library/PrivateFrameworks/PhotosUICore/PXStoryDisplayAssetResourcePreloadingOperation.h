//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, PXMediaProvider;
@protocol PXDisplayAsset, PXStoryResource;

@interface PXStoryDisplayAssetResourcePreloadingOperation
{
    id <PXStoryResource> _resource;	// 8 = 0x8
    id <PXDisplayAsset> _displayAsset;	// 16 = 0x10
    PXMediaProvider *_mediaProvider;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    double _startTime;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006b1704
@property double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> displayAsset; // @synthesize displayAsset=_displayAsset;
@property(readonly, nonatomic) id <PXStoryResource> resource; // @synthesize resource=_resource;
- (void)px_finishIfPossible;	// IMP=0x00000000006b145e
- (void)px_start;	// IMP=0x00000000006b1421
- (id)init;	// IMP=0x00000000006b13a7
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000006b1263

@end
