//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface IDSPushHandlerContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSSet *_topics;	// 16 = 0x10
    NSSet *_commands;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007472e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSSet *topics; // @synthesize topics=_topics;
- (id)initWithQueue:(id)arg1 topics:(id)arg2 commands:(id)arg3;	// IMP=0x0000000000074601

@end
