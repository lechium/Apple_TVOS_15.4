//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVCancellable-Protocol.h>

@class AVPublisher, NSString;
@protocol AVCancellable;

@interface AVSinkSubscriber : NSObject <AVCancellable>
{
    AVPublisher *_publisher;	// 8 = 0x8
    CDUnknownBlockType _sink;	// 16 = 0x10
    id <AVCancellable> _token;	// 24 = 0x18
    struct OpaqueFigSimpleMutex *_cancelMutex;	// 32 = 0x20
}

@property(readonly, copy) NSString *description;
- (void)cancel;	// IMP=0x000000000007fdf2
- (void)dealloc;	// IMP=0x000000000007fda6
- (id)initWithPublisher:(id)arg1 requestingInitialValue:(_Bool)arg2 sink:(CDUnknownBlockType)arg3;	// IMP=0x000000000007fd00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

