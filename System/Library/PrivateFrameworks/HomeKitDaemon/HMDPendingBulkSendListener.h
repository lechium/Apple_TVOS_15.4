//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDDataStreamBulkSendListener;

@interface HMDPendingBulkSendListener : NSObject
{
    id <HMDDataStreamBulkSendListener> _listener;	// 8 = 0x8
    NSString *_fileType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f744f
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) __weak id <HMDDataStreamBulkSendListener> listener; // @synthesize listener=_listener;
- (id)initWithListener:(id)arg1 fileType:(id)arg2;	// IMP=0x00000000001f737b

@end

