//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData, NSString, WFTrigger, WFWorkflow;

@interface WFAutomationSuggestion : NSObject <NSCopying>
{
    WFTrigger *_trigger;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSData *_serializedSuggestion;	// 24 = 0x18
    WFWorkflow *_workflow;	// 32 = 0x20
    NSString *_activityType;	// 40 = 0x28
    NSString *_intentType;	// 48 = 0x30
    NSString *_trialID;	// 56 = 0x38
}

+ (id)generateTestSuggestions;	// IMP=0x00000000001565a8
- (void).cxx_destruct;	// IMP=0x00000000001c31be
@property(readonly, nonatomic) NSString *trialID; // @synthesize trialID=_trialID;
@property(readonly, nonatomic) NSString *intentType; // @synthesize intentType=_intentType;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) NSData *serializedSuggestion; // @synthesize serializedSuggestion=_serializedSuggestion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c316d
- (id)initWithShortcut:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5;	// IMP=0x00000000001c2d62
- (id)initWithUserActivity:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5;	// IMP=0x00000000001c2a12
- (id)initWithIntent:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5;	// IMP=0x00000000001c25eb

@end

