//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXFilterControllerDelegate-Protocol.h>
#import <PhotosUICore/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, PXUIFilterController;

@interface PXPhotosGridFilterActionPerformer <UIAdaptivePresentationControllerDelegate, PXFilterControllerDelegate>
{
    PXUIFilterController *_filterController;	// 8 = 0x8
}

+ (_Bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;	// IMP=0x000000000062d540
- (void).cxx_destruct;	// IMP=0x000000000062d52d
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000062d514
- (void)filterControllerDidComplete:(id)arg1;	// IMP=0x000000000062d4fb
- (void)filterController:(id)arg1 contentFilterStateChanged:(id)arg2;	// IMP=0x000000000062d481
- (id)contentFilterHiddenTypesForFilterController:(id)arg1;	// IMP=0x000000000062d3c7
- (long long)libraryTypeForFilterController:(id)arg1;	// IMP=0x000000000062d311
- (void)performUserInteractionTask;	// IMP=0x000000000062d13e
- (id)activitySystemImageName;	// IMP=0x000000000062d0e1
- (id)activityType;	// IMP=0x000000000062d0c2
- (id)localizedTitleForUseCase:(unsigned long long)arg1;	// IMP=0x000000000062d054
- (id)initWithViewModel:(id)arg1 actionType:(id)arg2;	// IMP=0x000000000062ce2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

