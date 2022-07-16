//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHAsset, PHAssetCollection, PXDiagnosticsItemProvider, UIViewController;
@protocol PXMovieProviderDelegate;

@interface PXMovieProvider : NSObject
{
    id <PXMovieProviderDelegate> _delegate;	// 8 = 0x8
    PHAssetCollection *_assetCollection;	// 16 = 0x10
    PHAsset *_keyAsset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000149d1b
@property(readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <PXMovieProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)ppt_runTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000000149cd8
@property(readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property(readonly, nonatomic) _Bool canPlayMovie;
@property(readonly, nonatomic) UIViewController *movieViewController;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;	// IMP=0x0000000000149b02
- (id)initWithAssetCollection:(id)arg1;	// IMP=0x0000000000149a97
- (id)init;	// IMP=0x0000000000149a1d

@end
