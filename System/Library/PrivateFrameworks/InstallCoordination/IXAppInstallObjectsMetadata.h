//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface IXAppInstallObjectsMetadata : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    NSHashTable *_instances;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045833
@property(retain, nonatomic) NSHashTable *instances; // @synthesize instances=_instances;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)addObject:(id)arg1;	// IMP=0x000000000004577d
- (id)init;	// IMP=0x00000000000456e9

@end

