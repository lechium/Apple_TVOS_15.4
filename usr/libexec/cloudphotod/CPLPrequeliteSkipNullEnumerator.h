//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSFastEnumeration;

@interface CPLPrequeliteSkipNullEnumerator : NSObject
{
    id <NSFastEnumeration> _enumerator;	// 8 = 0x8
    unsigned long long _sizeOfItemPtr;	// 16 = 0x10
    id *_itemPtr;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000467ac
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x001000000004665c
- (void)dealloc;	// IMP=0x001000000004661d
- (id)initWithEnumerator:(id)arg1;	// IMP=0x00100000000465b2

@end

