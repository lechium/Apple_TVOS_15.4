//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WFScreenOnObserverDelegate;

@interface WFScreenOnObserver : NSObject
{
    _Bool _screenOn;	// 8 = 0x8
    int _token;	// 12 = 0xc
    id <WFScreenOnObserverDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007668c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int token; // @synthesize token=_token;
@property(nonatomic) __weak id <WFScreenOnObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool screenOn; // @synthesize screenOn=_screenOn;
- (void)stateChanged:(_Bool)arg1;	// IMP=0x00000000000764c6
- (void)stop;	// IMP=0x00000000000764b9
- (void)start;	// IMP=0x0000000000076424
- (id)init;	// IMP=0x0000000000076389

@end

