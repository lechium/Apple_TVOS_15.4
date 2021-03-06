//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    unsigned long long _priority;	// 24 = 0x18
    NSString *_sortIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002fda6
+ (id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;	// IMP=0x000000000002f910
- (void).cxx_destruct;	// IMP=0x000000000003006d
@property(readonly, copy, nonatomic) NSString *sortIdentifier; // @synthesize sortIdentifier=_sortIdentifier;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002feb6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fdae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002fd9b
- (id)description;	// IMP=0x000000000002fd2f
- (id)_description;	// IMP=0x000000000002fc79
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002fb6d
- (unsigned long long)hash;	// IMP=0x000000000002fa9b
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4;	// IMP=0x000000000002f9a9

@end

