//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASCompression : NSObject
{
}

+ (id)decompress:(id)arg1 maxLength:(long long)arg2;	// IMP=0x0000000000014e6c
+ (id)decompress:(id)arg1;	// IMP=0x0000000000014e53
+ (id)_compress:(id)arg1 fast:(_Bool)arg2 lowMemory:(_Bool)arg3;	// IMP=0x0000000000014b74
+ (id)fastCompress:(id)arg1;	// IMP=0x0000000000014b57
+ (id)compress:(id)arg1 lowMemory:(_Bool)arg2;	// IMP=0x0000000000014b40
+ (id)compress:(id)arg1 fast:(_Bool)arg2;	// IMP=0x0000000000014b2b

@end
