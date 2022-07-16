//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPFileTransferItem;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RPFileTransferLargeFileReceiveTask : NSObject
{
    int _fileFD;	// 8 = 0x8
    struct CC_SHA256state_st _sha256Ctx;	// 12 = 0xc
    RPFileTransferItem *_fileItem;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_queue;	// 128 = 0x80
    unsigned long long _taskID;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000029834
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RPFileTransferItem *fileItem; // @synthesize fileItem=_fileItem;
@property(nonatomic) int fileFD; // @synthesize fileFD=_fileFD;

@end

