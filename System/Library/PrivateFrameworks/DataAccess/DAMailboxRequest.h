//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMailboxRequest : NSObject
{
    int _requestType;	// 8 = 0x8
    int _bodyFormat;	// 12 = 0xc
    NSString *_messageID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a36f
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (id)init;	// IMP=0x000000000001a2f7

@end

