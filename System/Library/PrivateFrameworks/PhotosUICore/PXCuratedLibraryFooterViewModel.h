//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSString, PXAssetsDataSourceCountsController, PXCPLUIStatusProvider, PXCuratedLibraryAnalysisStatus, PXFooterSettings;
@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;

@interface PXCuratedLibraryFooterViewModel <PXChangeObserver, PXSettingsKeyObserver>
{
    PXCPLUIStatusProvider *_cplUIStatusProvider;	// 8 = 0x8
    long long _animatedGridCycleIndex;	// 16 = 0x10
    _Bool _hasImportantInformation;	// 24 = 0x18
    _Bool _isFooterShown;	// 25 = 0x19
    NSArray *_syncProgressAlbums;	// 32 = 0x20
    id <PXCuratedLibraryFooterViewModelPresentationDelegate> _presentingDelegate;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
    PXCuratedLibraryAnalysisStatus *_analysisStatus;	// 56 = 0x38
    PXAssetsDataSourceCountsController *_itemCountsController;	// 64 = 0x40
    PXFooterSettings *_settings;	// 72 = 0x48
}

+ (_Bool)hasAnalysisProgressForMode:(long long)arg1 analysisStatus:(id)arg2 cplUIStatus:(id)arg3 userDefaults:(id)arg4 outAnimatedIconMode:(long long *)arg5 outProgress:(float *)arg6 outTitle:(id *)arg7 outDescription:(id *)arg8;	// IMP=0x00000000002f2fa4
+ (id)_titleWithOptionalDescription:(id *)arg1 progress:(float *)arg2 forMode:(long long)arg3 itemCountsController:(id)arg4 analysisStatus:(id)arg5 cplUIStatus:(id)arg6 inRebuild:(_Bool)arg7;	// IMP=0x00000000002f2b77
- (void).cxx_destruct;	// IMP=0x00000000002f2839
@property(nonatomic) _Bool isFooterShown; // @synthesize isFooterShown=_isFooterShown;
@property(readonly, nonatomic) PXFooterSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property(readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus; // @synthesize analysisStatus=_analysisStatus;
@property(readonly, nonatomic) _Bool hasImportantInformation; // @synthesize hasImportantInformation=_hasImportantInformation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PXCuratedLibraryFooterViewModelPresentationDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000002f2710
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002f2623
- (void)_updateExposedProperties;	// IMP=0x00000000002f1a79
- (void)_updateHasImportantInformation;	// IMP=0x00000000002f17b8
@property(readonly, nonatomic) NSArray *syncProgressAlbums; // @synthesize syncProgressAlbums=_syncProgressAlbums;
@property(readonly, nonatomic) _Bool shouldAlternateTitleWithAnimatedGridCycle;
- (void)footerAnimationCrossedGridCycleBoundary;	// IMP=0x00000000002f1560
- (void)didHideFooter;	// IMP=0x00000000002f1432
- (void)didShowFooter;	// IMP=0x00000000002f141b
- (void)setHasImportantInformation:(_Bool)arg1;	// IMP=0x00000000002f13f3
- (id)initWithItemCountsController:(id)arg1 cplUIStatusProvider:(id)arg2 analysisStatus:(id)arg3 mode:(long long)arg4 viewModel:(id)arg5;	// IMP=0x00000000002f1214
- (id)init;	// IMP=0x00000000002f119a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
