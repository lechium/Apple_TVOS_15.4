//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFParameterValuePickable-Protocol.h>

@class INObjectCollection, NSArray, NSError, NSString;
@protocol WFDynamicEnumerationDataSource;

@interface WFDynamicEnumerationParameter <WFParameterValuePickable>
{
    NSArray *_possibleStates;	// 8 = 0x8
    INObjectCollection *_possibleStatesCollection;	// 16 = 0x10
    id _defaultSerializedRepresentation;	// 24 = 0x18
    id <WFDynamicEnumerationDataSource> _dataSource;	// 32 = 0x20
    unsigned long long _defaultValueLoadingState;	// 40 = 0x28
    unsigned long long _possibleStatesLoadingState;	// 48 = 0x30
    NSError *_possibleStatesLoadingError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b8d9a
@property(readonly, nonatomic) NSError *possibleStatesLoadingError; // @synthesize possibleStatesLoadingError=_possibleStatesLoadingError;
@property(readonly, nonatomic) unsigned long long possibleStatesLoadingState; // @synthesize possibleStatesLoadingState=_possibleStatesLoadingState;
@property(nonatomic) unsigned long long defaultValueLoadingState; // @synthesize defaultValueLoadingState=_defaultValueLoadingState;
@property(nonatomic) __weak id <WFDynamicEnumerationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) INObjectCollection *possibleStatesCollection; // @synthesize possibleStatesCollection=_possibleStatesCollection;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b8b74
- (_Bool)isAsynchronous;	// IMP=0x00000000000b8b31
- (void)defaultSerializedRepresentationDidChange;	// IMP=0x00000000000b8ad5
- (void)loadPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8998
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)accessoryColorForPossibleState:(id)arg1;	// IMP=0x00000000000b8762
- (id)defaultSerializedRepresentation;	// IMP=0x00000000000b8591
- (id)accessoryIconForPossibleState:(id)arg1;	// IMP=0x00000000000b84a5
- (id)accessoryImageForPossibleState:(id)arg1;	// IMP=0x00000000000b83b9
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;	// IMP=0x00000000000b82cd
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000000b8247
- (id)possibleStatesForLocalization;	// IMP=0x00000000000b8177
- (void)setPossibleStatesFromRemoteSource:(id)arg1;	// IMP=0x00000000000b814b
- (void)setPossibleStates:(id)arg1;	// IMP=0x00000000000b808a
- (void)reloadPossibleStates;	// IMP=0x00000000000b8024
- (void)clearPossibleStates;	// IMP=0x00000000000b7fd3
- (void)possibleStatesDidChange;	// IMP=0x00000000000b7fa4
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000000b7f37
- (_Bool)alwaysShowsButton;	// IMP=0x00000000000b7f25
- (_Bool)allowsMultipleValues;	// IMP=0x00000000000b7e6d
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000217827
- (void)wf_loadStatesWithSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000217795
@property(readonly, nonatomic) _Bool wf_shouldValidateCurrentStateOnCollectionChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wf_allowsMultipleSelection;
@property(readonly, nonatomic) _Bool wf_alwaysScaleIconImage;
@property(readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property(readonly, nonatomic) _Bool wf_supportsSearch;
@property(readonly, nonatomic) _Bool wf_usesGroupTableViewStyle;
@property(readonly, nonatomic) _Bool wf_usesTogglesForSelection;

@end

