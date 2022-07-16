//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSCheapMutableString
{
    union {
        unsigned short *fat;
        char *thin;
    } contents;	// 8 = 0x8
    struct {
        unsigned int isFat:1;
        unsigned int freeWhenDone:1;
        unsigned int refs:30;
    } flags;	// 16 = 0x10
    unsigned long long numCharacters;	// 24 = 0x18
    void *_reserved;	// 32 = 0x20
}

- (unsigned long long)cStringLength;	// IMP=0x00000000000cf522
- (const char *)lossyCString;	// IMP=0x00000000000cf4b6
- (const char *)cString;	// IMP=0x00000000000cf44a
- (unsigned long long)fastestEncoding;	// IMP=0x00000000000cf416
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000cf3bd
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;	// IMP=0x00000000000cf2a0
- (unsigned long long)length;	// IMP=0x00000000000cf28f
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000cf260
- (void)dealloc;	// IMP=0x00000000000cf1ef
- (void)setContentsNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3 isUnicode:(_Bool)arg4;	// IMP=0x00000000000cf181

@end

