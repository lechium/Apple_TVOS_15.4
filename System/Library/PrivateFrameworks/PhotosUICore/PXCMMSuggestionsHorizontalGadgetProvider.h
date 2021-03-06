//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXForYouRankable-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSDate, NSString, PXCMMSuggestionsDataSourceManager, PXCPLStatusProvider;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMSuggestionsHorizontalGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>
{
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;	// 8 = 0x8
    _Bool _didGenerateGadgets;	// 16 = 0x10
    PXCPLStatusProvider *_cplStatusProvider;	// 24 = 0x18
    _Bool _cmmIsAvailable;	// 32 = 0x20
    id <PXCMMWorkflowPresenting> _workflowPresenter;	// 40 = 0x28
    NSDate *_cachedPriorityDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000071f118
@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000071f002
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000071ef24
- (void)resetPriorityDate;	// IMP=0x000000000071ee8f
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (void)generateGadgets;	// IMP=0x000000000071edc5
- (void)loadDataForGadgets;	// IMP=0x000000000071edb3
- (unsigned long long)estimatedNumberOfGadgets;	// IMP=0x000000000071ed63
- (_Bool)supportsDynamicRanking;	// IMP=0x000000000071ed5b
- (void)_updateGadgets;	// IMP=0x000000000071ea41
- (void)_configureDataSourceManager;	// IMP=0x000000000071e8be
- (id)initWithWorkflowPresenter:(id)arg1;	// IMP=0x000000000071e74a
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000071e6c7
- (id)init;	// IMP=0x000000000071e64d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

