//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface GSStagingPrefix : NSObject
{
    unsigned char _volumeUUID[16];	// 8 = 0x8
    int _deviceID;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSArray *_pathComponents;	// 40 = 0x28
    NSData *_extension;	// 48 = 0x30
    long long _sandboxHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000b866
- (void)cleanupStagingPath:(id)arg1;	// IMP=0x000000000000b80d
- (_Bool)isStagedPath:(id)arg1;	// IMP=0x000000000000b637
- (id)stagingPathforCreatingAdditionWithError:(id *)arg1;	// IMP=0x000000000000b4d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b469
- (unsigned long long)hash;	// IMP=0x000000000000b453
- (id)description;	// IMP=0x000000000000b42a
- (void)dealloc;	// IMP=0x000000000000b3e7
- (void)finalize;	// IMP=0x000000000000b3a4
- (void)_connectionWithDaemonWasLost;	// IMP=0x000000000000b390
- (void)_invalidate:(_Bool)arg1;	// IMP=0x000000000000b1c2
- (_Bool)_refreshWithError:(id *)arg1;	// IMP=0x000000000000aea1
- (id)initWithDocumentID:(id)arg1;	// IMP=0x000000000000ae34
- (id)init;	// IMP=0x000000000000adc8

@end

