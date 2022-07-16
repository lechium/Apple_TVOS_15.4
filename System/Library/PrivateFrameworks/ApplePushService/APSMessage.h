//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ApplePushService/NSCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APSMessage : NSObject <NSCoding>
{
    NSMutableDictionary *_plist;	// 8 = 0x8
    NSMutableDictionary *_properties;	// 16 = 0x10
    void *_xpcMessage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013a0f
- (id)dictionaryRepresentation;	// IMP=0x000000000001391c
- (void)setInstanceObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000137d7
- (id)instanceObjectForKey:(id)arg1;	// IMP=0x0000000000013687
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001356f
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001341f
@property(nonatomic) unsigned long long sendRTT;
- (id)guid;	// IMP=0x0000000000013361
- (void)setGuid:(id)arg1;	// IMP=0x0000000000013348
@property(nonatomic) unsigned long long identifier;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(retain, nonatomic) NSString *correlationIdentifier;
@property(retain, nonatomic) NSString *topic;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000130b9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013016
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000012ee9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000012ed5
- (id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2;	// IMP=0x0000000000012e08

@end
