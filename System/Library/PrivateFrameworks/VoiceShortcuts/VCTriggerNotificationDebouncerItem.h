//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, WFConfiguredTrigger, WFDebouncer, WFWorkflowReference;

@interface VCTriggerNotificationDebouncerItem : NSObject
{
    WFConfiguredTrigger *_configuredTrigger;	// 8 = 0x8
    WFWorkflowReference *_reference;	// 16 = 0x10
    WFDebouncer *_debouncer;	// 24 = 0x18
    NSSet *_triggerEventIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000015d6a
@property(retain, nonatomic) NSSet *triggerEventIDs; // @synthesize triggerEventIDs=_triggerEventIDs;
@property(readonly, nonatomic) WFDebouncer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) WFWorkflowReference *reference; // @synthesize reference=_reference;
@property(readonly, nonatomic) WFConfiguredTrigger *configuredTrigger; // @synthesize configuredTrigger=_configuredTrigger;
- (id)description;	// IMP=0x0000000000015c15
- (id)initWithConfiguredTrigger:(id)arg1 reference:(id)arg2 triggerEventIDs:(id)arg3 debouncer:(id)arg4;	// IMP=0x0000000000015b25

@end

