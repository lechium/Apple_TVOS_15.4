//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXMTask : NSObject
{
    _Bool _complete;	// 8 = 0x8
    CDUnknownBlockType _taskCompleteBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000221ed
@property(copy, nonatomic) CDUnknownBlockType taskCompleteBlock; // @synthesize taskCompleteBlock=_taskCompleteBlock;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)markAsComplete:(_Bool)arg1;	// IMP=0x0000000000022137

@end

