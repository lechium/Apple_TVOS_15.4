//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class NSMutableDictionary;

@interface WFAutomationSuggestionFeedbackManager : NSObject <WFApplicationStateObserver>
{
    NSMutableDictionary *_feedbackMapping;	// 8 = 0x8
    NSMutableDictionary *_identifierMapping;	// 16 = 0x10
}

+ (id)trialIDWithSerializedSuggestion:(id)arg1;	// IMP=0x000000000023381a
+ (id)sharedManager;	// IMP=0x00000000002337ea
- (void).cxx_destruct;	// IMP=0x00000000002337c2
@property(retain, nonatomic) NSMutableDictionary *identifierMapping; // @synthesize identifierMapping=_identifierMapping;
@property(retain, nonatomic) NSMutableDictionary *feedbackMapping; // @synthesize feedbackMapping=_feedbackMapping;
- (void)dealloc;	// IMP=0x00000000002336d0
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;	// IMP=0x00000000002336b3
- (void)trackRoutineWithIdentifier:(id)arg1 source:(unsigned long long)arg2 completed:(_Bool)arg3 interacted:(_Bool)arg4;	// IMP=0x00000000002335e8
- (void)trackSuggestion:(id)arg1 source:(unsigned long long)arg2 completed:(_Bool)arg3 visible:(_Bool)arg4 interacted:(_Bool)arg5;	// IMP=0x000000000023339c
- (void)reportFeedback;	// IMP=0x0000000000233396
- (void)addFeedbackWithType:(unsigned long long)arg1 serializedSuggestion:(id)arg2 automationIdentifier:(id)arg3;	// IMP=0x000000000023322a
- (_Bool)isMockDataEnabled;	// IMP=0x0000000000233222
- (id)init;	// IMP=0x0000000000233117

@end

