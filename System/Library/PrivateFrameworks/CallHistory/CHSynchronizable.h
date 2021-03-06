//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/CHSynchronizable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CHSynchronizable : NSObject <CHSynchronizable>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002678
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)executeSyncWithBOOL:(CDUnknownBlockType)arg1;	// IMP=0x000000000000253f
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002354
- (void)executeSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000022f4
- (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002294
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000002229
- (id)initWithName:(const char *)arg1;	// IMP=0x00000000000021a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

