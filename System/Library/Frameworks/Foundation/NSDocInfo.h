//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSDocInfo : NSObject <NSCopying>
{
    long long time;	// 8 = 0x8
    unsigned short mode;	// 16 = 0x10
    struct {
        unsigned int isDir:1;
        unsigned int isSingleFile:1;
        unsigned int isSoftLink:1;
        unsigned int _pad:13;
    } flags;	// 18 = 0x12
}

- (id)copy;	// IMP=0x00000000001ba0be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ba0b2
- (id)initWithFileAttributes:(id)arg1;	// IMP=0x00000000001ba03e
- (void)setFileAttributes:(id)arg1;	// IMP=0x00000000001b9f54
- (id)initFromInfo:(struct stat *)arg1;	// IMP=0x00000000001b9ec1

@end

