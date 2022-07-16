//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MNAudioEventQueueDelegate;

__attribute__((visibility("hidden")))
@interface MNAudioSystemEventQueue : NSObject
{
    NSMutableArray *_container;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
    id <MNAudioEventQueueDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a3e1f
@property(nonatomic) __weak id <MNAudioEventQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dequeue;	// IMP=0x00000000000a3d2a
- (void)_enqueue:(id)arg1;	// IMP=0x00000000000a3c64
- (void)clear;	// IMP=0x00000000000a3be7
- (id)dequeue;	// IMP=0x00000000000a3b4e
- (void)_removeEventsMatching:(id)arg1;	// IMP=0x00000000000a39c5
- (_Bool)enqueue:(id)arg1 withOptions:(unsigned long long)arg2 andReport:(out id *)arg3;	// IMP=0x00000000000a34fa
@property(readonly, nonatomic) _Bool full;
@property(readonly, nonatomic) _Bool empty;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long capacity;
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000a3383

@end

