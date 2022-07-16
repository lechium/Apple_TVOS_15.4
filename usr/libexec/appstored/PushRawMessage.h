//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface PushRawMessage : NSObject
{
    unsigned long long _topic;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

+ (unsigned long long)getTopicFromString:(id)arg1;	// IMP=0x0040000000195270
+ (id)getTopicString:(unsigned long long)arg1;	// IMP=0x0010000000195207
- (void).cxx_destruct;	// IMP=0x00200000001955ec
- (id)description;	// IMP=0x0010000000195474
- (unsigned long long)hash;	// IMP=0x001000000019545e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001953f7
- (_Bool)isEqualToMessage:(id)arg1;	// IMP=0x0010000000195385
@property(readonly) NSDate *timestamp;
@property(readonly) NSDictionary *userInfo;
@property(readonly) unsigned long long pushTopic;
- (id)initWithAPSMessage:(id)arg1;	// IMP=0x00100000001950c6

@end
