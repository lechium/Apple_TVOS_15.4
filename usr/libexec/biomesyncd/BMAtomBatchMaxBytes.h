//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMAtomBatchMaxBytes : NSObject
{
    unsigned long long _maxBytes;	// 8 = 0x8
    unsigned long long _usedBytes;	// 16 = 0x10
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000003b49
- (void)didAddAtomWithData:(id)arg1;	// IMP=0x0010000000003b25
- (_Bool)canAddAtomWithData:(id)arg1;	// IMP=0x0010000000003b14
- (id)initWithMaxBytes:(unsigned long long)arg1;	// IMP=0x0010000000003acf

@end

