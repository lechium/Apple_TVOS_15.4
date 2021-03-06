//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, WFContentCollection, WFDeletionAuthorizationState, WFWorkflowReference;

@interface WFSmartPromptConfiguration
{
    _Bool _isSpecialRequest;	// 8 = 0x8
    NSString *_localizedPrompt;	// 16 = 0x10
    NSString *_requestType;	// 24 = 0x18
    NSString *_requestSource;	// 32 = 0x20
    NSString *_actionUUID;	// 40 = 0x28
    NSArray *_smartPromptStates;	// 48 = 0x30
    WFDeletionAuthorizationState *_deletionAuthorizationState;	// 56 = 0x38
    WFWorkflowReference *_workflowReference;	// 64 = 0x40
    NSData *_archivedSourceContentCollection;	// 72 = 0x48
    WFContentCollection *_cachedSourceContentCollection;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000163526
- (void).cxx_destruct;	// IMP=0x0000000000163315
@property(readonly, nonatomic) WFContentCollection *cachedSourceContentCollection; // @synthesize cachedSourceContentCollection=_cachedSourceContentCollection;
@property(readonly, copy, nonatomic) NSData *archivedSourceContentCollection; // @synthesize archivedSourceContentCollection=_archivedSourceContentCollection;
@property(readonly, nonatomic) _Bool isSpecialRequest; // @synthesize isSpecialRequest=_isSpecialRequest;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;
@property(readonly, copy, nonatomic) WFDeletionAuthorizationState *deletionAuthorizationState; // @synthesize deletionAuthorizationState=_deletionAuthorizationState;
@property(readonly, copy, nonatomic) NSArray *smartPromptStates; // @synthesize smartPromptStates=_smartPromptStates;
@property(readonly, copy, nonatomic) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, copy, nonatomic) NSString *requestSource; // @synthesize requestSource=_requestSource;
@property(readonly, copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016304a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000162d42
- (id)authorizationDialogRequestWithAttribution:(id)arg1;	// IMP=0x0000000000162ce6
- (id)initWithDeletionAuthorizationState:(id)arg1 contentCollection:(id)arg2 action:(id)arg3 reference:(id)arg4 source:(id)arg5;	// IMP=0x0000000000162837
- (id)initWithSmartPromptStates:(id)arg1 attributionSet:(id)arg2 contentItemCache:(id)arg3 action:(id)arg4 contentDestination:(id)arg5 reference:(id)arg6 source:(id)arg7;	// IMP=0x00000000001622f0

@end

