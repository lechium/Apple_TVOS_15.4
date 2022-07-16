//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFCanceler-Protocol.h>

@class NSString, PFAsyncDispatchMulticaster;
@protocol OS_dispatch_queue, PFCancelerObserverMulticaster;

@interface PFCanceler : NSObject <PFCanceler>
{
    NSObject<OS_dispatch_queue> *_serializer;	// 8 = 0x8
    _Bool _isCanceled;	// 16 = 0x10
    PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster> *_multicaster;	// 24 = 0x18
}

+ (_Bool)supportsNotifyOnCancel;	// IMP=0x000000000001ed92
- (void).cxx_destruct;	// IMP=0x000000000001ec22
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001eb6f
- (void)addObserver:(id)arg1;	// IMP=0x000000000001ea21
- (void)cancel;	// IMP=0x000000000001e946
- (_Bool)isCanceled;	// IMP=0x000000000001e8bc
- (id)init;	// IMP=0x000000000001e812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
