//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableMomentShareStatus-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PXCPLUIStatusProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@interface PXMomentShareStatus <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus>
{
    PXCPLUIStatusProvider *_statusProvider;	// 8 = 0x8
    id <PXDisplayMomentShare> _momentShare;	// 16 = 0x10
    id <PXDisplayAssetFetchResult> _copyingAssetsFetchResult;	// 24 = 0x18
    id <PXDisplayAssetFetchResult> _copiedAssetsFetchResult;	// 32 = 0x20
    id <PXDisplayAssetFetchResult> _allAssetsFetchResult;	// 40 = 0x28
    id <PXSectionedFetchResult> _participantsFetchResult;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0000000000852c65
- (void).cxx_destruct;	// IMP=0x0000000000852bf0
@property(readonly, nonatomic) id <PXSectionedFetchResult> participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> allAssetsFetchResult; // @synthesize allAssetsFetchResult=_allAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> copiedAssetsFetchResult; // @synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> copyingAssetsFetchResult; // @synthesize copyingAssetsFetchResult=_copyingAssetsFetchResult;
@property(readonly, nonatomic) id <PXDisplayMomentShare> momentShare; // @synthesize momentShare=_momentShare;
- (id)_actionManager;	// IMP=0x0000000000852b93
- (id)owner;	// IMP=0x0000000000852b8b
- (void)setParticipantsFetchResult:(id)arg1;	// IMP=0x0000000000852b25
- (void)setAllAssetsFetchResult:(id)arg1;	// IMP=0x0000000000852abf
- (void)setCopiedAssetsFetchResult:(id)arg1;	// IMP=0x0000000000852a59
- (void)setCopyingAssetsFetchResult:(id)arg1;	// IMP=0x00000000008529f3
- (void)setMomentShare:(id)arg1;	// IMP=0x000000000085298d
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000085295e
@property(readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1;	// IMP=0x000000000085272a
- (id)init;	// IMP=0x00000000008526b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
