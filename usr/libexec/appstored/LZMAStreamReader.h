//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LZMADecoder, MISSING_TYPE, NSError, NSString, UnfairLock;
@protocol StreamDelegate, StreamReader;

@interface LZMAStreamReader
{
    UnfairLock *_lock;	// 8 = 0x8
    id <StreamReader> _streamReader;	// 16 = 0x10
    LZMADecoder *_decoder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a9476
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a907a
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x00100000000a8d98
- (void)open;	// IMP=0x00100000000a8d4c
- (void)close;	// IMP=0x00100000000a8cea
@property(readonly) _Bool hasBytesAvailable;
- (void)dealloc;	// IMP=0x00100000000a8a20
- (MISSING_TYPE *)initWithStreamReader:verifyDigest:disableAutodetection: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a8904
- (id)initWithStreamReader:(id)arg1 disableAutodetection:(_Bool)arg2;	// IMP=0x00100000000a88ed
- (id)initWithStreamReader:(id)arg1;	// IMP=0x00100000000a88d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end
