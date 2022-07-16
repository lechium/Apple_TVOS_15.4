//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSDictionary, NSSet, NSString, WFOutOfProcessWorkflowController;

@interface WFRemoteExecutionIncomingRunRequestSession <WFOutOfProcessWorkflowControllerDelegate>
{
    WFOutOfProcessWorkflowController *_controller;	// 8 = 0x8
    NSSet *_lastKnownDestinations;	// 16 = 0x10
    NSDictionary *_lastKnownOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009909a
@property(retain, nonatomic) NSDictionary *lastKnownOptions; // @synthesize lastKnownOptions=_lastKnownOptions;
@property(retain, nonatomic) NSSet *lastKnownDestinations; // @synthesize lastKnownDestinations=_lastKnownDestinations;
@property(retain, nonatomic) WFOutOfProcessWorkflowController *controller; // @synthesize controller=_controller;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithResult:(id)arg2 reference:(id)arg3 dialogAttributions:(id)arg4;	// IMP=0x0000000000099019
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000098ea9
- (void)finish;	// IMP=0x0000000000098e2f
- (double)timeoutLimitInSeconds;	// IMP=0x0000000000098e21
- (void)handleTimeout;	// IMP=0x0000000000098dee
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3 destinations:(id)arg4 options:(id)arg5;	// IMP=0x0000000000098bd9
- (void)sendResponse:(id)arg1 toDestinations:(id)arg2 options:(id)arg3;	// IMP=0x000000000009881e
- (void)handleUnsupportedVersionForRequestData:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4;	// IMP=0x0000000000098618
- (void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x00000000000981e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

