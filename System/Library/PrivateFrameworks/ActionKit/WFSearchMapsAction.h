//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFSearchMapsAction : WFAction
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000003595ef
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000035953f
- (id)appIdentifier;	// IMP=0x000000000035948d
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;	// IMP=0x0000000000359250
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;	// IMP=0x0000000000359163
- (void)openMapItems:(id)arg1;	// IMP=0x0000000000359050
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000358d1e

@end

