//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/TVRecapCommand-Protocol.h>

@class NSString, RCPEventStream, TVRecapButtonCommand;

@interface TVRecapFocusCommand : NSObject <TVRecapCommand>
{
    RCPEventStream *_swipeEventStream;	// 8 = 0x8
    TVRecapButtonCommand *_buttonCommand;	// 16 = 0x10
    _Bool _hasPerformed;	// 24 = 0x18
    long long _action;	// 32 = 0x20
    long long _direction;	// 40 = 0x28
    CDUnknownBlockType _condition;	// 48 = 0x30
}

+ (id)focusAction:(long long)arg1 direction:(long long)arg2 condition:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031025
+ (id)focusAction:(long long)arg1 direction:(long long)arg2;	// IMP=0x0000000000031010
- (void).cxx_destruct;	// IMP=0x00000000000318ba
@property(nonatomic) _Bool hasPerformed; // @synthesize hasPerformed=_hasPerformed;
@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long action; // @synthesize action=_action;
- (long long)_syntheticButtonFromFocusDirection:(long long)arg1;	// IMP=0x0000000000031853
- (void)_applySwipeWithComposer:(id)arg1;	// IMP=0x00000000000317b5
- (_Bool)_shouldPerform;	// IMP=0x0000000000031760
- (void)performWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000313ee
@property(readonly, nonatomic) TVRecapButtonCommand *buttonCommand;
@property(readonly, nonatomic) RCPEventStream *swipeEventStream;
- (id)initWithFocusAction:(long long)arg1 direction:(long long)arg2 condition:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031082

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

