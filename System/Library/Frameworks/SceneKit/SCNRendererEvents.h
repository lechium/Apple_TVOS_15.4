//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLEvent;

@interface SCNRendererEvents : NSObject
{
    id <MTLEvent> _waitEvent;	// 8 = 0x8
    unsigned long long _waitFrame;	// 16 = 0x10
    id <MTLEvent> _signalEvent;	// 24 = 0x18
    unsigned long long _signalFrame;	// 32 = 0x20
}

@property(nonatomic) unsigned long long signalFrame; // @synthesize signalFrame=_signalFrame;
@property(retain, nonatomic) id <MTLEvent> signalEvent; // @synthesize signalEvent=_signalEvent;
@property(nonatomic) unsigned long long waitFrame; // @synthesize waitFrame=_waitFrame;
@property(retain, nonatomic) id <MTLEvent> waitEvent; // @synthesize waitEvent=_waitEvent;
- (void)signalAfterSubmittingRender:(id)arg1;	// IMP=0x00000000001a6de9
- (void)waitBeforeSubmittingRender:(id)arg1;	// IMP=0x00000000001a6d97
- (void)dealloc;	// IMP=0x00000000001a6d4d

@end
