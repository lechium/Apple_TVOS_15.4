//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer
{
    PXAssetCollectionReference *_assetCollectionReference;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000039b135
@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000039afc0
- (id)localizedTitleForUseCase:(unsigned long long)arg1;	// IMP=0x000000000039af15
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;	// IMP=0x000000000039ae93
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;	// IMP=0x000000000039ae03

@end
