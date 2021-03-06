//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AWDObserverDelegate;

@interface AWDObserver : NSObject
{
    struct shared_ptr<AWDObserverConnection> observerConnection;	// 8 = 0x8
    id <AWDObserverDelegate> _delegate;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000006b72
- (void).cxx_destruct;	// IMP=0x0000000000006b4e
@property(nonatomic) __weak id <AWDObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setConfiguration:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000000692a
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;	// IMP=0x00000000000065c0
- (id)init;	// IMP=0x00000000000064f4

@end

