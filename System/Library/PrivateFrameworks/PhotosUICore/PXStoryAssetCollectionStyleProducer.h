//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryStylesProducer-Protocol.h>

@protocol OS_dispatch_queue, PXDisplayAssetCollection;

@interface PXStoryAssetCollectionStyleProducer : NSObject <PXStoryStylesProducer>
{
    id <PXDisplayAssetCollection> _assetCollection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003dc949
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)requestStylesWithOptions:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003dc7cd
- (id)initWithAssetCollection:(id)arg1;	// IMP=0x00000000003dc6b8

@end

