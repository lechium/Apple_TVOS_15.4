//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction
{
    NSArray *_contentClasses;	// 8 = 0x8
}

+ (id)userInterfaceXPCInterface;	// IMP=0x00000000002152e6
+ (id)userInterfaceProtocol;	// IMP=0x00000000002152d5
- (void).cxx_destruct;	// IMP=0x0000000000215cf3
@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000215bee
- (id)selectedApp;	// IMP=0x0000000000215bb9
- (id)outputContentClasses;	// IMP=0x0000000000215ba7
- (id)inputContentClasses;	// IMP=0x0000000000215b21
- (void)updateContentClasses;	// IMP=0x0000000000215864
- (_Bool)inputsMultipleItems;	// IMP=0x000000000021585c
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002156f6
- (void)openContentUsingDefaultApp:(id)arg1;	// IMP=0x000000000021562e
- (void)openContentInSelectedApp:(id)arg1;	// IMP=0x0000000000215559
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x0000000000215496
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000215390

@end

