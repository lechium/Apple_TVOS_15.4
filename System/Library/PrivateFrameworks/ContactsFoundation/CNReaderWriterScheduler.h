//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNReaderWriterScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler>
{
    _Bool _suspended;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_activeReaders;	// 24 = 0x18
    NSMutableArray *_pendingReaders;	// 32 = 0x20
    NSMutableArray *_activeWriters;	// 40 = 0x28
    NSMutableArray *_pendingWriters;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c063
@property(readonly, nonatomic) NSMutableArray *pendingWriters; // @synthesize pendingWriters=_pendingWriters;
@property(readonly, nonatomic) NSMutableArray *activeWriters; // @synthesize activeWriters=_activeWriters;
@property(readonly, nonatomic) NSMutableArray *pendingReaders; // @synthesize pendingReaders=_pendingReaders;
@property(readonly, nonatomic) NSMutableArray *activeReaders; // @synthesize activeReaders=_activeReaders;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeWriter:(id)arg1;	// IMP=0x000000000001bf60
- (void)activateWriter:(id)arg1;	// IMP=0x000000000001be8e
- (void)addWriterWithIdentifier:(id)arg1;	// IMP=0x000000000001bdf3
- (void)removeReader:(id)arg1;	// IMP=0x000000000001bd22
- (void)activateReader:(id)arg1;	// IMP=0x000000000001bc50
- (void)addReaderWithIdentifier:(id)arg1;	// IMP=0x000000000001bbb5
@property(nonatomic, getter=isSuspended) _Bool suspended;
- (void)appendDescriptionToBuilder:(id)arg1;	// IMP=0x000000000001b942
- (void)resume;	// IMP=0x000000000001b90d
- (void)suspend;	// IMP=0x000000000001b8d8
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b822
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b76c
- (id)performWriterBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b66f
- (id)performReaderBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b43c
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000001b331
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000001b250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

