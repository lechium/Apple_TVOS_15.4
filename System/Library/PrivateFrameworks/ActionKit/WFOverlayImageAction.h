//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFOverlayImageAction : WFAction
{
}

+ (id)userInterfaceXPCInterface;	// IMP=0x00000000003203b3
+ (id)userInterfaceProtocol;	// IMP=0x00000000003203a2
- (void)getImageInputs:(CDUnknownBlockType)arg1 withInput:(id)arg2;	// IMP=0x0000000000320695
- (void)runWithNoUserInterface:(id)arg1;	// IMP=0x0000000000320646
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x00000000003205aa
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000003204ea

@end

