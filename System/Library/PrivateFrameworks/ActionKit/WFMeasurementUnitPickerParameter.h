//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002f299b
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002f28ed
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002f283d
- (id)possibleStates;	// IMP=0x00000000002f27b5
- (_Bool)isHidden;	// IMP=0x00000000002f2782
- (id)currentUnitType;	// IMP=0x00000000002f26b0
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;	// IMP=0x00000000002f25cc
- (Class)singleStateClass;	// IMP=0x00000000002f250d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

