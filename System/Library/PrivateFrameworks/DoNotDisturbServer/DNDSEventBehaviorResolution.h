//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>

@class DNDClientEventBehavior, NSDate, NSString, NSUUID;

@interface DNDSEventBehaviorResolution : NSObject <NSCopying>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    DNDClientEventBehavior *_eventBehavior;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
    unsigned long long _outcome;	// 40 = 0x28
    unsigned long long _reason;	// 48 = 0x30
}

+ (id)resolutionForDate:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3 outcome:(unsigned long long)arg4 reason:(unsigned long long)arg5;	// IMP=0x0000000000052381
- (void).cxx_destruct;	// IMP=0x0000000000052d0a
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy, nonatomic) DNDClientEventBehavior *eventBehavior; // @synthesize eventBehavior=_eventBehavior;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000052cc3
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x0000000000052b3a
- (id)redactedDescription;	// IMP=0x0000000000052b23
- (id)description;	// IMP=0x0000000000052b0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052692
- (unsigned long long)hash;	// IMP=0x0000000000052578
- (id)_initWithUUID:(id)arg1 date:(id)arg2 eventBehavior:(id)arg3 clientIdentifier:(id)arg4 outcome:(unsigned long long)arg5 reason:(unsigned long long)arg6;	// IMP=0x000000000005245b

@end

