//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface TPSDiscoverabilityUsageEvent : NSObject
{
    NSString *_contentIdentifier;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _displayType;	// 24 = 0x18
    unsigned long long _flags;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    long long _ineligibleReason;	// 48 = 0x30
    NSArray *_eligibleContext;	// 56 = 0x38
    NSString *_context;	// 64 = 0x40
    NSDate *_date;	// 72 = 0x48
}

+ (id)_eventWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;	// IMP=0x00000000000537b6
+ (id)performedOutcomeEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;	// IMP=0x00000000000536f8
+ (id)ineligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 reason:(long long)arg5 date:(id)arg6;	// IMP=0x0000000000053605
+ (id)contentViewedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 date:(id)arg4;	// IMP=0x0000000000053578
+ (id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 flags:(unsigned long long)arg4 context:(id)arg5 date:(id)arg6;	// IMP=0x000000000005349e
+ (id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;	// IMP=0x000000000005347d
+ (id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 flags:(unsigned long long)arg4 eligibleContext:(id)arg5 date:(id)arg6;	// IMP=0x00000000000533a2
+ (id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 eligibleContext:(id)arg4 date:(id)arg5;	// IMP=0x0000000000053381
- (void).cxx_destruct;	// IMP=0x0000000000053c19
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *eligibleContext; // @synthesize eligibleContext=_eligibleContext;
@property(nonatomic) long long ineligibleReason; // @synthesize ineligibleReason=_ineligibleReason;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)debugDescription;	// IMP=0x00000000000539e7
- (id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;	// IMP=0x000000000005389d

@end

