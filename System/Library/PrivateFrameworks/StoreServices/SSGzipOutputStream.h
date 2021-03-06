//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSError;

@interface SSGzipOutputStream : NSOutputStream
{
    NSOutputStream *_backingStream;	// 8 = 0x8
    struct z_stream_s _stream;	// 16 = 0x10
    unsigned long long _streamContentLength;	// 128 = 0x80
    NSError *_streamError;	// 136 = 0x88
    char *_streamOutBuffer;	// 144 = 0x90
    unsigned long long _streamOutBufferSize;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000001765b7
- (void)_setStreamError:(int)arg1 context:(id)arg2;	// IMP=0x00000000001761ab
- (long long)_consumeStreamOutput:(_Bool)arg1;	// IMP=0x0000000000176133
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000176116
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000001760f9
- (_Bool)hasSpaceAvailable;	// IMP=0x00000000001760dc
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000175dde
- (id)streamError;	// IMP=0x0000000000175d96
- (unsigned long long)streamStatus;	// IMP=0x0000000000175d64
- (unsigned long long)streamContentLength;	// IMP=0x0000000000175d53
- (void)close;	// IMP=0x0000000000175a9f
- (void)open;	// IMP=0x0000000000175a82
- (void)dealloc;	// IMP=0x0000000000175a1c
- (id)initToMemory;	// IMP=0x00000000001757eb
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x0000000000175582
- (_Bool)_initializeOutputStream;	// IMP=0x000000000017532d

@end

