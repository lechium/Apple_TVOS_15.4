//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol NSLocking;

@interface HAP2Lock
{
    _Atomic unsigned long long _lockCount;	// 8 = 0x8
    id <NSLocking> _internalLock;	// 16 = 0x10
}

+ (id)lockWithName:(id)arg1;	// IMP=0x0000000000161048
+ (id)new;	// IMP=0x0000000000160fa0
- (void).cxx_destruct;	// IMP=0x0000000000160f8d
@property(readonly, nonatomic) id <NSLocking> internalLock; // @synthesize internalLock=_internalLock;
- (void)assertOwner;	// IMP=0x0000000000160f76
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000160eca
- (void)_performBlock:(CDUnknownBlockType)arg1 allowRecursive:(_Bool)arg2;	// IMP=0x0000000000160ea4
@property(readonly, nonatomic) NSString *name;
- (id)initWithLock:(id)arg1 name:(id)arg2;	// IMP=0x0000000000160d3d
- (id)init;	// IMP=0x0000000000160c95

@end

