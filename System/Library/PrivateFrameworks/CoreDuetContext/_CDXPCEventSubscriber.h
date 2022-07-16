//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface _CDXPCEventSubscriber : NSObject
{
    unsigned int _uid;	// 8 = 0x8
    unsigned long long _token;	// 16 = 0x10
    NSObject<OS_xpc_object> *_descriptor;	// 24 = 0x18
    NSString *_streamName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003819f
@property(readonly, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long token; // @synthesize token=_token;
- (id)description;	// IMP=0x0000000000037fb3
- (unsigned long long)hash;	// IMP=0x0000000000037fa9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037f45
@property(readonly, nonatomic) NSString *clientIdentifier;
- (id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3 streamName:(id)arg4;	// IMP=0x0000000000037e0c

@end

