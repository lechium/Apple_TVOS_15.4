//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPButtonEventStreamComposer-Protocol.h>
#import <Recap/RCPFluidSwipeGesturesEventStreamComposer-Protocol.h>
#import <Recap/RCPGameControllerEventStreamComposer-Protocol.h>
#import <Recap/RCPTouchEventStreamComposer-Protocol.h>

@class RCPEventSenderProperties;

@protocol RCPEventStreamComposer <RCPTouchEventStreamComposer, RCPButtonEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPGameControllerEventStreamComposer>
- (void)composeWithSender:(RCPEventSenderProperties *)arg1 actionBlock:(void (^)(id <RCPEventStreamComposer>))arg2;
@end

