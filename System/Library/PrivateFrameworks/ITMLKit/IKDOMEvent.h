//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMEvent-Protocol.h>

@class IKDOMNode, NSDate, NSString;

@interface IKDOMEvent <IKJSDOMEvent>
{
    _Bool _bubbles;	// 8 = 0x8
    _Bool _cancelable;	// 9 = 0x9
    _Bool _inUse;	// 10 = 0xa
    _Bool _defaultPrevented;	// 11 = 0xb
    NSString *_type;	// 16 = 0x10
    IKDOMNode *_target;	// 24 = 0x18
    NSDate *_timeStamp;	// 32 = 0x20
    NSString *_xmlAttribute;	// 40 = 0x28
    IKDOMNode *_currentTarget;	// 48 = 0x30
    long long _eventPhase;	// 56 = 0x38
    long long _dispatchState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000097757
@property(nonatomic) _Bool defaultPrevented; // @synthesize defaultPrevented=_defaultPrevented;
@property(nonatomic) long long dispatchState; // @synthesize dispatchState=_dispatchState;
@property(nonatomic) long long eventPhase; // @synthesize eventPhase=_eventPhase;
@property(retain, nonatomic) IKDOMNode *currentTarget; // @synthesize currentTarget=_currentTarget;
@property(nonatomic, getter=isInUse) _Bool inUse; // @synthesize inUse=_inUse;
@property(readonly, retain, nonatomic) NSString *xmlAttribute; // @synthesize xmlAttribute=_xmlAttribute;
@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) _Bool cancelable; // @synthesize cancelable=_cancelable;
@property(readonly, nonatomic) _Bool bubbles; // @synthesize bubbles=_bubbles;
@property(retain, nonatomic) IKDOMNode *target; // @synthesize target=_target;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)stopImmediatePropagation;	// IMP=0x00000000000975fa
- (void)preventDefault;	// IMP=0x00000000000975be
- (void)stopPropagation;	// IMP=0x0000000000097582
- (_Bool)isImmediatePropagationStopped;	// IMP=0x0000000000097568
- (_Bool)isPropagationStopped;	// IMP=0x000000000009752b
- (void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2;	// IMP=0x00000000000974ae
- (id)initWithType:(id)arg1 eventInit:(id)arg2;	// IMP=0x0000000000097320
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(_Bool)arg4 isCancelable:(_Bool)arg5;	// IMP=0x0000000000097258

@end

