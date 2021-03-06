//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/NMSSHSessionDelegate-Protocol.h>

@class NSString;

@interface WFRunSSHScriptAction : WFAction <NMSSHSessionDelegate>
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000002088a9
- (void)getContentDestinationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000208764
- (void)session:(id)arg1 didDisconnectWithError:(id)arg2;	// IMP=0x000000000020874f
- (void)finishRunningSSHScriptWithError:(id)arg1;	// IMP=0x000000000020833f
- (void)authenticateAndRunAsynchronouslyWithInput:(id)arg1 session:(id)arg2;	// IMP=0x0000000000207b92
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000020715d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

