//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface BMDSLJSONArchiver : NSCoder
{
}

+ (id)archiveCompatibleObjectWithObject:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000000008efb
+ (id)archivedDataWithObject:(id)arg1;	// IMP=0x0000000000008e91
+ (id)archivedStringWithObject:(id)arg1;	// IMP=0x0000000000008e2c
+ (id)archivedDataWithDSL:(id)arg1;	// IMP=0x0000000000008d60
+ (id)archivedStringWithDSL:(id)arg1;	// IMP=0x0000000000008cd5
+ (void)registerJSONTransformers;	// IMP=0x000000000000c36a

@end

