//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction
{
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x000000000024f8f5
+ (id)datedFilenameForFormat:(long long)arg1;	// IMP=0x000000000024f848
+ (id)fileTypeForFormat:(long long)arg1;	// IMP=0x000000000024f804
+ (id)userInterfaceXPCInterface;	// IMP=0x000000000024f75b
+ (id)userInterfaceProtocol;	// IMP=0x000000000024f74a
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000024fc5e
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000024fc45
@property(readonly, nonatomic) double recordingDuration;
@property(readonly, nonatomic) _Bool startImmediately;
@property(readonly, nonatomic) long long outputFormat;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x000000000024f8fd

@end
