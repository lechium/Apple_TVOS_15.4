//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;
@protocol OS_dispatch_queue;

@interface OSLogEventStreamBase : NSObject
{
    unsigned int _invalidated;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_target;	// 24 = 0x18
    unsigned long long _flags;	// 32 = 0x20
    NSPredicate *_filterPredicate;	// 40 = 0x28
    CDUnknownBlockType _streamHandler;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000263c5
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) CDUnknownBlockType streamHandler; // @synthesize streamHandler=_streamHandler;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *target; // @synthesize target=_target;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)invalidate;	// IMP=0x00000000000262e4
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026259
- (id)init;	// IMP=0x0000000000026037

@end

