//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSPlaceholderMutableString
{
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x00000000000cfc9c
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000cfc68
- (unsigned long long)length;	// IMP=0x00000000000cfc34
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x00000000000cfb87
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x00000000000cfb17
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;	// IMP=0x00000000000cfa39
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cf9e4
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;	// IMP=0x00000000000cf995
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cf91e
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;	// IMP=0x00000000000cf854
- (id)initWithUTF8String:(const char *)arg1;	// IMP=0x00000000000cf760
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;	// IMP=0x00000000000cf6ba
- (id)initWithString:(id)arg1;	// IMP=0x00000000000cf5f5
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000cf5df
- (id)init;	// IMP=0x00000000000cf5c9
- (void)dealloc;	// IMP=0x00000000000cf5c3
- (_Bool)_tryRetain;	// IMP=0x00000000000cf5bb
- (_Bool)_isDeallocating;	// IMP=0x00000000000cf5b3
- (oneway void)release;	// IMP=0x00000000000cf5ad
- (unsigned long long)retainCount;	// IMP=0x00000000000cf5a0
- (id)retain;	// IMP=0x00000000000cf597
- (id)autorelease;	// IMP=0x00000000000cf58e

@end
