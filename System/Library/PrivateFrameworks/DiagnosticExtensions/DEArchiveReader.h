//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DEArchiveReader : NSObject
{
    struct archive *_archive;	// 8 = 0x8
}

- (void)closeArchive;	// IMP=0x000000000000a00f
- (id)listContainedPaths;	// IMP=0x0000000000009f53
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000009e19

@end

