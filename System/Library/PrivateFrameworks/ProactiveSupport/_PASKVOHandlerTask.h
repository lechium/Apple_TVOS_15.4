//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PASKVOHandlerTask : NSObject
{
    NSString *_keyPath;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    CDUnknownBlockType _afterBlock;	// 24 = 0x18
    CDUnknownBlockType _beforeAndAfterBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a3df
@property(copy, nonatomic) CDUnknownBlockType beforeAndAfterBlock; // @synthesize beforeAndAfterBlock=_beforeAndAfterBlock;
@property(copy, nonatomic) CDUnknownBlockType afterBlock; // @synthesize afterBlock=_afterBlock;
@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;

@end

