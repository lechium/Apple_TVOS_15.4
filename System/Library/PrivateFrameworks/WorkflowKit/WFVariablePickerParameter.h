//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFParameterValuePickable-Protocol.h>

@class NSString;

@interface WFVariablePickerParameter <WFParameterValuePickable>
{
}

- (id)importQuestionBehavior;	// IMP=0x0000000000188b19
- (id)defaultSupportedVariableTypes;	// IMP=0x0000000000188aa8
- (id)possibleStates;	// IMP=0x0000000000188aa0
- (_Bool)alwaysShowsButton;	// IMP=0x0000000000188a98
- (Class)singleStateClass;	// IMP=0x0000000000188a87
- (id)wf_pickerLocalizedImageForState:(id)arg1;	// IMP=0x0000000000216ecd
- (id)wf_pickerLocalizedSubtitleForState:(id)arg1;	// IMP=0x0000000000216ebb
- (id)wf_pickerLocalizedTitleForState:(id)arg1;	// IMP=0x0000000000216ea9
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000216ea3
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000216dcb
@property(readonly, nonatomic) NSString *wf_displayLocalizedPrompt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wf_allowsMultipleSelection;
@property(readonly, nonatomic) _Bool wf_alwaysScaleIconImage;
@property(readonly, nonatomic) _Bool wf_shouldValidateCurrentStateOnCollectionChanged;
@property(readonly, nonatomic) _Bool wf_supportsSearch;
@property(readonly, nonatomic) _Bool wf_usesGroupTableViewStyle;
@property(readonly, nonatomic) _Bool wf_usesTogglesForSelection;

@end

