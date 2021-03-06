//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFArrayParameterEventObserver-Protocol.h>
#import <WorkflowKit/WFVariableDelegate-Protocol.h>

@class NSString, WFVariableString;

@interface WFChooseFromMenuAction <WFArrayParameterEventObserver, WFVariableDelegate>
{
    long long _latestMenuChoice;	// 8 = 0x8
    WFVariableString *_itemTitle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000210d9a
@property(copy, nonatomic) WFVariableString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) long long latestMenuChoice; // @synthesize latestMenuChoice=_latestMenuChoice;
- (void)variableDidChange:(id)arg1;	// IMP=0x0000000000210d66
- (void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000210c1c
- (void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;	// IMP=0x0000000000210b82
- (void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;	// IMP=0x0000000000210920
- (void)arrayParameter:(id)arg1 itemWasInserted:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000002105f3
- (unsigned long long)numberOfActionsIncludedWithAction:(id)arg1;	// IMP=0x00000000002103c1
- (id)intermediaryActions;	// IMP=0x00000000002103af
- (_Bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;	// IMP=0x0000000000210331
- (id)defaultOutputName;	// IMP=0x0000000000210324
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000002102bc
- (void)showAlertWithInput:(id)arg1;	// IMP=0x0000000000210061
- (id)newIntermediaryActionWithMenuItemTitle:(id)arg1;	// IMP=0x000000000020fff2
- (id)createAccompanyingActions;	// IMP=0x000000000020fd76
- (id)inputSourceInWorkflow:(id)arg1;	// IMP=0x000000000020fcde
- (_Bool)inputPassthrough;	// IMP=0x000000000020fcd6
- (_Bool)inputRequired;	// IMP=0x000000000020fcbd
- (id)name;	// IMP=0x000000000020fc0e
- (id)serializedParameters;	// IMP=0x000000000020f9b1
- (void)initializeParameters;	// IMP=0x000000000020f939
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x000000000020f74a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

