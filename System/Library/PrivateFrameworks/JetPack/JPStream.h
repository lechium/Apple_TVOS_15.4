//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface JPStream : NSObject
{
    _Bool _releaseBackingOnDealloc;	// 8 = 0x8
    struct JetPackStream *_backing;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool releaseBackingOnDealloc; // @synthesize releaseBackingOnDealloc=_releaseBackingOnDealloc;
@property(readonly, nonatomic) struct JetPackStream *backing; // @synthesize backing=_backing;
- (_Bool)writeToFile:(id)arg1 blockSize:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000002a68
- (id)readData;	// IMP=0x0000000000002929
- (id)readDataWithLength:(unsigned long long)arg1;	// IMP=0x000000000000289f
- (unsigned long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000002873
- (void)dealloc;	// IMP=0x0000000000002819
- (id)initWithBacking:(struct JetPackStream *)arg1 releaseOnDealloc:(_Bool)arg2;	// IMP=0x00000000000027d1

@end

