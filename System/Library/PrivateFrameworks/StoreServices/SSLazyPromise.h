//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock;

@interface SSLazyPromise
{
    _Bool _executedBlock;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSLock *_executeBlockLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008c397
@property(retain, nonatomic) NSLock *executeBlockLock; // @synthesize executeBlockLock=_executeBlockLock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool executedBlock; // @synthesize executedBlock=_executedBlock;
- (_Bool)_runBlock;	// IMP=0x000000000008c156
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x000000000008c0f5
- (id)resultWithError:(id *)arg1;	// IMP=0x000000000008c09e
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008c01e
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bfba
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bf56
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008beb6

@end

