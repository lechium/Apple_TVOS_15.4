//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@interface _PASBigEndianUTF16String : NSString <NSCopying>
{
    unsigned long long _length;	// 8 = 0x8
    const void *_swapped;	// 16 = 0x10
    id _backingObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000002609
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000025e8
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000025d5
- (unsigned long long)length;	// IMP=0x00000000000025c4
- (id)init;	// IMP=0x00000000000025be

@end
