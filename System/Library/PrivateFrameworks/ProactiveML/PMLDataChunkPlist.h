//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PMLDataChunkPlist
{
    id _plist;	// 24 = 0x18
    _Bool _parsed;	// 32 = 0x20
}

+ (id)chunkWithPlist:(id)arg1;	// IMP=0x000000000001d2aa
+ (unsigned int)dataChunkType;	// IMP=0x000000000001d29f
- (void).cxx_destruct;	// IMP=0x000000000001d28c
@property(readonly, nonatomic) id plist;

@end

