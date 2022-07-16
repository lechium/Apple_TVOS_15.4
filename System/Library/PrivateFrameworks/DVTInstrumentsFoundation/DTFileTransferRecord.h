//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSURL;

@interface DTFileTransferRecord : NSObject
{
    NSURL *_destinationDirectoryURLToRemoveOnDealloc;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    NSFileHandle *_writeHandle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000057393
@property(retain, nonatomic) NSFileHandle *writeHandle; // @synthesize writeHandle=_writeHandle;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSURL *destinationDirectoryURLToRemoveOnDealloc; // @synthesize destinationDirectoryURLToRemoveOnDealloc=_destinationDirectoryURLToRemoveOnDealloc;
- (void)dealloc;	// IMP=0x00000000000572c0
- (void)closeFileTransfer;	// IMP=0x0000000000057282
@property(readonly, nonatomic) _Bool isTransferOpen;

@end
