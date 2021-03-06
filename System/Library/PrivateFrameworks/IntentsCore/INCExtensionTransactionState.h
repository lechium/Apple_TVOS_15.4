//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INIntent, INIntentResponse, NSSet;

@interface INCExtensionTransactionState : NSObject
{
    long long _type;	// 8 = 0x8
    INIntent *_intent;	// 16 = 0x10
    INIntentResponse *_intentResponse;	// 24 = 0x18
    NSSet *_userActivities;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000006e54
@property(readonly, copy, nonatomic) NSSet *userActivities; // @synthesize userActivities=_userActivities;
@property(readonly, nonatomic) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000006cd2
- (id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4;	// IMP=0x0000000000006c0f

@end

