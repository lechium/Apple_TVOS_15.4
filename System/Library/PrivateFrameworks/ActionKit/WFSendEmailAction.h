//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
{
    _Bool _contentManaged;	// 8 = 0x8
}

+ (id)userInterfaceProtocol;	// IMP=0x00000000002e71ed
@property(nonatomic, getter=isContentManaged) _Bool contentManaged; // @synthesize contentManaged=_contentManaged;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000002e6228
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x00000000002e6110
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;	// IMP=0x00000000002e6086
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e5ee3
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e5e20
- (void)getRecipientsFromParameterValue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e5d7d
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e589c
- (_Bool)requiresRemoteExecution;	// IMP=0x00000000002e586d
- (id)prioritizedParameterKeysForRemoteExecution;	// IMP=0x00000000002e5806
- (id)showsWhenRunIfApplicable;	// IMP=0x00000000002e57d1
- (_Bool)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1;	// IMP=0x00000000002e5642
- (void)handleWatchResponse:(id)arg1;	// IMP=0x00000000002e50c8
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x00000000002e4fcb
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000002e4e6f
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e4c81
- (_Bool)checkManagementLevel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e487d
- (void)prepareEmailContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e4699
- (_Bool)populatesInputFromInputParameter;	// IMP=0x00000000002e4691
- (id)requiredResourcesForIntentAvailableResource;	// IMP=0x00000000002e458d

@end

