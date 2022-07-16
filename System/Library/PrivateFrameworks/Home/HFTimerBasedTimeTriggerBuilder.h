//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFConcreteTimeTriggerBuilderLikeObject-Protocol.h>

@class HFEventBuilder, NSArray, NSString, NSTimeZone;
@protocol HFTimeEventBuilder;

@interface HFTimerBasedTimeTriggerBuilder <HFConcreteTimeTriggerBuilderLikeObject>
{
    NSArray *recurrences;	// 8 = 0x8
    HFEventBuilder<HFTimeEventBuilder> *eventBuilder;	// 16 = 0x10
    NSTimeZone *timeZone;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014c87c
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone;
@property(retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // @synthesize eventBuilder;
@property(copy, nonatomic) NSArray *recurrences; // @synthesize recurrences;
- (void)triggerEnabledStateDidChange:(_Bool)arg1;	// IMP=0x000000000014c74b
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;	// IMP=0x000000000014c64f
- (id)_updateTimeZone;	// IMP=0x000000000014c2ab
- (id)_updateRecurrences;	// IMP=0x000000000014bdfc
- (id)commitEditTrigger;	// IMP=0x000000000014bc44
- (id)commitCreateTrigger;	// IMP=0x000000000014ba62
- (void)_setupWithExistingTrigger:(id)arg1;	// IMP=0x000000000014b7d5
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;	// IMP=0x000000000014b6c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak NSString *name;
@property(readonly) Class superclass;

@end
