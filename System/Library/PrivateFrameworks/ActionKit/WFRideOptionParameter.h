//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFRideOptionParameter : WFDynamicEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000235dcd
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;	// IMP=0x0000000000235cf3
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x000000000023592e
- (Class)singleStateClass;	// IMP=0x000000000023591d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

