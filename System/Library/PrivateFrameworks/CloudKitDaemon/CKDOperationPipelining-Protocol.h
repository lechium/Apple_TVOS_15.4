//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CKDOperationPipelining <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) NSString *pipeliningDescription;
@end

