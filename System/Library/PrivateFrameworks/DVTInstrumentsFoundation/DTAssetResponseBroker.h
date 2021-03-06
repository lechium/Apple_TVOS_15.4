//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DTAssetResponseBroker : NSObject
{
    NSMutableDictionary *_activeHandlers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_activeHandlersQueue;	// 16 = 0x10
}

+ (id)sharedBroker;	// IMP=0x000000000005dd6c
- (void).cxx_destruct;	// IMP=0x000000000005e592
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activeHandlersQueue; // @synthesize activeHandlersQueue=_activeHandlersQueue;
@property(retain, nonatomic) NSMutableDictionary *activeHandlers; // @synthesize activeHandlers=_activeHandlers;
- (void)unregisterHandler:(id)arg1;	// IMP=0x000000000005e39d
- (void)registerHandler:(id)arg1;	// IMP=0x000000000005e1d8
- (_Bool)canContinueServingRequestWithIdentifier:(id)arg1;	// IMP=0x000000000005e1a5
- (void)forwardMessage:(id)arg1;	// IMP=0x000000000005df94
- (id)activeHandlerWithIdentifier:(id)arg1;	// IMP=0x000000000005ddc1
- (id)init;	// IMP=0x000000000005dcc5

@end

