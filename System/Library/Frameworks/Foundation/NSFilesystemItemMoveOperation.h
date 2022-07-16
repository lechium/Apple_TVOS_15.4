//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemMoveOperation
{
    id _delegate;	// 8 = 0x8
    NSURL *_sourceURL;	// 16 = 0x10
    NSURL *_destinationURL;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

+ (id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000069d70
+ (id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;	// IMP=0x0000000000069bd4
- (void)main;	// IMP=0x0000000000069eb4
- (void)_setError:(id)arg1;	// IMP=0x0000000000069e77
- (id)error;	// IMP=0x0000000000069e59
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000069e48
- (id)delegate;	// IMP=0x0000000000069e37
- (_Bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;	// IMP=0x0000000000069dba
- (void)dealloc;	// IMP=0x0000000000069ce7
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000069c40

@end

