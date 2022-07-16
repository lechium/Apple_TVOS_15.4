//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_group;

@interface PXStoryImageAssetResourcePreloadingOperation
{
    NSObject<OS_dispatch_group> *_loadingGroup;	// 8 = 0x8
    long long _imageRequestID;	// 16 = 0x10
    double _fractionComplete;	// 24 = 0x18
    struct CGSize _targetSize;	// 32 = 0x20
}

+ (id)_resultHandlingQueue;	// IMP=0x00000000008ad2fe
- (void).cxx_destruct;	// IMP=0x00000000008ad1d1
@property double fractionComplete; // @synthesize fractionComplete=_fractionComplete;
@property long long imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(retain) NSObject<OS_dispatch_group> *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void)cancel;	// IMP=0x00000000008ad0ce
- (void)_handleImageLoadingResultWithImage:(struct CGImage *)arg1 info:(id)arg2;	// IMP=0x00000000008acf69
- (void)px_start;	// IMP=0x00000000008acc45
- (id)diagnosticDescription;	// IMP=0x00000000008acb2c
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000008aca9c
- (id)initWithDisplayAssetResource:(id)arg1 targetSize:(struct CGSize)arg2 mediaProvider:(id)arg3;	// IMP=0x00000000008aca42

@end

