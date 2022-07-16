//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXSimpleRuntimeManager : NSObject
{
    _Bool _systemWideServer;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    CDUnknownBlockType _parameterizedAttributeCallback;	// 16 = 0x10
    CDUnknownBlockType _attributeCallback;	// 24 = 0x18
    CDUnknownBlockType _setAttributeCallback;	// 32 = 0x20
    CDUnknownBlockType _performActionCallback;	// 40 = 0x28
    CDUnknownBlockType _clientObserverCallback;	// 48 = 0x30
    CDUnknownBlockType _hitTestCallback;	// 56 = 0x38
    CDUnknownBlockType _applicationElementCallback;	// 64 = 0x40
    CDUnknownBlockType _outgoingValuePreprocessor;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00000000000020ac
- (void).cxx_destruct;	// IMP=0x0000000000002f47
@property(copy, nonatomic) CDUnknownBlockType outgoingValuePreprocessor; // @synthesize outgoingValuePreprocessor=_outgoingValuePreprocessor;
@property(copy, nonatomic) CDUnknownBlockType applicationElementCallback; // @synthesize applicationElementCallback=_applicationElementCallback;
@property(copy, nonatomic) CDUnknownBlockType hitTestCallback; // @synthesize hitTestCallback=_hitTestCallback;
@property(copy, nonatomic) CDUnknownBlockType clientObserverCallback; // @synthesize clientObserverCallback=_clientObserverCallback;
@property(copy, nonatomic) CDUnknownBlockType performActionCallback; // @synthesize performActionCallback=_performActionCallback;
@property(copy, nonatomic) CDUnknownBlockType setAttributeCallback; // @synthesize setAttributeCallback=_setAttributeCallback;
@property(copy, nonatomic) CDUnknownBlockType attributeCallback; // @synthesize attributeCallback=_attributeCallback;
@property(copy, nonatomic) CDUnknownBlockType parameterizedAttributeCallback; // @synthesize parameterizedAttributeCallback=_parameterizedAttributeCallback;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool systemWideServer; // @synthesize systemWideServer=_systemWideServer;
- (void)start;	// IMP=0x0000000000002101

@end
