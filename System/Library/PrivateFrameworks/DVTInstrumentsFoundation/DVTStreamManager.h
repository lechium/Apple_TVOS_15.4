//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol DVTInputStream><DVTOutputStream, OS_dispatch_queue;

@interface DVTStreamManager : NSObject
{
    id <DVTInputStream><DVTOutputStream> _stream;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _currentStreamSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000390e9
@property(readonly) unsigned long long currentStreamSize;
- (id)export;	// IMP=0x0000000000038efb
- (long long)commit:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038dd6
- (long long)commit:(const void *)arg1 bufferSize:(unsigned long long)arg2 error:(id *)arg3 destructor:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038b97
- (id)initWithStream:(id)arg1;	// IMP=0x0000000000038ab5

@end
