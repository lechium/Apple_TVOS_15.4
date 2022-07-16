//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, RPCloudMessageContext;

@interface RPBufferedCloudMessage : NSObject
{
    unsigned char _frameType;	// 8 = 0x8
    NSDictionary *_message;	// 16 = 0x10
    RPCloudMessageContext *_msgCtx;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000051537
@property(retain, nonatomic) RPCloudMessageContext *msgCtx; // @synthesize msgCtx=_msgCtx;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(nonatomic) unsigned char frameType; // @synthesize frameType=_frameType;

@end

