//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSObject, NSString;
@protocol OS_dispatch_queue, StreamDelegate, StreamReader;

@interface FairPlayStreamReader
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSData *_scratchBuffer;	// 16 = 0x10
    id <StreamReader> _streamReader;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000016a0c7
- (long long)_decryptBuffer:(char *)arg1 length:(unsigned long long)arg2 allowPartial:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000016a080
- (_Bool)_beginSessionWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016a03e
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000169a69
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x001000000016973b
- (void)close;	// IMP=0x00100000001696d9
- (void)open;	// IMP=0x001000000016968d
@property(readonly) _Bool hasBytesAvailable;
- (void)dealloc;	// IMP=0x00100000001694d1
- (id)initWithDPInfo:(id)arg1 streamReader:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001693ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <StreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSError *streamError;
@property(readonly) unsigned long long streamStatus;
@property(readonly) Class superclass;

@end

