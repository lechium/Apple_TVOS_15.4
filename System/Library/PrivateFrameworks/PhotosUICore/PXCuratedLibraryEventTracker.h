//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryEventTracker-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXSectionedObjectReference;

@interface PXCuratedLibraryEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker>
{
    _Bool _loggedFirstTimeExperience;	// 8 = 0x8
    NSTimer *_slowScrollRegimeTimer;	// 16 = 0x10
    float _analysisProgress;	// 24 = 0x18
    float _firstTimeExperienceAnalysisProgress;	// 28 = 0x1c
    PXCuratedLibraryViewModel *_viewModel;	// 32 = 0x20
    PXCuratedLibraryLayout *_layout;	// 40 = 0x28
    unsigned long long _userEventSource;	// 48 = 0x30
    long long _currentlyViewedZoomLevel;	// 56 = 0x38
    long long _currentZoomLevelSignpost;	// 64 = 0x40
    NSString *_currentAllPhotosZoomStateName;	// 72 = 0x48
    long long _currentAllPhotosZoomStateSignpost;	// 80 = 0x50
    PXSectionedObjectReference *_dominantObjectReference;	// 88 = 0x58
    long long _libraryItemsCount;	// 96 = 0x60
    long long _firstTimeExperienceLibraryItemsCount;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003c1094
@property(nonatomic) long long firstTimeExperienceLibraryItemsCount; // @synthesize firstTimeExperienceLibraryItemsCount=_firstTimeExperienceLibraryItemsCount;
@property(nonatomic) float firstTimeExperienceAnalysisProgress; // @synthesize firstTimeExperienceAnalysisProgress=_firstTimeExperienceAnalysisProgress;
@property(nonatomic) float analysisProgress; // @synthesize analysisProgress=_analysisProgress;
@property(nonatomic) long long libraryItemsCount; // @synthesize libraryItemsCount=_libraryItemsCount;
@property(retain, nonatomic) PXSectionedObjectReference *dominantObjectReference; // @synthesize dominantObjectReference=_dominantObjectReference;
@property(nonatomic) long long currentAllPhotosZoomStateSignpost; // @synthesize currentAllPhotosZoomStateSignpost=_currentAllPhotosZoomStateSignpost;
@property(retain, nonatomic) NSString *currentAllPhotosZoomStateName; // @synthesize currentAllPhotosZoomStateName=_currentAllPhotosZoomStateName;
@property(nonatomic) long long currentZoomLevelSignpost; // @synthesize currentZoomLevelSignpost=_currentZoomLevelSignpost;
@property(nonatomic) long long currentlyViewedZoomLevel; // @synthesize currentlyViewedZoomLevel=_currentlyViewedZoomLevel;
@property(nonatomic) unsigned long long userEventSource; // @synthesize userEventSource=_userEventSource;
@property(readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000003c0e37
- (void)logAnalysisProgress:(float)arg1;	// IMP=0x00000000003c0dde
- (void)logLibraryItemsCount:(long long)arg1;	// IMP=0x00000000003c0d8b
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;	// IMP=0x00000000003c0beb
- (void)_updateDominantObjectReference;	// IMP=0x00000000003c096d
- (void)_invalidateDominantObjectReference;	// IMP=0x00000000003c0929
- (void)_logDidEndViewingAllPhotosZoomStateName:(id)arg1;	// IMP=0x00000000003c080b
- (void)_logDidStartViewingAllPhotosZoomStateName:(id)arg1;	// IMP=0x00000000003c0745
- (void)_updateCurrentAllPhotosZoomState;	// IMP=0x00000000003c04c9
- (void)_invalidateCurrentAllPhotosZoomState;	// IMP=0x00000000003c0485
- (void)_logDidEndViewingZoomLevel:(long long)arg1;	// IMP=0x00000000003c0270
- (void)_logDidStartViewingZoomLevel:(long long)arg1;	// IMP=0x00000000003c0079
- (void)_updateCurrentlyViewedZoomLevel;	// IMP=0x00000000003bff8b
- (void)_invalidateCurrentlyViewedZoomLevel;	// IMP=0x00000000003bff47
- (void)_updateFirstTimeExperienceReadinessLogging;	// IMP=0x00000000003bfc92
- (void)_invalidateFirstTimeExperienceReadinessLogging;	// IMP=0x00000000003bfc4e
- (void)_updateUserEventSource;	// IMP=0x00000000003bf9a6
- (void)_invalidateUserEventSource;	// IMP=0x00000000003bf962
- (id)userEventTracker;	// IMP=0x00000000003bf80e
- (void)dealloc;	// IMP=0x00000000003bf7af
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;	// IMP=0x00000000003bf585
- (id)initWithViewName:(id)arg1;	// IMP=0x00000000003bf502

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSMutableDictionary *payload;
@property(readonly) Class superclass;

@end
