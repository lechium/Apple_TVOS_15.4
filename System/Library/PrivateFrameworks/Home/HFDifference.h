//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface HFDifference : NSObject <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

+ (id)difference:(id)arg1 priority:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ccde
+ (id)difference:(id)arg1 priority:(unsigned long long)arg2;	// IMP=0x000000000003cc76
+ (id)difference:(id)arg1;	// IMP=0x000000000003cc2d
- (void).cxx_destruct;	// IMP=0x000000000003d08a
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)_subclass_description;	// IMP=0x000000000003d038
- (id)description;	// IMP=0x000000000003cfe8
- (id)descriptionBuilder;	// IMP=0x000000000003ce6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003cd9a
- (id)withPriority:(unsigned long long)arg1;	// IMP=0x000000000003cd57
- (id)initWithKey:(id)arg1;	// IMP=0x000000000003cc16
- (id)initWithKey:(id)arg1 priority:(unsigned long long)arg2;	// IMP=0x000000000003cb98

@end

