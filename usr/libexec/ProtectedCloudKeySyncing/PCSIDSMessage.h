//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMessageContext, NSDictionary, NSString;

@interface PCSIDSMessage : NSObject
{
    NSDictionary *_message;	// 8 = 0x8
    IDSMessageContext *_idsContext;	// 16 = 0x10
    NSString *_fromID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000005449
@property(readonly) NSString *fromID; // @synthesize fromID=_fromID;
@property(readonly) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(readonly) NSDictionary *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 idsContext:(id)arg2 fromID:(id)arg3;	// IMP=0x0010000000005356

@end

