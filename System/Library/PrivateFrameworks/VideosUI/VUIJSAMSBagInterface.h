//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIJSAMSBagDelegate-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIJSAMSBagInterface <VUIJSAMSBagDelegate>
{
}

+ (id)convertNSErrorIntoDict:(id)arg1;	// IMP=0x00000000000ab38c
+ (id)generateResponseDictionary:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000ab289
- (void)registerBagKey:(id)arg1 withValueType:(unsigned long long)arg2;	// IMP=0x00000000000ab270
- (void)dictionaryForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000aae5e
- (void)URLForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000aaa2a
- (void)stringForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000aa618
- (void)integerForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000aa206
- (void)doubleForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000a9df4
- (void)boolForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000a99e2
- (void)arrayForKeyWithCompletion:(id)arg1:(id)arg2;	// IMP=0x00000000000a9596
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000a94a2
- (id)URLForKey:(id)arg1;	// IMP=0x00000000000a937e
- (id)stringForKey:(id)arg1;	// IMP=0x00000000000a928a
- (id)integerForKey:(id)arg1;	// IMP=0x00000000000a9196
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000a90a2
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000a8fae
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000a8eba
@property(readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;

@end

