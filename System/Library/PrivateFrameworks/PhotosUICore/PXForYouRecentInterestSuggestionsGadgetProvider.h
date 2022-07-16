//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSString, PXAssetReference, PXForYouSuggestionAssetsDataSourceManager, PXUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate>
{
    PXUIMediaProvider *_oneUpMediaProvider;	// 8 = 0x8
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;	// 16 = 0x10
    PXAssetReference *_oneUpInitialAssetReference;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c2fdd
- (void)_fileRadarForSuggestion:(id)arg1;	// IMP=0x00000000001c2dbf
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c2d5f
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000001c2d4a
- (_Bool)_dismissViewController:(id)arg1 completion:(id)arg2;	// IMP=0x00000000001c2d2d
- (_Bool)_presentViewController:(id)arg1;	// IMP=0x00000000001c2c53
- (_Bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;	// IMP=0x00000000001c2c4b
- (long long)oneUpPresentationActionContext:(id)arg1;	// IMP=0x00000000001c2c43
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;	// IMP=0x00000000001c2ab8
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x00000000001c2796
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x00000000001c2572
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x00000000001c255d
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x00000000001c220f
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x00000000001c1ca2
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x00000000001c1c8d
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x00000000001c1c78
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000001c1c6d
- (void)configureGadget:(id)arg1;	// IMP=0x00000000001c1c04
- (void)_insertSyndicationReplyIntoPreview:(id)arg1 forGadget:(id)arg2;	// IMP=0x00000000001c1b3e
- (void)_addTTRActionIntoPreview:(id)arg1 forGadget:(id)arg2;	// IMP=0x00000000001c197f
- (void)_insertRemoveSuggestionActionIntoPreview:(id)arg1 forGadget:(id)arg2;	// IMP=0x00000000001c17dd
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(_Bool)arg3;	// IMP=0x00000000001c156d
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;	// IMP=0x00000000001c1307
- (id)suggestionGadgetPreviewController:(id)arg1 withMediaProvider:(id)arg2;	// IMP=0x00000000001c0fb7
- (void)presentOneUpForSuggestion:(id)arg1 withMediaProvider:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001c0cf0
- (_Bool)_prepareForOneUpPresentationForSuggestion:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000001c099e
- (id)init;	// IMP=0x00000000001c0900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
