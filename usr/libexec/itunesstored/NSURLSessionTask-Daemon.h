//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSessionTask.h>

@interface NSURLSessionTask (Daemon)
- (void)setITunesStoreDataConsumer:(id)arg1;	// IMP=0x0010000000138ba9
- (id)ITunesStoreDataConsumer;	// IMP=0x0010000000138b98
- (long long)ITunesStoreCancelReason;	// IMP=0x0010000000138b56
- (id)ITunesStoreCancelError;	// IMP=0x0010000000138b45
- (void)cancelWithITunesStoreReason:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000138a9e
@end

