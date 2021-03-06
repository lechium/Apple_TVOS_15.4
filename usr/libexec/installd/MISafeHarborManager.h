//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MISafeHarborManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x0040000000058330
- (id)safeHarborListForType:(long long)arg1 withError:(id *)arg2;	// IMP=0x0040000000058d3d
- (_Bool)removeSafeHarborWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000058655
- (_Bool)registerSafeHarborAtURL:(id)arg1 withOptions:(id)arg2 forIdentifier:(id)arg3 ofType:(long long)arg4 error:(id *)arg5;	// IMP=0x00100000000583bd

@end

