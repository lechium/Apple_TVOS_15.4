//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASRTCLoggingProcessor : NSObject
{
    CDUnknownBlockType _operation;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001fd64
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) CDUnknownBlockType operation; // @synthesize operation=_operation;
- (id)initWithOperation:(CDUnknownBlockType)arg1 priority:(unsigned long long)arg2;	// IMP=0x000000000001fcda

@end

