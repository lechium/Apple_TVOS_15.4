//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SignpostSupportObjectFilter : NSObject
{
    CDUnknownBlockType _filterBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006f2f
@property(readonly, copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (_Bool)passesObject:(id)arg1;	// IMP=0x0000000000006ec2
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e4d

@end

