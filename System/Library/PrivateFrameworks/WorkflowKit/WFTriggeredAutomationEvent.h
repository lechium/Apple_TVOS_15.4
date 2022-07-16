//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFTriggeredAutomationEvent
{
    _Bool _requiredRuntimeConfirmation;	// 8 = 0x8
    unsigned int _batchCount;	// 12 = 0xc
    unsigned int _batchDroppedCount;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSString *_triggerType;	// 32 = 0x20
}

+ (id)serializablePropertyTransformers;	// IMP=0x0000000000185c62
+ (Class)codableEventClass;	// IMP=0x0000000000185c51
- (void).cxx_destruct;	// IMP=0x0000000000185dcc
@property(nonatomic) unsigned int batchDroppedCount; // @synthesize batchDroppedCount=_batchDroppedCount;
@property(nonatomic) unsigned int batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) _Bool requiredRuntimeConfirmation; // @synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation;
@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

