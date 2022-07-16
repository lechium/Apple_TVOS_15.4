//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATIDSServiceConnectionDataChunker-Protocol.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATConcreteIDSServiceConnectionDataChunker : NSObject <CATIDSServiceConnectionDataChunker>
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
    long long mMaxDataLength;	// 16 = 0x10
    unsigned long long mNextDataNumber;	// 24 = 0x18
    unsigned long long mNextSequenceNumber;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ba55
- (id)chunkDataIntoMessageContent:(id)arg1;	// IMP=0x000000000002b85a
- (id)initWithWorkQueue:(id)arg1 maxDataLength:(long long)arg2;	// IMP=0x000000000002b7e4

@end

