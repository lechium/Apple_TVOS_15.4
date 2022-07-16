//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol DAESubscribedCalendarDownloadDelegate, OS_dispatch_queue;

@interface DAESubscriptionCalendarDownloadContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DAESubscribedCalendarDownloadDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001fd3b
@property(retain, nonatomic) id <DAESubscribedCalendarDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)asyncCallOutToDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fc60
- (void)callOutToDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fbb9

@end

