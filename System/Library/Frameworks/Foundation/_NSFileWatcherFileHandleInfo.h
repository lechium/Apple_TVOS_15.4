//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherFileHandleInfo : NSObject
{
    int fileHandle;	// 8 = 0x8
    _Bool closed;	// 12 = 0xc
}

+ (id)openFileWithPath:(id)arg1;	// IMP=0x00000000002129f0
- (id)description;	// IMP=0x0000000000212b9b
- (void)dealloc;	// IMP=0x0000000000212948
- (void)close;	// IMP=0x00000000002128da
- (_Bool)verifyAccessByAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000021283f
@property(readonly) _Bool isDirectory;

@end

