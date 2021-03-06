//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AsyncTask
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
}

- (_Bool)isFinished;	// IMP=0x002000000007c6ae
- (_Bool)isExecuting;	// IMP=0x001000000007c69c
- (void)completeWithSuccess;	// IMP=0x001000000007c63f
- (void)completeWithError:(id)arg1;	// IMP=0x001000000007c5e2
- (void)start;	// IMP=0x001000000007c5af
- (void)setFinished:(_Bool)arg1;	// IMP=0x001000000007c540
- (void)setExecuting:(_Bool)arg1;	// IMP=0x001000000007c4d1
- (_Bool)isAsynchronous;	// IMP=0x001000000007c4c9

@end

