//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAssetCollection, PXTimelineCrop;

@interface PXTimelineDataItem : NSObject
{
    PXTimelineCrop *_suggestedCrop;	// 8 = 0x8
    PHAssetCollection *_assetCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017276d
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) PXTimelineCrop *suggestedCrop; // @synthesize suggestedCrop=_suggestedCrop;
- (id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2;	// IMP=0x000000000017269e

@end
