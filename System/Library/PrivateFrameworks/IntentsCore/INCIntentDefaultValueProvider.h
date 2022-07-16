//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject
{
    INIntent *_intent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b006
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (_Bool)isExpectedDefaultValueError:(id)arg1;	// IMP=0x000000000000af6d
- (void)loadDefaultValuesWithAttributes:(id)arg1 extensionProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a843
- (void)loadDefaultValuesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a546
- (id)initWithIntent:(id)arg1;	// IMP=0x000000000000a4bc

@end

