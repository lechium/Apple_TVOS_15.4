//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GEOAPUploadPolicies : NSObject
{
    NSObject<OS_dispatch_queue> *_isoQueue;	// 8 = 0x8
    NSMutableDictionary *_policyDict;	// 16 = 0x10
}

+ (id)sharedPolicies;	// IMP=0x00000000012350e1
- (void).cxx_destruct;	// IMP=0x0000000001236374
- (id)uploadPolicyForUploadPolicyType:(int)arg1;	// IMP=0x000000000123623b
- (double)ttlForUploadPolicyType:(int)arg1;	// IMP=0x00000000012361eb
- (void)_updatePolicyConfigForUploadPolicyConfigType:(int)arg1 configKey:(CDStruct_d6563f51)arg2;	// IMP=0x00000000012355bb
- (id)init;	// IMP=0x0000000001235136

@end

