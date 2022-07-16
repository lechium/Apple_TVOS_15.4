//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/SDEventHandlerProvider-Protocol.h>

@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>
{
    _Bool _unlocked;	// 8 = 0x8
    _Bool _foundExtensions;	// 9 = 0x9
    _Bool _finishedDataMigration;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    CDUnknownBlockType _eventHandler;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000003c1de
- (void).cxx_destruct;	// IMP=0x000000000003cc35
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool finishedDataMigration; // @synthesize finishedDataMigration=_finishedDataMigration;
@property(nonatomic) _Bool foundExtensions; // @synthesize foundExtensions=_foundExtensions;
@property(nonatomic) _Bool unlocked; // @synthesize unlocked=_unlocked;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)registerHandlerWithEventMonitor:(id)arg1;	// IMP=0x000000000003cb86
- (void)monitorDataMigrationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c6a7
- (void)unlock;	// IMP=0x000000000003c57e
- (void)_finishMigration;	// IMP=0x000000000003c52f
- (void)_didFindExtensions:(id)arg1;	// IMP=0x000000000003c3ba
- (void)resumeMigrationQueue;	// IMP=0x000000000003c3ac
- (void)suspendMigrationQueue;	// IMP=0x000000000003c39e
- (void)dealloc;	// IMP=0x000000000003c31c
- (id)init;	// IMP=0x000000000003c233

@end

