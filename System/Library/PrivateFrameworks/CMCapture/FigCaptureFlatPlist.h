//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface FigCaptureFlatPlist : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
    CDStruct_e993e376 _bplist;	// 16 = 0x10
}

+ (id)flatPlistWithContentsOfURL:(id)arg1;	// IMP=0x0000000000002078
+ (id)flatPlistWithContentsOfFile:(id)arg1;	// IMP=0x000000000000203c
- (const CDStruct_e993e376 *)bplist;	// IMP=0x0000000000002546
- (void)dealloc;	// IMP=0x000000000000221d

@end

