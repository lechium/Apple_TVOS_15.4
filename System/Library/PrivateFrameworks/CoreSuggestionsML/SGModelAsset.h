//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGModelAsset : NSObject
{
}

+ (id)asset;	// IMP=0x0000000000009486
+ (id)dictionaryWithPlistFilename:(id)arg1;	// IMP=0x00000000000093b7
+ (id)nameDetectorRules;	// IMP=0x0000000000009397
+ (id)dpRecorderRules;	// IMP=0x0000000000009377
+ (id)signatureRules;	// IMP=0x0000000000009357
+ (id)metricsConfig;	// IMP=0x0000000000009337
+ (id)quickResponses;	// IMP=0x0000000000009317
+ (id)mappings;	// IMP=0x00000000000092f7
+ (id)rules;	// IMP=0x00000000000092d7
+ (id)_assetWithName:(id)arg1 andLoadBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009167
+ (void)_reset;	// IMP=0x0000000000009102
+ (void)_invokeOnUpdateBlock;	// IMP=0x0000000000008f91
+ (void)registerOnUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008ee4

@end

