//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXGSpriteMetadataStore : NSObject
{
    unsigned short _resizableCapInsetsCapacity;	// 8 = 0x8
    CDStruct_0054b44d *_resizableCapInsets;	// 16 = 0x10
    unsigned short _numberOfResizableCapInsets;	// 24 = 0x18
}

@property(readonly, nonatomic) const CDStruct_0054b44d *resizableCapInsets; // @synthesize resizableCapInsets=_resizableCapInsets;
@property(readonly, nonatomic) unsigned short numberOfResizableCapInsets; // @synthesize numberOfResizableCapInsets=_numberOfResizableCapInsets;
- (unsigned short)_indexOfResizableCapInsets:(CDStruct_0054b44d)arg1;	// IMP=0x00000000008c19f5
- (unsigned short)addResizableCapInsets:(CDStruct_0054b44d)arg1;	// IMP=0x00000000008c195b
- (void)dealloc;	// IMP=0x00000000008c1921
- (id)init;	// IMP=0x00000000008c18cf

@end
