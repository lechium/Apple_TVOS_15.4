//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVCKDataQuery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _TVCKDataQueryRecord : NSObject
{
    _Bool _processAsync;	// 8 = 0x8
    TVCKDataQuery *_query;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001fb99
@property(nonatomic) _Bool processAsync; // @synthesize processAsync=_processAsync;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) TVCKDataQuery *query; // @synthesize query=_query;
- (void)invalidate;	// IMP=0x000000000001fae3
- (id)initWithQuery:(id)arg1 priority:(long long)arg2 processAsync:(_Bool)arg3 withCompletionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f9fa

@end

