//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, SASRequestOptions;

@interface SASRequestTrigger : NSObject
{
    SASRequestOptions *_options;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002f1b2
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) SASRequestOptions *options; // @synthesize options=_options;
- (void)removeTriggerTarget:(id)arg1;	// IMP=0x000000000002f188
- (void)addTriggerTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000002f107
- (void)_updateState:(long long)arg1;	// IMP=0x000000000002ef9b
- (id)initWithRequestOptions:(id)arg1 updateHandle:(CDUnknownBlockType *)arg2;	// IMP=0x000000000002ee70

@end
