//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSMutableDictionary, NSString, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDataSource, SRStarkItemControllerDelegate;

@interface SRStarkDisambiguationSnippetController
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    id <SRStarkItemControllerDelegate> _delegate;	// 40 = 0x28
    id <SRStarkDisambiguationSnippetControllerDataSource> _dataSource;	// 48 = 0x30
    AceObject *_aceObject;	// 56 = 0x38
    NSString *_disambiguationKey;	// 64 = 0x40
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000013e46
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(readonly, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toggleFullScreen:(_Bool)arg1;	// IMP=0x0010000000013d31
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x0010000000013bcc
- (_Bool)isRightHandDrive;	// IMP=0x0010000000013b79
- (void)didPressShowMore;	// IMP=0x00100000000139e7
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000137c4
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x0010000000013779
- (Class)showMoreCellClass;	// IMP=0x0010000000013768
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00100000000133b8
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x001000000001336d
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0010000000013360
- (id)tableCellIdentifiersAndClasses;	// IMP=0x00100000000132e0
- (void)siriRequestWillStart;	// IMP=0x00100000000132a7
- (unsigned long long)autoDismissalReason;	// IMP=0x001000000001329c
- (long long)autoDismissalStrategy;	// IMP=0x0010000000013291
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000013245
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000131c9
- (void)autodisambiguate;	// IMP=0x001000000001319a
- (_Bool)shouldAutodisambiguate;	// IMP=0x0010000000013185
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;	// IMP=0x0010000000012947

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

