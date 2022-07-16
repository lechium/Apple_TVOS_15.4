//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryDiagnosticHUDContentProvider-Protocol.h>
#import <PhotosUICore/PXStoryMutableTransitionController-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, PXGEntityManager, PXStoryModel, PXStoryTransitionModel, PXStoryTransitionProducer;
@protocol PXStoryTransitionSource;

@interface PXStoryTransitionController <PXChangeObserver, PXStoryMutableTransitionController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>
{
    NSMutableArray *_activeClipTransitions;	// 8 = 0x8
    PXStoryTransitionProducer *_transitionProducer;	// 16 = 0x10
    PXGEntityManager *_entityManager;	// 24 = 0x18
    PXStoryModel *_model;	// 32 = 0x20
    id <PXStoryTransitionSource> _transitionSource;	// 40 = 0x28
    long long _currentSegmentIdentifier;	// 48 = 0x30
    PXStoryTransitionModel *_pendingTransitionModel;	// 56 = 0x38
    NSError *_currentError;	// 64 = 0x40
    NSArray *_interruptedTransitionErrorDescriptions;	// 72 = 0x48
    CDStruct_b1a1f14e _activeTransition;	// 80 = 0x50
}

+ (_Bool)_isSupportedTransitionWithKind:(BOOL)arg1 forClipWithResourceKind:(long long)arg2;	// IMP=0x0000000000578a61
- (void).cxx_destruct;	// IMP=0x0000000000577f36
@property(retain, nonatomic) NSArray *interruptedTransitionErrorDescriptions; // @synthesize interruptedTransitionErrorDescriptions=_interruptedTransitionErrorDescriptions;
@property(retain, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(readonly, nonatomic) PXStoryTransitionModel *pendingTransitionModel; // @synthesize pendingTransitionModel=_pendingTransitionModel;
@property(nonatomic) long long currentSegmentIdentifier; // @synthesize currentSegmentIdentifier=_currentSegmentIdentifier;
@property(readonly, nonatomic) __weak id <PXStoryTransitionSource> transitionSource; // @synthesize transitionSource=_transitionSource;
@property(readonly, nonatomic) CDStruct_912cb5d2 activeTransition; // @synthesize activeTransition=_activeTransition;
@property(readonly, nonatomic) __weak PXStoryModel *model; // @synthesize model=_model;
@property(nonatomic) __weak PXGEntityManager *entityManager; // @synthesize entityManager=_entityManager;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x0000000000577d48
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;	// IMP=0x0000000000577cb0
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize)arg2;	// IMP=0x00000000005775c4
- (void)_updateCurrentSegmentIdentifierIfNeeded;	// IMP=0x000000000057750f
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000057746e
- (void)enumerateClipIdentifiersForActiveTransitionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000577073
- (void)enumerateClipIdentifiersForPendingTransitionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000576eee
- (_Bool)_canStartTransitionWithKind:(BOOL)arg1;	// IMP=0x0000000000576df1
- (void)setActiveTransition:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000576be4
- (void)setPendingTransitionModel:(id)arg1;	// IMP=0x0000000000576b23
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000576af4
- (void)_handleTransitionCompleted:(id)arg1;	// IMP=0x0000000000576985
- (void)_reportInterruptedTransitionForNewTransitionBetweenSegmentWithIdentifier:(long long)arg1 andSegmentWithIdentifier:(long long)arg2;	// IMP=0x00000000005767c8
- (void)_interruptActiveTransitions;	// IMP=0x000000000057665e
- (void)_startTransition:(id)arg1;	// IMP=0x0000000000576370
- (void)startPendingTransitionIfNeeded;	// IMP=0x0000000000575fe0
- (void)_updatePendingTransitionModelWithSegmentTransitionInfo:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000575c96
- (void)setCurrentSegmentIdentifier:(long long)arg1 allowTransitions:(_Bool)arg2;	// IMP=0x0000000000575b38
- (id)initWithModel:(id)arg1 transitionSource:(id)arg2;	// IMP=0x0000000000575981

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

