//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SATimerTimerAction;

@interface SATimerShowAndPerformTimerAction
{
}

+ (id)showAndPerformTimerActionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003117b
+ (id)showAndPerformTimerAction;	// IMP=0x0000000000031169
- (_Bool)requiresResponse;	// IMP=0x00000000000311a7
@property(retain, nonatomic) id <SATimerTimerAction> timerAction;
- (id)encodedClassName;	// IMP=0x000000000003115c
- (id)groupIdentifier;	// IMP=0x0000000000031148

@end

