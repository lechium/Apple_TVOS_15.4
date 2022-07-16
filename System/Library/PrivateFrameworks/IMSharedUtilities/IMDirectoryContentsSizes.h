//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDirectoryContentsSizes : NSObject
{
    struct IMFileSize _totalSize;	// 8 = 0x8
    struct IMFileSize _totalPurgableSize;	// 24 = 0x18
    struct IMFileSize _totalAttachmentSize;	// 40 = 0x28
}

@property(readonly, nonatomic) struct IMFileSize totalAttachmentSize; // @synthesize totalAttachmentSize=_totalAttachmentSize;
@property(readonly, nonatomic) struct IMFileSize totalPurgableSize; // @synthesize totalPurgableSize=_totalPurgableSize;
@property(readonly, nonatomic) struct IMFileSize totalSize; // @synthesize totalSize=_totalSize;
- (id)initWithDirectoryContents:(id)arg1;	// IMP=0x000000000006ca63

@end

