//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PETLoggingUtils : NSObject
{
}

+ (id)messageKeyStringForKey:(id)arg1;	// IMP=0x0000000000014978
+ (id)domainStringForEvent:(id)arg1 featureId:(id)arg2;	// IMP=0x0000000000014945
+ (void)_pushToBuffer:(id)arg1 keyStringForStringifiedPairs:(id)arg2;	// IMP=0x00000000000147fb
+ (id)keyStringForStringifiedPairs:(id)arg1;	// IMP=0x00000000000147a0
+ (id)keyStringForEvent:(id)arg1 featureId:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;	// IMP=0x0000000000014629

@end
