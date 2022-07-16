//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFAppSessionCompletedEvent
{
    unsigned int _duration;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_source;	// 24 = 0x18
}

+ (id)serializablePropertyTransformers;	// IMP=0x0000000000066a9a
+ (Class)codableEventClass;	// IMP=0x0000000000066a89
- (void).cxx_destruct;	// IMP=0x0000000000066b91
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

