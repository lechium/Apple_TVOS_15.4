//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFRemoteQuarantinePolicyEvaluatorDelegate-Protocol.h>

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>
{
}

- (id)parameterSummary;	// IMP=0x000000000033d4e9
- (id)name;	// IMP=0x000000000033d4d8
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000033d400
- (id)noWebPageProvidedError;	// IMP=0x000000000033d2ee
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;	// IMP=0x000000000033d2dc
- (id)_getErrorFromScript:(id)arg1;	// IMP=0x000000000033d1db
- (void)getWebPageFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033d124
- (void)evaluateQuarantineWithJavaScript:(id)arg1 webPageURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000033cf77
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000033cde7
- (id)invalidJavaScriptErrorWithSyntaxErrorString:(id)arg1;	// IMP=0x000000000033cce0
- (id)missingCompletionError;	// IMP=0x000000000033cbce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

