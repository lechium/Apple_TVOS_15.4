//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

@interface CSDVoIPProcessAssertionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSCountedSet *_processAssertions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000101395
@property(retain, nonatomic) NSCountedSet *processAssertions; // @synthesize processAssertions=_processAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)invalidateProcessAssertionForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101323
- (void)invalidateProcessAssertionForBundleIdentifier:(id)arg1;	// IMP=0x001000000010130f
- (void)acquireProcessAssertionForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101309
- (void)acquireProcessAssertionForBundleIdentifier:(id)arg1;	// IMP=0x00100000001012f5
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x0010000000101270

@end

