//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFNotificationAction : WFAction
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000024dd12
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000024dcf9
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000024dce7
- (id)actionAlert;	// IMP=0x000000000024dc32
- (void)runWithUserNotificationCenterInput:(id)arg1;	// IMP=0x000000000024dacc
- (void)getNotificationAttachmentsWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024d835

@end
