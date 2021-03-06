//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplyActionContent;
@protocol PKApplyConfirmInfoSectionControllerDelegate;

@interface PKApplyConfirmInfoSectionController
{
    PKApplyActionContent *_actionContent;	// 8 = 0x8
    id <PKApplyConfirmInfoSectionControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000030b8d
- (void)_configureContentSection:(id)arg1;	// IMP=0x0000000000030855
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x00000000000307a4
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x000000000003050d
- (Class)footerViewClassForSectionIdentifier:(id)arg1;	// IMP=0x0000000000030438
- (id)identifiers;	// IMP=0x00000000000303d1
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;	// IMP=0x0000000000030300
- (void)setPage:(id)arg1;	// IMP=0x0000000000030274
- (id)initWithController:(id)arg1 applyPage:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000301b1

@end

