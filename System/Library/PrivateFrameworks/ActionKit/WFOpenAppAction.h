//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFStandaloneShortcutAction-Protocol.h>

@class NSString;

@interface WFOpenAppAction : WFAction <WFStandaloneShortcutAction>
{
}

- (void)generateStandaloneShortcutRepresentation:(CDUnknownBlockType)arg1;	// IMP=0x000000000029cbf4
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000029caa2
- (void)finishRunningWithNoAppError;	// IMP=0x000000000029c9a2
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000029c5de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

