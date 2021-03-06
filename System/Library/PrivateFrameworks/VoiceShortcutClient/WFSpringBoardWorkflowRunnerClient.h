//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFWorkflowRunnerClientDelegate-Protocol.h>

@class NSString, WFSpringBoardWebClipMetadata;

@interface WFSpringBoardWorkflowRunnerClient <WFWorkflowRunnerClientDelegate>
{
    WFSpringBoardWebClipMetadata *_metadata;	// 8 = 0x8
    WFSpringBoardWorkflowRunnerClient *_retainedSelf;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002eeb1
@property(retain, nonatomic) WFSpringBoardWorkflowRunnerClient *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(retain, nonatomic) WFSpringBoardWebClipMetadata *metadata; // @synthesize metadata=_metadata;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x000000000002ee46
- (void)start;	// IMP=0x000000000002ee03
- (void)showSingleStepCompletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ece2
- (id)initWithWorkflowIdentifier:(id)arg1;	// IMP=0x000000000002ec0f
- (id)initWithWebClipMetadata:(id)arg1;	// IMP=0x000000000002eb6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

