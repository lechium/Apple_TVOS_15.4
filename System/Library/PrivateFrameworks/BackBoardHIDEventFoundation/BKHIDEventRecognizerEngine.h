//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventProcessor-Protocol.h>

@class NSMutableArray, NSString;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_recognizers;	// 16 = 0x10
    NSMutableArray *_blocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000156c1
@property(retain, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSMutableArray *recognizers; // @synthesize recognizers=_recognizers;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000000001550b
- (void)removeRecognizer:(id)arg1;	// IMP=0x0000000000015472
- (void)addRecognizer:(id)arg1 recognitionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000152a8
- (id)init;	// IMP=0x000000000001526d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

