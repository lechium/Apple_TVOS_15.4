//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@class NSArray;

@interface _PASProxyConcatenatedString : NSString <NSCopying>
{
    NSArray *_components;	// 8 = 0x8
    unsigned long long *_startIndices;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000033bb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033bae
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000033682
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000033576
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000334f6
- (unsigned long long)length;	// IMP=0x00000000000334e5
- (void)dealloc;	// IMP=0x00000000000334a4

@end
