//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriTaskDelivering-Protocol.h>

@class AFSiriTaskService, NSString;
@protocol AFSiriTaskServiceDelegate, OS_dispatch_queue;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>
{
    AFSiriTaskService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <AFSiriTaskServiceDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ec1a6
@property(nonatomic) __weak id <AFSiriTaskServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak AFSiriTaskService *service; // @synthesize service=_service;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ebdd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

