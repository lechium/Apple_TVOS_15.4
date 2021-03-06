//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000016658f
@property(nonatomic) __weak GKUpdateGroup *group; // @synthesize group=_group;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)addUpdatesFromGroup:(id)arg1;	// IMP=0x0010000000166419
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00100000001662bb
- (void)updateError:(id)arg1;	// IMP=0x0010000000166241
- (oneway void)release;	// IMP=0x001000000016619a
- (id)retain;	// IMP=0x0010000000166108
- (void)dealloc;	// IMP=0x00100000001660ac
- (id)init;	// IMP=0x0010000000166050

@end

