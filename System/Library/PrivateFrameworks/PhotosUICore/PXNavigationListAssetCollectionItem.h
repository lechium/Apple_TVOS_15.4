//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034cf8b
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;	// IMP=0x000000000034ce28
- (id)cpAnalyticsEventName;	// IMP=0x00000000002f442c
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2;	// IMP=0x00000000002f42c6

// Remaining properties
@property(readonly, nonatomic) PHAssetCollection *collection; // @dynamic collection;

@end

