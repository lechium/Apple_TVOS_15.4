//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PVCanceler : NSObject
{
    _Bool _canceled;	// 8 = 0x8
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
}

+ (id)cancelerWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1e4
- (void).cxx_destruct;	// IMP=0x000000000000b1d4
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;

@end

