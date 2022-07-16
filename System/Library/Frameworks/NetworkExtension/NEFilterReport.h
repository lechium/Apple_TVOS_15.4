//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>
{
    NEFilterFlow *_flow;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    long long _event;	// 24 = 0x18
    unsigned long long _bytesInboundCount;	// 32 = 0x20
    unsigned long long _bytesOutboundCount;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063453
- (void).cxx_destruct;	// IMP=0x000000000006385a
@property unsigned long long bytesOutboundCount; // @synthesize bytesOutboundCount=_bytesOutboundCount;
@property unsigned long long bytesInboundCount; // @synthesize bytesInboundCount=_bytesInboundCount;
@property(readonly) long long event; // @synthesize event=_event;
@property long long action; // @synthesize action=_action;
@property(retain) NEFilterFlow *flow; // @synthesize flow=_flow;
- (id)initWithFlow:(id)arg1 action:(long long)arg2 event:(long long)arg3;	// IMP=0x000000000006373d
- (id)init;	// IMP=0x0000000000063724
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063653
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000063553
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006345b

@end
