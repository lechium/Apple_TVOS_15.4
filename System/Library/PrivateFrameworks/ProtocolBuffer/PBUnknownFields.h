//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBUnknownFields : NSObject
{
    char *_buf;	// 8 = 0x8
    unsigned long long _bufSpace;	// 16 = 0x10
    unsigned long long _bufLen;	// 24 = 0x18
    unsigned long long _recursionDepth;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x000000000000fdad
- (void)writeTo:(id)arg1;	// IMP=0x000000000000fd86
- (id)description;	// IMP=0x000000000000fd36
- (id)dictionaryRepresentation;	// IMP=0x000000000000fc61

@end

